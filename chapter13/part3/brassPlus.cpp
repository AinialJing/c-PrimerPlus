//undefined reference to `vtable for BrassPlus'
//对于上诉问题的解决：基类的虚函数，派生类必须实现
#include "brassPlus.h"
#include <iostream>
using namespace std;

BrassPlus::BrassPlus(const string & fn,long an,double bal,double ml,double r):Brass(fn,an,bal)
{
  	maxLoan=ml;
	rate=r;
	owesBank=0;

}

void BrassPlus::withdraw(double amt)
{
	double bal=balance();
	if(amt <=bal)
		Brass::withdraw(amt);
	else if(amt <=bal+maxLoan-owesBank)
	{
		double advanced=amt-bal;
		owesBank+=advanced*(1.0+rate);
		cout << "Bank advance: $ " << advanced <<endl;
		cout << "Finance charge:$ "<<advanced*rate << endl;
	       deposit(advanced);
               Brass::withdraw(amt);	       
	}else
		cout << "Credit limit exceeded.Transaction canceled.\n"<<endl;

}

void BrassPlus::viewAcct()
{
	Brass::viewAcct();
	cout << "Maxium load:"<<maxLoan << endl;
	cout << "Owed to bank:$" <<owesBank << endl;
	cout << "Loan rate: " << 100*rate << endl;

}
