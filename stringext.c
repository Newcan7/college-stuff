#include<stdio.h>
#include<string.h>
#include<stdlib.h>
char* subs(char str[],int low,int high);
int main()
{   
    int i,low,high;
    char string[50],*ptr;
    gets(string);
    printf("Enter low and high");
    scanf("%d %d", &low,&high);
    ptr=subs(string,low,high);
    for(i=0;i<(high-low+1);i++)
    printf("%c",*(ptr+i));
    return 0;
}
char* subs(char str[],int low,int high)
{   
    char *substring=(char*)malloc((high-low+2)*sizeof(char));
    int i,j;
    for(i=low,j=0;i<=high;i++)
    *(substring+j)=str[i];
    *(substring+j)='\0';
    return substring;
}