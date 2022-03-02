#ifndef __BRASS_H_
#define __BRASS_H_
#include <string>
using namespace std;
class Brass
{
	private:
		string fullName;
		long acctNum;
		double _balance;
	public:
		//构造方法
		Brass(const string fn="none",long an=-1,double bal=0);
		//存款
		void deposit(double amt);
		//取款
		virtual void withdraw(double amt);
		//余额
		double balance() const;
		//账户信息
		virtual void viewAcct() const;
		//析构函数
		virtual ~Brass(){}


};
#endif
