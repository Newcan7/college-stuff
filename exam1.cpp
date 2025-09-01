#include<iostream>
#include<string>
using namespace std;

class Test 
{
    private:
    string str;
    public:
    friend istream& operator>>(istream&, Test&); 
    friend int operator==(Test&, Test&);
    Test();
    ~Test();
    Test(string);
};

inline Test::Test() { }

inline Test::~Test() { }

Test::Test(string s)
{
    Test::str = s;
}

istream& operator>>(istream& in, Test& t)
{
    in >> t.str;
    return in;
}

int operator==(Test& a, Test& b)
{
    if((a.str) == (b.str))
        return 1;
    else
        return 0;
}

int main()
{
    Test t1, t2;
    cin >> t1;
    cin >> t2;
    if (t1 == t2)
        cout << "equal" << endl;
    else
        cout << "not equal" << endl;
    return 0;
}
