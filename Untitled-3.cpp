#include <iostream>
using namespace std;

class Binary; // Forward declaration

class Decimal {
    int dec;
public:
    Decimal(int d = 0) : dec(d) {} // Correct constructor
    ~Decimal() {}

    friend void compare(Binary&, Decimal&);
};

class Binary {
    int bin;
public:
    Binary(int b = 0) : bin(b) {} // Correct constructor
    ~Binary() {}

    friend void compare(Binary&, Decimal&);
};

void compare(Binary& b, Decimal& d) {
    int binToDec = 0, base = 1, temp = b.bin;
    
    // Convert binary to decimal
    while (temp > 0) {
        int lastDigit = temp % 10;
        binToDec += lastDigit * base;
        base *= 2;
        temp /= 10;
    }
    
    cout << "Decimal value: " << d.dec << endl;
    cout << "Binary value (converted to decimal): " << binToDec << endl;

    if (d.dec > binToDec)
        cout << "Decimal is greater." << endl;
    else if (d.dec < binToDec)
        cout << "Binary is greater." << endl;
    else
        cout << "Both are equal." << endl;
}

int main() {
    Binary b(101111);   // Binary: 1011 = 11 in decimal
    Decimal d(10000);    // Decimal: 10
    compare(b, d);
    return 0;
}
