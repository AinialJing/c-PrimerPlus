
#include <iostream>
using namespace std;


void cheers(int);
double cube(double d);

int main(){
     cheers(20);
     double cu=cube(20);
     cout << "The cube 20 is :" << cu << endl;
     return 0;

}




void cheers(int n){
   for(int i=0;i<n;i++){

      cout << "Cheers!" ;
      cout << endl;

    }
}

double cube(double d){
    return d*d;
}

