//函数指针的使用
#include <iostream>
using namespace std;

//函数声明
double betsy(int);
double pam(int);
//指针函数声明
void estimate(int lines,double (*pf)(int));

int main(){
   	int code;
	cout << "How many lines of code your need? ";
	cin >> code;
	cout << "Here`s Betsy`s estimate:\n ";
	estimate(code,betsy);
	cout << "Here`s Pam`s estimate:\n ";
	estimate(code,pam);
	return 0;
}


double betsy(int lns){

	return 0.05*lns;

}


double pam(int lns){

 	return 0.03*lns+0.004*lns*lns;
}


void estimate(int lines,double (*pf)(int)){

	cout << lines << "lines will take;";
	cout <<(*pf)(lines) << "hour(s)" << endl;

}
