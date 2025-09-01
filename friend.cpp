#include<iostream>
using namespace std;

class Farenheit;

class Centigrade {
    double c;
public:
    Centigrade() {}
    ~Centigrade() {}
    Centigrade(double centi) {
        c = centi;
    }
    friend void compare(Centigrade&, Farenheit&);
};

class Farenheit {
    double f;
public:
    Farenheit() {}
    ~Farenheit() {}
    Farenheit(double faren) {
        f = faren;
    }
    friend void compare(Centigrade&, Farenheit&);
};

void compare(Centigrade& c1, Farenheit& f1) {
    if (((c1.c * 9) / 5.0) + 32 > f1.f)
        cout << "c1 bigger: " << c1.c << "C" << endl;
    else
        cout << "f1 bigger: " << f1.f << "F" << endl;
}

int main() {
    Centigrade c1=63.0;
    Farenheit f1=73.4; 
    compare(c1, f1);
    return 0;
}
