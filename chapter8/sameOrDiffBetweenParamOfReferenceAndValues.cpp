//该demo用于说明在函数传参中按值传递和按应用传递的相同点和不同点
//相同点：调用的使用
//不同点：在函数中使用的时候，按值传递的形参是其值的拷贝;而按引用传递则是使用其真实的数据



#include <iostream>
using namespace std;

int a=10;
//函数原型
void paramWithValues(int a);
void paramWithReference(int &a);



int main(){

        cout << "------------------------------------------"<<endl;
	cout << "变量a的地址:"<<&a<<endl;
	cout << "变量a的值:"<<a<<endl;
        cout << "------------------------------------------"<<endl;
	paramWithValues(a);
        cout << "------------------------------------------"<<endl;
	paramWithReference(a);
        cout << "------------------------------------------"<<endl;
	cout << "增加以后变量a的地址:"<<&a<<endl;
	cout << "增加以后变量a的值:"<<a<<endl;
	return 0;
}
void paramWithValues(int v){
    v+=1;
    cout <<"按值传递函数v的地址:"<<&v<<endl;
    cout <<"按值传递函数加1后的v的值:"<<v<<endl;
    cout <<"按值传递函数加1后a地址:"<<&a<<endl;
    cout <<"按值传递函数加1后a的值:"<<a<<endl;
}

void paramWithReference(int &r){
    r+=1;
    cout <<"引用变量函数加1后r的地址:"<<&a<<endl;
    cout <<"引用变量函数加1后r的值:"<<a<<endl;
    cout <<"引用变量函数r加1后a的地址:"<<&a<<endl;
    cout <<"引用变量函数r加1后a的值:"<<a<<endl;

}
