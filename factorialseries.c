# include<stdio.h>
int factorial(int)
int main()
{
    int n,i,sum=0;
    printf("Enter last number : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    sum+=(1/factorial(i));
    return 0;
}
int factorial(int x)
{
    int i,fact=1;
    for(i=1;i<=x;i++)
    fact*=i;
    return fact;
}