#include<stdio.h>
#include<stdlib.h>
int main()
{
int i,j;
int *p=(int*)malloc(4*4*sizeof(int));
if(!p)
{
    printf("Memory allocation error:\n");
    return 1;
}
for(i=0;i<4;i++)
for(j=0;j<4;j++){
*(p+i*4+j)=i*j;}
for(i=0;i<4;i++)
{
for(j=0;j<4;j++)
printf("%3d",*(p+i*4+j));
printf("\n");
}
free(p);
return 0;
}