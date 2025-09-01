#include<stdio.h>
int main()
{
    int m,n,sum=0,sqr,r;
    printf("Enter a number : ");
    scanf("%d",&n);
    m=n;
    sqr=n*n;
    while(sqr)
    {
        r=sqr%10;
        sum+=r;
        sqr/=10;

    }
if(m==sum)
printf("neon number detected");
else
printf("not a neon number");
    return 0;
}