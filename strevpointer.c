#include<stdio.h>
#include<string.h>
void revstr(char *x,char copy[],int l,int counter);
int main()
{
char str[5000],copy[5000 ],*ptr=str;
printf("Please Enter String :");
gets(str);
strcpy(copy,str);
int length =strlen(copy);
revstr(ptr,copy,length,0);
puts(str);
return 0;
}

void revstr(char *x, char copy[],int l,int counter)
{
    if(counter<l)
    {
    *x=copy[l-(counter+1)];
    revstr(x+1,copy,l,counter+1);
    }
}