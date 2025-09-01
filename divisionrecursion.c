#include<stdio.h>
int quotient(int,int,int);
int main()
{
    int n,j,flag=0;
    scanf("%d %d",&n,&j);
    printf("The quotient is : %d ",quotient(n,j,flag));
    return 0;
}
int quotient(int x,int y,int flag)
{     
    if(x<y)
    return flag;
    quotient(x-y,y,++flag);
}