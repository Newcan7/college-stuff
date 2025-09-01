#include<iostream>
using namespace std;
class A
{
public:
void show();
};
void A::show()
{
    cout<<"yay"<<endl;
}
class B: public A
{
};
class C: public A
{
};
class D: public B,C
{
    
};
int main()
{
    D d;
    d.show();
    return 0;
}