#include <iostream>
using namespace std;




int main(){

	int  value=100;
	int *pt=new int;
        int *temp=pt;
        cout << "new point pt address is :"  << pt << endl;
	pt=&value;
	cout << "The value of address:" << &value <<endl;
	cout << "The pointer of pt value " << pt <<endl;
        *pt=119;
        cout << "The new value of value " << value << endl;
	cout << "The end pointer of pt value " << pt <<endl;
        pt=temp;
        delete pt;

	return 0;
}
