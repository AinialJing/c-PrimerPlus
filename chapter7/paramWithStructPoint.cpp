#include <iostream>
#include <cmath>

using namespace std;

struct polar{
   double distance;
   double angle;

};


struct rect{
   double x;
   double y;

};


void rect_to_polar(const rect *pxy,polar *plr);
void show_polar(const polar *plr);


int main(){

        rect prct;
	polar pplr;
	cout << "Enter the rect x and y values: ";
	while(cin >>prct.x >>prct.y){
            rect_to_polar(&prct,&pplr);
            show_polar(&pplr);
            cout << "Next two numbers(q to quit):";
        }
         cout << "Done"<<endl;
	return 0;

}


void show_polar(const polar *plr){
	
	const double  Rad_to_deg=57.275779;
	cout <<"Distance: " <<  plr ->distance << endl;
	cout <<"Angle: "  << plr->angle*Rad_to_deg << endl;

}

void rect_to_polar(const rect *pxy,polar *plr){

      plr ->distance=sqrt(pxy->x*pxy->x+pxy->y*pxy->y);
      plr ->angle=atan2(pxy->y,pxy->x);

}
