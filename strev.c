#include<stdio.h>
#include<string.h>
void strReverse(char *,int,int);
int main()
{
    char str[100];
    int i,j,n;
    gets(str);
    n=strlen(str);
    strReverse(str,0,n-1);
    puts(str);
    return 0;
}
void strReverse(char *str,int low,int high)
{
    if(low>=high)
    return;
    char temp=*(str+low);
    *(str+low)=*(str+high);
    *(str+high)=temp;
    strReverse(str,low+1,high-1);
}
