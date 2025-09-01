#include<iostream>
using namespace std;
class Base
{
    public:
 virtual void show();

};
void Base::show()
{
    cout<<"this is base"<<endl;
}
class Derived : public Base
{
public:
void show();
};
void Derived::show()
{
    cout<<"This is derived"<<endl;
}
int main()
{
    Base *p;
    Derived d1;
    p= &d1;
    p->show();
    return 0;
}