#include<iostream>
using namespace std;

class Test
{
protected:
    int n;
public:
    Test(int);
    ~Test();
    virtual void show();
};
void Test::show(){}
class toHex: public Test
{
public:
    void show();
    toHex(int);
};
toHex::toHex(int num):Test(num)
{}

class toOct: public Test
{
public:
    void show();
    toOct(int);
};
toOct::toOct(int num):Test(num)
{}

Test::Test(int num)
{
    n = num;
}

Test::~Test()
{
}

void toHex::show()
{
    cout << hex << n << endl;
}

void toOct::show()
{
    cout << oct << n << endl;
}

int main()
{
    Test *p;
    toHex h(100);
    toOct o(100);
    p=&h;
    p->show();
    p=&o;
    p->show();
    return 0;
}
