#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int octal=0,hex=0,counter=1,nc=n;;
    while(n)
    {
        int r=n%8;
        octal +=r*counter;
        n/=8;
        counter*=10;
    }
    printf("\n the number in octal is : %d",octal);
    int counter2=1;
    while(nc)
    {
        int r=nc%16;
        hex +=r*counter2;
        n/=16;
        counter2*=10;
    }
    return 0;
}