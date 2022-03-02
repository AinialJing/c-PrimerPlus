#include "brass.h"
#include <string>
#include <iostream>
using namespace std;

Brass::Brass(const string fn,long an,double bal)
{
	fullName=fn;
	acctNum=an;
	_balance=bal;

}

void Brass::deposit(double amt)
{
	if(amt<0)
	{
		cout << "Negative deposit not allowed:" << endl;
	}else
	{
	  	_balance += amt;
	}
}

void Brass::withdraw(double amt)
{
	if(amt <0)
	{
		cout << "Withdraw amount must be positive;Withdraw canceled." << endl;
	
	}else if(amt <=_balance)
	{
		_balance -=amt;
	}else
	{
		cout << "Withdraw amount of $" <<amt <<".exceeds your balances.\nWithdraw canceled.\n" << endl;
	}

}

double Brass::balance() const
{
	return _balance;
}

void Brass::viewAcct() const
{
	cout << "Client:" << fullName << endl;
	cout <<"Account Number" << acctNum << endl;
	cout <<"Balance $ " << _balance << endl;
        cout << "----------------------------------------------" << endl;
}
