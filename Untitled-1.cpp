#include<iostream>
using namespace std;
class Test
{   
    int m;
    public:
    Test(int);
    ~Test();
    void showData();
    Test operator++();
    Test operator++(int);
};
inline  Test::~Test()
{};
inline  Test::Test(int e)
{
    Test::m =e;
}
inline Test Test::operator++()
{
    ++m;
    return *this;
}
inline Test Test::operator++()
{
    Test t;
    t.m=m;
    m++;
    return t;
}
void Test::showData()
{
    cout<<m<<endl;
}
int main()
{
    Test obj1(15);
    Test obj2 = ++obj1 ;
    Test obj3 = obj1++;
    obj2.showData();
    obj3.showData();
    return 0;
}
