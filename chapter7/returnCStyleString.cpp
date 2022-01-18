#include <iostream>

char* builderString(char c,int size);


int main(){
     	using namespace std;
	int times;
	char ch;

	cout << "Enter a charactor: ";
	cin >>ch;
	cout << "Enter an integer: ";
	cin >>times;
	char *ps=builderString(ch,times);
	cout << ps <<endl;
	delete []ps;
	return 0;

}



char *builderString(char c,int n){

	char *pstr=new char[n+1];
	pstr[n]='\0';
	while(n-->0){
	   pstr[n]=c;

       }
       return pstr;


}
