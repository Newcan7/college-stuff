#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    double area,radius,height;
    cin>>radius>>height;
    area = 3.14*radius*(radius + sqrt((radius*radius + height*height)));
    cout << area;
    return 0;
}