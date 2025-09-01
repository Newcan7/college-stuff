#include<stdio.h>
int repor(int x, int y, int z);
int main(){
    int a,b,c;
    printf("Please Enter Marks of the Three subjects :");
    scanf("%d %d %d",&a,&b,&c);
    float percen = repor(a,b,c);
    printf("Your Percentage is : %0.1f",percen);
    return 0;
    }
    int repor(int x, int y , int z)
    {
        float avg = (x+y+z)/3;
        return avg;
    }