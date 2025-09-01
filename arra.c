# include <stdio.h>
int main(){
    int a[10],b[10],i,j,k,n;
    printf("enter number of variables : ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("enter element : %d", i+1);
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
            b[i]=a[(n-1)-i];

    printf("\n element are %d", b[i]);}
    return 0;
}