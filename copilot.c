#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* subs(char str[], int low, int high);

int main() {   
    int i, low, high;
    printf("Enter low and high: ");
    scanf("%d %d", &low, &high);
    getchar(); // To consume the newline character left by scanf

    char string[50], *ptr;
    printf("Enter the string: ");
    fgets(string, sizeof(string), stdin);
    string[strcspn(string, "\n")] = 0; // Remove newline character from fgets input

    ptr = subs(string, low, high);
    if (ptr != NULL) {
        for (i = 0; i < (high - low + 1); i++) {
            printf("%c", *(ptr + i));
        }
        printf("\n");
        free(ptr); // Free the dynamically allocated memory
    } else {
        printf("Invalid input.\n");
    }
    return 0;
}

char* subs(char str[], int low, int high) {   
    if (low > high || low < 0 || high >= strlen(str)) {
        return NULL; // Return NULL if indices are invalid
    }

    int length = high - low + 1;
    char *substring = (char*)malloc((length + 1) * sizeof(char));
    if (substring == NULL) {
        printf("Memory allocation failed.\n");
        return NULL;
    }

    int i, j;
    for (i = low, j = 0; i <= high; i++, j++) {
        substring[j] = str[i];
    }
    substring[j] = '\0';
    return substring;
}
