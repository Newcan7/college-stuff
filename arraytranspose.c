#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,j;
    int *p=(int*)malloc(5*5*sizeof(int));
    int *t=(int*)malloc(5*5*sizeof(int));
    if(!p || !t)
    {
        printf("Memory allocation failed! \n");
        return 1;
    }
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            *(p+i*5+j)=i+j;
        }
    }
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            *(t+i*5+j)=*(p+j*5+i);
        }
    }
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            printf("%3d",*(p+i*5+j));
        }
            printf("\n");
    }
    printf("\n");
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            printf("%3d",*(t+i*5+j));
        }
            printf("\n");
    }
    free(p);
    free(t);
    return 0;

}