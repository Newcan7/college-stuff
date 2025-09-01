#include<stdio.h>
#define SIZE 5
void selection_sort(int a[]);
void bubble_sort(int a[]);
void insertion_sort(int a[]);
void shell_sort(int a[]);
void display(int a[]);
int arr[SIZE];
int main()
{
    int i,n,ch;
    printf("Enter the unsorted elements : \n");
    for(i=0;i<SIZE;i++)
    {
        scanf("%d",&n);
        arr[i]=n;
    }
    printf("Enter Choice : \n");
    printf("1. for Selection Sort \n");
    printf("2. for Bubble Sort \n");
    printf("3. for Insertion Sort \n");
    printf("4. for Shell Sort \n");

    scanf("%d",&ch);
    switch(ch)
    {
        case 1 : 
        selection_sort(arr);
        display(arr);
        break;
        case 2 :
        bubble_sort(arr);
        display(arr);
        break;
        case 3 :
        selection_sort(arr);
        display(arr);
        break;
        case 4 :
        selection_sort(arr);
        display(arr);
        break;
        default :
        printf("Error ! \n");
    }
    return 0;
}
void display(int a[])
{
    int i;
    printf("Sorted Array is : \n");
    for(i=0;i<SIZE;i++)
    printf(" %d ", a[i]);
}
void selection_sort(int a[])
{
    int i,j,t;
    for(i=0;i<SIZE-1;i++)
        for(j=i+1;j<SIZE;j++)
            if(a[i]>a[j])
                {
                    t=a[j];
                    a[j]=a[i];
                    a[i]=t;
                }
}
void bubble_sort(int a[])
{
    int i,j,t;
    for(i=0;i<SIZE-1;i++)
        for(j=0;j<SIZE-1-i;j++)
            if(a[j]>a[j+1])
                {
                    t=a[j];
                    a[j]=a[j+1];
                    a[j+1]=t;
                }

}
void insertion_sort(int a[])
{
    int i,j,t;
    for(i=0;i<SIZE;i++)
        {
            t=a[i];
            for(j=i-1;j>=0 && t<a[j];j--)
            if(a[j]>a[j+1])
                {
                    t=a[j];
                    a[j]=a[j+1];
                    a[j+1]=t;
                }
            }
}
