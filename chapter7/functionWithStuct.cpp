#include <iostream>
using namespace std;


struct travel_time{
 int hours,
 int mins;
};

const int MINS_per_hr=60;

travel_time  sum(travel_time t1,travel_time t2);
void show_time(travel_time t);

int main(){

	travel_time day1={5,45};
	travel_time day2={4,55};

     	travel_time total=sum(day1,day2)
	return 0;
}




travel_time sum(travel_time t1,travel_time t2){
    		travel_time total;
	total.mins=(t1.mins+t2.mins) % Mins_per_hr;

		return total;
}
