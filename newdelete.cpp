#include<iostream>
using namespace std;
class Test
{
    int* a,size;
    public:
    Test(int);
    ~Test();
};
Test::Test(int s)
{
    Test::size = s;
    a= new int[size];
}
Test::~Test()
{

    delete a;
}
int main()
{
    Test t1(10);
    return 0;
}