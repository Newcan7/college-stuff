#include<stdio.h>
int main()
{
    int n,r,s;
    scanf("%d",&n);
    while(n*n)
    {
        r=n%10;
        s+=r;
        n/=10;
    }
    if(!(s%2))
    printf("sum of digits are even");
    else
    printf("sum of digits are odd");
    return 0;
}