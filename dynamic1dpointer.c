#include<stdio.h>
#include<stdlib.h>
int main()
{
int i,n;
int *p=(int*)malloc(5*sizeof(int));
for(i=0;i<5;i++)
*(p+i)=i+1;
for(i=0;i<5;i++)
printf("\n%d",*(p+i));
free(p);
return 0;

}
