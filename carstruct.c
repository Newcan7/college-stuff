#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Car {
    char model[50];
    int rate;
};

int main() {
    int i, n;
    struct Car *p;
    p = (struct Car*) malloc(3 * sizeof(struct Car));
    if (p == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }
    for (i = 0; i < 3; i++) {
        printf("\nEnter Car Model %d: ", i + 1);
        scanf("%s", (p + i)->model);
        printf("\nEnter Daily Rental Rate for Car %d: ", i + 1);
        scanf("%d", &(p + i)->rate);
    }
    printf("\nEnter number of days: ");
    scanf("%d", &n);
    for (i = 0; i < 3; i++) {
        int total_cost = (p + i)->rate * n;
        printf("\nThe total cost for renting %s for %d days is: %d\n", (p + i)->model, n, total_cost);
    }
    free(p);

    return 0;
}
