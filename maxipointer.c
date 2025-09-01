# include <stdio.h>
void maxima(int *x, int *y);
int main()
{
    int a,b;
    printf("Enter two numbers");
    scanf("%d %d", &a, &b);
    maxima(&a, &b);    
    return 0;
}
void maxima(int *x, int *y)
{
    if(*x>*y)
    {
        printf("\n %d is bigger",*x);
    }
    else
    {
        printf("\n %d is bigger",*y);
    }
}