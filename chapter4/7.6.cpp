#include <iostream>
using namespace std;

int main(void){


	int* psome=new int[10];
	psome[0]=1;
	psome[1]=2;
	psome[5]=5;
  	cout << "the value of psome is :" << psome << endl;
        for(int i=0;i<10;i++){

        cout << "The new Array value is :"  << psome[i]   << endl;
        psome=psome+1;
        cout << "The point of array : " << psome << endl;
	}

        psome=psome-10;

       cout << "The value of psome is :" << psome << endl;

        delete [] psome;


	return 0;
}
