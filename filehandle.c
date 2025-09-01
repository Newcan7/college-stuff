#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fptr,*copy;
    fptr=fopen("names.txt","r");
    copy=fopen("copy.txt","w");
    char str[1000];
    if(fptr && copy)
    {
    while(fgets(str,1000,fptr))
    fputs(str,copy);
    }
    fclose(fptr);
    fclose(copy);
    return 0;
}