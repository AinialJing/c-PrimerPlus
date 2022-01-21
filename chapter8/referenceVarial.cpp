//引用变量：引用变量的主要用途是用作参数的形参，通过将引用变量用作形参，函数将使用原始数据，而不是其副本。
//1、引用变量一旦指向一个变量，就不会改变，再使用"="的时候，只是赋值操作
//2、声明引用的时候，必须将其初始化，而不能像指针那样，先声明，再赋值
#include <iostream>
using namespace std;

void plusVatialable(int &v){
	v+=1;
}
int main(void){

     	cout <<"引用函数变量作为形参，函数将使用原始数据，而非其副本。该论述可以根据其地址判断"<<endl;
	int a=10;
	cout <<"Before plus address:"<<&a<<"  value is:"<<a<<endl;
	plusVatialable(a);
	cout <<"After plus address:"<<&a<<"  value is:"<<a<<endl;
	return 0;
}
