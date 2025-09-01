# include <stdio.h>
int main(){
    int a[999],b[999],i,j,k,n;
    printf("enter number of variables : ");
    scanf("%d",&n)
    for(i=0;i<n;i++)
    {
        printf("enter element : %d" i+1);
        scanf("%d",&a[i]);
        b[i]=a[(n-1)-i];
    }<
    for(i=0;i<n;i++)
    printf("element are %d", b[i]);
    return 0;
}