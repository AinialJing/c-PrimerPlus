#include <iostream>
using namespace std;
const int StringSize=5;

void display(const string sa[],int size );
int main(){

	string list[StringSize];
        for(int i=0;i<StringSize;i++){
	   cout << i+1 <<": ";
           getline(cin,list[i]);
	}
	cout << "Display your favorites:" <<endl;
        display(list,StringSize);
	return 0;
}



void display(const string sa[],int size){

     for(int i=0;i<size;i++){

      cout << i+1 <<": " <<sa[i] << endl; 

   }


}
