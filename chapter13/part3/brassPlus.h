#ifndef __BRASSPLUS_H_
#define __BRASSPLUS_H_
#include "brass.h"

class BrassPlus : public Brass
{
 	private:
		double maxLoan;
		double rate;
		double owesBank;
	public:
		BrassPlus(const string & fm="NullBody",long an=-1,double bal=0.0,double ml=500,double rt=0.11125);
		BrassPlus(const Brass & bs,double ml=500,double rt=0.11125);
		virtual void viewAcct();
		virtual void withdraw(double amt);
		void resetMax(double m)
		{
			maxLoan=m;
		}

		void resetRate(double r)
		{
			rate=r;
		}

		void resetOwes()
		{
			owesBank=0;
		}
};
#endif
