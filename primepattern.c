#include<stdio.h>
int isPrime(int);
int main()
{
    int i,j,k,l,n,test=2;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(l=1;l<=n-i;l++)
        printf("  ");
        for(j=1;j<=i;j++)
        {
            for(k=test+1;;k++)
            if(isPrime(k)==0)
            {
                printf("%d ",k);
                test=k;
                break;

            }
        }
        printf("\n ");
    }
    return 0;
}
int isPrime(int n)
{
    int i,flag=0;
    for(i=2;i<=n/i;i++)
    {
        if(!(n%i))
        {
            flag=1;
            break;
        }
    }
    return flag; // flag is 0 for prime and 1 for non prime number//
}