#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct book{
        char title[50];
        char author[50];
        int price;
    };
int main()
{   int i;
    struct book rec[3];
    for(i=0;i<3;i++)
    {
        printf("\n Enter title of book %d",i+1);
        scanf("%s",&rec[i].title);
        printf("\n Enter author of book %d", i+1);
        scanf("%s",&rec[i].author);
        printf("\n Enter price of book %d",i+1);
        scanf("%d",&rec[i].price);
    }
    int max=rec[0].price;
    char max_title[50];
    strcpy(max_title,rec[0].title);
    for(i=1;i<3;i++)
    {
        if(rec[i].price>max)
        {
        max=rec[i].price;
        strcpy(max_title,rec[i].title); 
        }
    }
    printf("\n The maximum price is %d of book %s",max ,max_title);
    return 0;
    }