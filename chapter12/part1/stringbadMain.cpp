#include <iostream>
#include "stringbad.h"
using std::cout;

void callme1(StringBad &);
void callme2(StringBad);


int main(){
   using std::endl;
   {
      cout << "Starting an inner block.\n";
      StringBad headline1("Hello world");
      StringBad headline2("Good morning");
      StringBad sport("Spinach Leaves Bowl for Dollars");
      
      cout <<"headline1:"  << headline1 << endl; 
      cout <<"headline2:"  << headline2 << endl; 
      cout <<"sport:"  << sport << endl; 
   }
    cout << "End of main()\n";

    return 0;


}

void callme1(StringBad &sb){
    cout << "String passed by reference:\n";
    cout << "     \"" << sb <<"\"\n";
}

void callme2(StringBad sb){
    cout << "String passes by value:\n";
    cout << "     \"" << sb <<"\"\n";


}
