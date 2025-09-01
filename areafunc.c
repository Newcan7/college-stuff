#include<stdio.h>
void circlecalc(float y);
void squarecalc(float x);
int main (){
    float a;
    printf("Please Enter a Radius/Edge :");
    scanf("%f", &a);
    squarecalc(a);
    circlecalc(a);
    return 0;
}
void squarecalc(float x){
    printf("\n The area of the square with given edge is : %0.1f", x*x);
}
void circlecalc(float y){
    printf("\n Area of circle with given radius is : %0.1f", y*y*3.14);
}