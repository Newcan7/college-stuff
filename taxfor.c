#include<stdio.h>
void calcgst(float a);
int main(){
    int income;
    printf("Please enter your income :");
    scanf("%d", &income);
    calcgst(income);
    return 0;
}
void calcgst(float a){
    printf("Your Inhand income is %0.1f", (a*100)/118 );
}