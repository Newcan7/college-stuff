#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,vowel=0,conso=0,space=0;
    char str[100];
    gets(str);
    for(i=0;str[i];i++)
    {
        if(97<=str[i]<=122)
        {if(str[i]==97 ||str[i]==101 ||str[i]==105 ||str[i]==111 ||str[i]==117)
        vowel+=1;
        else
        conso+=1;}
        if(str[i]==32)
        space+=1;
    }
    printf("%d %d %d",vowel,conso,space);
    return 0;
}