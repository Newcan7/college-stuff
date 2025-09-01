#include <iostream>
#include <string>
using namespace std;

class Test {
    string str;
public:
    friend istream& operator>>(istream&, Test&);
    void operator==(Test&);
    Test();
    ~Test();
};
istream& operator>>(istream& in, Test& ob) {
    in >> ob.str;
    return in; 
}
void Test::operator==(Test& ob) {
    if (str > ob.str)
        cout << "t1 is greater" << endl;
    else if (str < ob.str)
        cout << "t2 is greater" << endl;
    else
        cout << "Both are equal" << endl;  
}

inline Test::Test() {}
inline Test::~Test() {}

int main() {
    Test t1, t2;
    cin >> t1;
    cin >> t2;
    t1 == t2;
    
    return 0;
}
