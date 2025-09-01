# include<stdio.h>
# include <math.h>
int main () {
    int a;
    scanf("%d", &a);
    int i=1;
    do
    {
        printf("%d \n", i*a);
         i++;
         if (i==10)
         {
            break;
         }
         
    } while (i<=12);
    

return 0;}
