#include<iostream>
using namespace std;
class Test{
    int m;
    public;
    Test();
    ~Test();
    Test(int);
    void display();
    friend Test operator++(Test&);
    friend Test operator++(Test&, int);
}
int main(){
    Test t1(10);
    Test t2 = ++t1;
    t2.show();
    Test t3= t2++;
    t3.show();
    return 0;
}
inline Test::Test(){

}
inline Test::~Test(){

}
inline Test::Test(int n){
    Test::m=n;
}
void Test::display(){
    cout<<m<<endl;
}
Test operator++(Test& t){
    ++(t.m);
    return *this;
}
Test operator++(Test& t, int d){
    Test temp;
    temp=t;
    (t.m)++;
    return temp;
}