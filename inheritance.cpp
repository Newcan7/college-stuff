#include<iostream>
using namespace std;

class cia {
protected:
    int eng, maths, chem;
public:
    cia();
    ~cia();
};

class endsem : public cia {
    int endeng, endmaths, endchem;
public:
    endsem();
    ~endsem();
    void calculate();
};

int main() {
    endsem e1;
    e1.calculate();
    return 0;
}

cia::~cia() {}

cia::cia() {
    cout << "Enter CIA marks:" << endl;
    cout << "English: "; cin >> eng;
    cout << "Maths: "; cin >> maths;
    cout << "Chemistry: "; cin >> chem;
}

endsem::endsem() {
    cout << "Enter End-Sem marks:" << endl;
    cout << "English: "; cin >> endeng;
    cout << "Maths: "; cin >> endmaths;
    cout << "Chemistry: "; cin >> endchem;
}

endsem::~endsem() {}

void endsem::calculate() {
    float totalEng = eng + endeng;
    float totalMaths = maths + endmaths;
    float totalChem = chem + endchem;

    float result = (totalEng + totalMaths + totalChem) / 3.0;

    cout << "\nFinal Marks (per subject):" << endl;
    cout << "English: " << totalEng << endl;
    cout << "Maths: " << totalMaths << endl;
    cout << "Chemistry: " << totalChem << endl;

    cout << "\nAverage Marks: " << result << endl;
}
