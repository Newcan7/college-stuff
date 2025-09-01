#include<stdio.h>
#include<stdlib.h>
int main(int argc,char* argv[])
{
    int n1,n2;
    n2=atoi(argv[2]);
    n1=atoi(argv[1]);
    printf("The sum is : %d ", n1+n2);
    return 0;
}