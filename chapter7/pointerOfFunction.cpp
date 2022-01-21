//函数指针：1、首先是一个指针;2、该指针指向一个函数;
//函数指针的定义类型：returnType (*pointName)(param1,param2....)
//函数指针的*pointName一定要加"()"
//returnType *pointName(param1,param2); 如果不加"()",则该函数的含义：返回值为returnType的指针
//优先级：()的优先级大于*
#include <iostream>
using namespace std;

double calculate(double width,double height);

void displayCalculate(double,double,double (*cal)(double,double));


int main(){

	displayCalculate(5.0,8.0,calculate);
	return 0;
}

double calculate(double width,double height){
	return width*height;
}


void displayCalculate(double w,double h,double (*cal)(double,double)){
   cout << "The calculate resulte is: " << (*cal)(w,h) << endl;

}
