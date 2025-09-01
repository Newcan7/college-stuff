#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,j;
    int *p=(int*)malloc(3*3*sizeof(int));
    if(!p)
    {
        printf("Memory Allocation failed ! \n");
        return 1;
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",(p+i*3+j));
        }
    }
    int max=*p;
    int MAX=*p;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(*(p+i*3+j)>max)
            max=*(p+i*3+j);
        }
        if(max>MAX)
        MAX=max;
    }
    printf("Maximum is : %d",MAX);
    free(p);
    return 0;
}