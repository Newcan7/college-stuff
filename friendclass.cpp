#include<iostream>
using namespace std;
class B;
class A
{
    int a;
    public:
    friend class B;
    A();

};
A::A()
{
    a=100;
}
class B
{
    int b;
    public:
    B();
    void show(A&);
};
void B::show(A& temp)
{
    cout<<temp.a<<endl;
}
B::B()
{
    b=500;
}
int main()
{
    A a1;
    B b1;
    b1.show(a1);
    return 0;
}