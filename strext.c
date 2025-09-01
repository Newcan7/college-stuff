#include<stdio.h>
#include<string.h>
int main()
{
    char str[100],strcopy[100];
    int a,b,i=0;
    gets(str);
    printf("Enter the first and last indice :");
    scanf("%d %d",&a,&b);
    for(i=a;i<=b;i++)
    strcopy[i]=str[i];
    strcopy[i]='\0';
    puts(strcopy);

}