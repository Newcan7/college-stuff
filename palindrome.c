#include<stdio.h>
#include<stdlib.h>
int main()
{
    int m,n,r,o=0;
    printf("Please Enter any number :");
    scanf("%d",&n);
    
    m=n;
    while(n)
   { 
    r=n%10;
    o=o*10+r;
    n/=10;
   }
   if(o == m)
   printf("palimdrome number");
   else
   printf("non palindrome");
   return 0;

}