#include<stdio.h>
int div(int,int,int);
int main()
{
    int m,n;
    scanf("%d %d",&m,&n);
    printf("%d",div(m,n,0));
    return 0;
}
int div(int x,int y,int counter)
{
    if(x<y)
    return counter;
    else
    return div(x-y,y,counter+1);
    
}