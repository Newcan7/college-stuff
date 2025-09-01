#include<iostream>
using namespace std;
class Test
{
    public:
    void area(double);
    void area(double,double);
};
void Test::area(double l,double b)
{
    cout<<l*b<<endl;
}
void Test::area(double r)
{
    cout<<3.14*r*r<<endl;
}
int main()
{
    Test t1;
    t1.area(12.4,10.0);
    t1.area(20.5);
    return 0;
}