#include<iostream>
using namespace std;
class Test
{
    int x[4];
    public:
    Test();
    ~Test();
    Test(int,int,int,int);
    int operator[](int);
};
int main()
{
    Test t1(10,20,30,40);
    cout<<t1[1]<<endl;
    return 0;
}
Test::Test()
{

}
Test::~Test()
{

}
Test::Test(int a, int b, int c, int d)
{
    x[0]=a;
    x[1]=b;

    x[2]=c;

    x[3]=d;
}
int Test::operator[](int i)
{
    return x[i];
}