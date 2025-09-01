#include<stdio.h>
#include<limits.h>
int main()
{
    int a=15;
    int b = 16;
    a= a>>2;
    b= b<<2;
    printf("%d %d %d",SHRT_MIN,LONG_MAX,INT_MAX);
    return 0;
}  