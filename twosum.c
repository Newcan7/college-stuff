#include<stdio.h>
#include<stdlib.h>
void sum(int arr[6],int tar, int x , int y);
int main()
{
    int list[6],target,i,j,len=6;
    printf("Enter the Numbers :");
    for(i=0;i<6;i++)
    scanf("%d",&list[i]); 
    printf("Enter the Target :");
    scanf("%d",&target);
    sum(list,target,0,0);
    return 0;
}
void sum(int arr[6],int tar, int x ,int y)
{
int str[2];
if(y<6)
{
    if (arr[x]+arr[y]==tar)
    {
    printf("the indices are : [%d,%d]",x,y );
    exit(0);
    }
    else
    sum(arr,tar,x,y+1);
}
sum(arr,tar,x+1,0);
}