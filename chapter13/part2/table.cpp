#include "table.h"
#include <iostream>
using namespace std;

TableTennisPlayer::TableTennisPlayer(const string & fn,const string &ln,bool ht)
{
    firstName=fn;
    lastName=ln;
    hasTable=ht;

}


void TableTennisPlayer::Name() const
{
 	cout << "FirstName is:" <<firstName <<"\nLastName is:" << lastName <<endl;

}
