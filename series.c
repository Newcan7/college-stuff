# include<stdio.h>
#include<math.h>
int factorial(int);
int main()
{
    int lim,i;
    float sum1=0,sum=0;
    for(i=1;i;i++)
    {
        sum=0;
        sum=(1.0f/factorial(i));
        sum= floor(sum*100000)/100000;
        sum1=floor(sum1*100000)/100000;
        if(sum1==sum)
        break;
        else
        sum1=sum;
        
    }
    printf("\n %f",sum);
    return 0;
}
int factorial(int x)
{
    int i,fact=1;
    for(i=1;i<=x;i++)
    fact*=i;
    return fact;
}