#include<stdio.h>
#include<stdlib.h>
#define SIZE 2
int top=-1;
void push(int [], int);
int pop(int[]);
int main()
{
    int arr[SIZE],n,m,ch;
    while(1)
    {
        printf("1 : PUSH \n");
        printf("2 : POP \n");
        printf("3 : EXIT \n");
        printf("Enter choice : \n");
        scanf("%d",&ch);
    switch(ch)
    {
        case 1 : printf("Enter element to push : \n");
                 scanf("%d",&n);
                 push(arr,n);
                 break;
        case 2 : m = pop(arr);
                 printf("The popped element is : %d \n",m);
                 break;
        case 3 : printf("SYSTEM EXITING !!!!! \n");
                 exit(1);
        default : printf("INVALID !! \n ");
    }
    }
    return 0;

}

void push(int a[] , int x)
{
    if(top== SIZE-1)
    {
        printf("Stack Full \n");
        exit(1);
    }
    a[++top]=x;
}

int pop(int a[])
{
    if(top==-1)
    {
        printf("Stack Empty \n");
        exit(1);
    }
    return a[top--];
}

