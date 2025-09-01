#include<stdio.h>
int swap(int *x,int *y);
int main()
{   
    int a,b;
    printf("enter two numbers :");
    scanf("%d %d",&a,&b);
    swap(&a,&b);
    printf("%d %d",a,b);
    return 0;
}
int swap(int *x,int *y)
{
    int z;
    z=*x;
    *x=*y;
    *y=z;
    return 0;

}