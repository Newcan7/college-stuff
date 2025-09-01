# include <stdio.h>
int main(){
    int i,j,a;
    printf("Enter Number of Rows :");
    scanf("%d", &a);
    for(i=a;i>=1;i--)
    {
        for (j=1;j<=i;j++)
        {
            printf(" %d",i);
        }
        printf("\n");
        }

    return 0;
}