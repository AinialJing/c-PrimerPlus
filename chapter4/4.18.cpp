#include <iostream>
using namespace std;



int main(){

	double *p3=new double[3];
	p3[0]=0.2;
	p3[1]=0.5;
	p3[2]=0.8;
	
	cout << "P3[1] is " << p3[1] <<  endl;
	p3 = p3+1;
	cout << "Now p3[0] is " << p3[0] << endl;
	p3=p3-1;
	cout << "P3[1] is " << p3[1] << endl;

        delete [] p3;
	return 0;

}
