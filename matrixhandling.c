#include<stdio.h>
#include<stdlib.h>

int main() {
    int i, j, n, k;
    scanf("%d", &n);

    int *a = (int *)malloc(n * n * sizeof(int));
    int *b = (int *)malloc(n * n * sizeof(int));
    int *sum = (int *)malloc(n * n * sizeof(int));
    int *prod = (int *)malloc(n * n * sizeof(int));
    if (!a || !b || !sum || !prod) {
        printf("Memory Allocation Failed!\n");
        return 1;
    }
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            *(a + i * n + j) = i + j;
            *(b + i * n + j) = i + j;
            *(sum + i * n + j) = *(a + i * n + j) + *(b + i * n + j);
        }
    }
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            *(prod + i * n + j) = 0;
            for (k = 0; k < n; k++) {
                *(prod + i * n + j) += *(a + i * n + k) * *(b + k * n + j);
            }
        }
    }

    FILE *fptr, *copy;
    fptr = fopen("matrix_addition.txt", "w");
    copy = fopen("matrix_multiplication.txt", "w");
    if (!fptr || !copy) {
        printf("Error opening files!\n");
        free(a);
        free(b);
        free(sum);
        free(prod);
        return 1;
    }
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            fprintf(fptr, "%4d", *(sum + i * n + j));
        }
        fprintf(fptr, "\n");
    }
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            fprintf(copy, "%4d", *(prod + i * n + j));
        }
        fprintf(copy, "\n");
    }
    fclose(fptr);
    fclose(copy);
    free(a);
    free(b);
    free(sum);
    free(prod);

    return 0;
}
