# include <stdio.h>
int main()
{
    char test[100],test1[100];
    int i;
    gets(test);
    for(i=0;test[i];i++)
    {
    if(65<=test[i] && test[i]<=90)
    test1[i]=test[i]+32;
    else if (97<=test[i] && test[i]<=122)
    test1[i]=test[i]-32;
    else
    test1[i]=test[i];
    }
    test1[i]='\0';
    puts(test1);
    return 0;
}