
#include<iostream>
using namespace std;
class BankAccount
 {
protected:
    int m;
public:
    void getData(int x)
	 {
        BankAccount::m = x;
    }
    virtual void showResult() = 0;
};

class SavingsAccount : public BankAccount
 {
public:
    void showResult()
	 {
        cout << "The result in oct is: " << endl;
        cout << oct << m << endl;
    }
};
class CurrentAccount : public BankAccount 
{
public:
    void showResult()
	{
        cout << "The result in hex is: " << endl;
        cout << hex << m << endl;
    }
};
void f(Test *p) 
{
    cout << "The result from f is: " << endl;
    p->showResult();
}
int main() 
{
	int i=1,n;
	while(i)
	{ 
	cout<<"Deposit :"<<endl;
	cout<<"Withdraw :"<<endl;
	cout<<"Display :"<<endl;
	cout<<"Enter choice :"<<endl;
	cin>>n;
switch(n) 
		{
case 1:
  	
    break;
case 2:
    
    break;
case 3:
   
    break;
default:
	cout<<"error !!!!!!!!!!"<<endl;
   
};
	};
    BankAccount *p;
    return 0;
}

bankaccount.cpp
Displaying bankaccount.cpp.