#include<stdio.h>
#include<stdlib.h>
int sumOfSquareOfDigits(int x);
int genseq(int nth);
int main()
{
    int n,i;
    printf("Enter the nth term :");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    printf("\n %d", genseq(i));
    return 0;
}
int sumOfSquareOfDigits(int x)
{
    int r,sum=0;
    while(x)
    {
        r=x%10;
        sum+=(r*r);
        x/=10;
    }
    return sum;
}
int genseq(int nth)
{
    if(nth==1)
    return 3;
    int num = sumOfSquareOfDigits(genseq(nth-1));
    return num;

}