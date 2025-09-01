#include<stdio.h>
int main()
{
    int i,m,n,pete=0,fact,r;
    printf("Enter a number : ");
    scanf("%d",&n);
    m=n;
    while(n)
    {
    r=n%10;
    for(i=1,fact=1;i<=r;i++)
    fact*=i;
    pete+=fact;
    n/=10;
    }
if(m==pete)
printf("peteson number");
else
printf("not a peteson number");
    return 0;
}