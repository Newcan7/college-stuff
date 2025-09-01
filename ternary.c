#include<stdio.h>
int main() 
{   int a,b,c;
    printf("\n Enter Three Numbers :");
    scanf("%d %d %d", &a, &b, &c);
    int max = (a>b)?(a>c)?a:c:(b>c)?b:c;
    printf("\n Largest number is : %d", max);
    return 0 ;
}