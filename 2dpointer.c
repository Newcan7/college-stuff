#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,j,k=0;
    int *p=(int*)malloc(3*3*sizeof(int));
    for(i=0;i<3;i++)
    for(j=0;j<3;j++)
    {
        *(p+i*3 +j)=k;
        k++;
    }
    *(p+4)=100;
    for(i=0;i<3;i++)
    {
    for(j=0;j<3;j++)
    printf("%d   ",*(p+i*3+j));
    printf("\n");
    }
    return 0;
}