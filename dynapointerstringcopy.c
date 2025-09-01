#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
int i,j,n;
char str[]="Hello World";
n=strlen(str);
char *ptr =(char*)malloc(n*sizeof(char));
if(!ptr)
{
    printf("Memory allocation failed");
    return 1;
}
for(i=0;i<n;i++)
*(ptr+i)=str[i];
for(i=0;i<n;i++)
printf("%c",*(ptr+i));
free(ptr);
return 0;
}