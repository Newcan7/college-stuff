#include<iostream>
using namespace std;

class Distance
{
    int feet;
    int inch;
public:
    Distance();
    ~Distance();
    Distance(int, int);
    friend Distance& operator+=(Distance&, Distance&);
    friend ostream& operator<<(ostream&, const Distance&);
};

inline Distance::Distance() { }

inline Distance::~Distance() { }

inline Distance::Distance(int a, int b)
{
    feet = a;
    inch = b;
}

Distance& operator+=(Distance& a, Distance& b)
{
    a.feet += b.feet;
    a.inch += b.inch;
    if (a.inch >= 12) {
        a.feet += a.inch / 12;
        a.inch = a.inch % 12;
    }
    return a;
}

ostream& operator<<(ostream& out, const Distance& d)
{
    out << d.feet << " feet " << d.inch << " inch " << endl;
    return out;
}

int main()
{
    Distance d1(5, 10);
    Distance d2(6, 11);
    d1 += d2;
    cout << d1;
    return 0;
}
