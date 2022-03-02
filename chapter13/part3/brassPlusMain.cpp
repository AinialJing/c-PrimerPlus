#include "brassPlus.h"
#include <iostream>
using namespace std;


int main()
{

	Brass zhang("张三",381299,400.00);
	zhang.viewAcct();

	BrassPlus li("李四",56432,8000.00);
	li.viewAcct();
	return 0;
}
