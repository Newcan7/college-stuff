#include<stdio.h>
int main()
{
int n,i,j,min,minimum;
printf("Enter numbers to check");
scanf("%d",&n);
int marks[3][3];
for (i=0;i<3;i++)
for(j=0;j<3;j++)
scanf("%d",&marks[i][j]);
min=marks[0][0],minimum=marks[0][0];
for(i=0;i<3;i++)
{
    for(j=0;j<3;j++)
{
    if(min>marks[i][j])
    min= marks[i][j];
}
if(minimum>min);
minimum=min;
}

printf("the min is %d",minimum);
return 0;
}