#include <stdio.h>
int fibonacci(int x) {
    if (x == 0) {
        return 0;
    }
    if (x == 1) {
        return 1;
    }
    return fibonacci(x - 1) + fibonacci(x - 2);
}

int main() {
    int n, test = 0, flag = 0, i;
    printf("\nEnter number: ");
    scanf("%d", &n);
    for (i = 0; ; i++) {
        test = fibonacci(i);
        if (test == n) {
            flag = 1;
            break;
        }
        if (test > n) {
            break;
        }
    }
    if (flag == 1)
        printf("The number is present in the Fibonacci sequence\n");
    else
        printf("Nope, not present\n");
    return 0;
}
