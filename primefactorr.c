#include<stdio.h>
int isPrime(int);
int main()
{
    int i,num;
    scanf("%d",&num);
    for(i=2;i<=num/2;i++)
    {
        if(!(num%i))
        if(isPrime(i))
        printf("\n %d",i);
    }
    return 0;
}
int isPrime(int n)
{
    int i;
    for(i=2;i<n/i;i++)
         if(!(n%i))
            return 0;
    return 1;
}