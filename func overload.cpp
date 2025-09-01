#inlcude<iostream>
using namespace std;
class Test
{   
    int edge;
    float radius,height;
    public:
    Test();
    ~Test();
    void showData();
    void area(int);
    void area(float);
    void area(float,float);
};
inline void Test::Test()
{};
inline void Test::~Test()
{};
inline void Test::area(int e)
{
    Test::edge =e;
    cout<<edge*edge*edge<<endl;
}
inline void Test::area(float s)
{
    Test::radius =s;
    cout<<4/3(3.14*s*s*s)<<endl;
}
inline void Test::area(float s,float h)
{
    Test::height =h;
    Test::radius =s;
    cout<<(3.14*s*s*h)<<endl;
}
int main()
{
    Test obj;
    area(5);
    return 0;
}
