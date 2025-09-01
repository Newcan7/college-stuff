#include <stdio.h>
void main() 
{
 int a,b,c;
 char o;
 printf("\n enter operant (+, -, , /) ");
 o = getchar();
 printf("\n enter the numbers:");
 scanf("%d %d",&a, &b);
 switch (o)
 {
     case '+':
     c=a+b;
     break;
     case '-':
     c=a-b;
     break;
     case '*':
     c=a*b;
     break;
     case '/':
     c=a/b;
     break;
 }
 printf("\n result = %d",c);
}