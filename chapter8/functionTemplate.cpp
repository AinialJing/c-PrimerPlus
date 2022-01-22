//函数模板
//template <typename xx>

#include <iostream>
#include "functionTemplate.h"

int main(){

	using namespace std;
	int i=10;
	int j=20;
	cout <<"i,j=" <<i<<","<<j<<".\n";
	cout <<"Using compiler-generated int seapper:\n";
	swapFun(i,j);
	cout <<"Now i,j= "<< i <<","<<".\n";

	double x=24.5;
	double y=81.7;
	cout <<"x,y=" <<x<<","<<y<<".\n";
	cout <<"Using compiler-generated int seapper:\n";
	swapFun(x,y);
	cout <<"Now x,y= "<< x <<","<< y <<".\n";

	return 0;
}

template <typename T>
void swapFun(T &a,T &b){
 T temp;
 temp=a;
 a=b;
 b=temp;
}
