#include <iostream>
#include "table.h"
#include "ratePlayer.h"

int main()
{
	TableTennisPlayer tPlayer("张三","李",true);
	RatePlayer rPlayer(1440,"李四","张",false);
	rPlayer.Name();
	return 0;
}
