#include<stdio.h>
int main()
{
    int i,m,n,neon;
    printf("Enter a number : ");
    scanf("%d",&n);
    m=n;
    n*=n;
    while(n)
    {
        r=n%10;
        neon+=r;
        n/=10;

    }
if(m==neon)
printf("peteson number");
else
printf("not a peteson number");
    return 0;
}