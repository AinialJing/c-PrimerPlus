#ifndef __RATEPLAYER_H_
#define __RATEPLAYER_H_
#include "table.h"
#include <string>

class RatePlayer : public TableTennisPlayer
{
	private:
		unsigned int rating;
	public:
		RatePlayer(unsigned int r=0,const string fn="none",const string ln="none",bool ht =false);
		RatePlayer(unsigned int r,const TableTennisPlayer &tp);
		unsigned int getRate()
		{ 
			return rating;
		}
		void resetRating(unsigned int r)
		{ 
			rating=r;
		}




};
#endif
