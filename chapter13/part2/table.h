#ifndef __TABLE_H_
#define __TABLE_H_
#include <string>
using std::string;

class TableTennisPlayer
{
	private:
		string firstName;
		string lastName;
		bool hasTable;
	public:
		TableTennisPlayer(const string & fn ="none",const string & ln = "none",bool ht=false);
		void Name() const;
		bool HasTable() const{ return hasTable;};
		void ResetTable(bool b){ hasTable = b;};


};
#endif
