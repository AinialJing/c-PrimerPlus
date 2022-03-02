#include <iostream>
#include "table.h"
using namespace std;



int main()
{
	
	TableTennisPlayer player1("张三","李",true);
	TableTennisPlayer player2("李四","张",false);
        
	player1.Name();
	if(player1.HasTable())
	{
	  	cout <<":has a table"<<endl;
	}else
	{
		cout <<":hasn`t a table" << endl;
	}
	return 0; 
}
