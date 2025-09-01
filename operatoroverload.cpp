#inlcude<iostream>
using namespace std;
class Test
{   
    int edge;
    public:
    Test();
    ~Test();
    void showData();
    Test operator++(Test &);
};
inline void Test::Test()
{};
inline void Test::~Test()
{};
inline void Test::Test(int e)
{
    Test::edge =e;
}
inline Test opeartor+(Test &t)
{
    ++(*this->m);
    return *this;
}
void showData(Test & t)
{
    cout<<*this->t<<endl;
}
int main()
{
    Test obj1(15);
    Test obj2 = ++obj1 ;
    return 0;
}
