#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,j,n;
    scanf("%d",&n);
    int *p = (int*)malloc(5*sizeof(int));
    for(i=0;i<5;i++)
    {   printf("Enter %dth element :",i+1);
        scanf("%d",&p[i]);
    }
    for(i=0;i<5;i++)
    for(j=0;j<5;j++)
    {
        if((p[i]+p[j])==n)
        printf("indices are %d %d",i,j);
        break;

    }
    return 0;
}