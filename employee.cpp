#include<iostream>
using namespace std
class Employee
{
    string name;
    int id;
    int salary;
    float allowance= salary*0.1;
    float total_salary;
    public:
    Employee();
    ~Employee();
    friend float calculateSalary(Employee&);
};
inline Employee :: Employee (string s,int i, int sal)
{
    name=s;
    id=i;
    salary=sal;
}
inline Employee  :: ~Employee()
{

}
float calculateSalary(Employee& e1)
{
    e1.total_salary = e1.allowance + e1. salary;
    cout<<e1.total_salary<<endl;
} 
int main()
{
    Employee a(abu,343,50000);
    Employee b(jojo,767,20000);

}

