//深入理解函数指针
#include <iostream>
using namespace std;

//定义三个返回值为double指针的函数
const double *f1(const double arr[],int n);
const double *f2(const double[],int n);
const double *f3(const double *,int n);

int main(){
	double av[3]={112.3,1542.6,2227.9};
	//pointer to a function
	const double *(*p1)(const double*,int)=f1;
	cout << "PATR1:"<< endl;
	cout <<"Using pointers to function:\n";
	cout <<"Address Value\n";
	//(*p1)代表p1是一个函数指针，该指针指向函数f1
	cout <<(*p1)(av,3) <<": " << *(*p1)(av,3) << endl;
	//声明一个函数指针的数组
	const double *(*pa[3])(const double*,int)={f1,f2,f3};
	cout <<"-----------------------------------------------"<<endl;
        cout <<"PART2:"<<endl;
	cout <<"Using a pointer to a pointer to a function:\n";
	cout <<" Address         Value\n";
	for(int i=0;i<3;i++){
	 cout << (*pa[i])(av,3) << ":"<< *(*pa[i])(av,3) << endl;

	}
	return 0;
}



const double *f1(const double ar[],int n){

	return ar;
}
const double *f2(const double ar[],int n){
	return ar+1;
}
const double *f3(const double *ar,int n){

	return ar+2;
}











