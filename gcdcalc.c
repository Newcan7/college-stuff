#include<stdio.h>
int hcf_calc(int,int);
int main()
{
    int num1,num2;
    scanf("%d %d",&num1,&num2);
    printf("%d",hcf_calc(num1,num2));
    return 0;
}
int hcf_calc(int x,int y)
{
    if(!x)
    return y;
    if(!y)
    return x;
    else
    return hcf_calc(y,x%y);
}