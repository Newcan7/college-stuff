# include <stdio.h>
int main()
{
    int n,i;
int prime(int);
printf("enter a number :");
scanf("%d",&n);
for(i=2;i<=(n/2);i++)
if (prime(i))
printf("%d",i);
    return 0;
}
int prime(int a)
{
    int x=0,i,b;
    for(i=2;i<=a/i;i++);
    {
        if(a%i !=0)
        {
            x=1;
           
        }
    }
        if (x==1)
        return 1;
        else
        return 0;
}