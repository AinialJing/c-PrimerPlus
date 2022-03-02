#include "ratePlayer.h"
#include <iostream>

RatePlayer::RatePlayer(unsigned int r,const string fn,const string ln,bool ht):TableTennisPlayer(fn,ln,ht)
{
	rating=r;
}

RatePlayer::RatePlayer(unsigned int r,const TableTennisPlayer & tp):TableTennisPlayer(tp),rating(r)
{
}
