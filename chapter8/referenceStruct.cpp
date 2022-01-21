//引用用于结构体

#include <iostream>
#include <string>
using namespace std;

struct free_throws
{
 string name;
 int made;
 int attempts;
 float percent;
};

void display(const free_throws &ft);
void set_pc(free_throws &ft);
free_throws& accumulate(free_throws & target,const free_throws & source);


int main(){
	free_throws one={"第一个",13,14};
	free_throws two={"第二个",10,16};
	free_throws three={"第三个",7,9};
	free_throws four={"第四个",5,9};
	free_throws five={"第五个",6,14};
	free_throws team={"组",0,0};

	free_throws dup;
	set_pc(one);
	display(one);
	accumulate(team,one);
	display(team);
	accumulate(accumulate(team,three),four);
	display(team);
	dup=accumulate(team,five);

	cout <<"-----------------------展示组信息：\n";
	display(team);
	cout <<"-----------------------展示赋值后的dup:\n";
	display(dup);
	set_pc(four);
	return 0;
}



void display(const free_throws &ft){
    cout << "Name:  " << ft.name <<endl;
    cout << " Made:  " << ft.made <<endl;
    cout << "Attempts:  " << ft.attempts <<endl;
    cout << "Percent:  " << ft.percent <<endl;
}

void set_pc(free_throws &ft){
   if(ft.attempts !=0){
	ft.percent = 100.0f*float(ft.made)/float(ft.attempts);
    }else{
        ft.percent =0;
    }
}

free_throws& accumulate(free_throws & target,const free_throws & source){
	target.attempts+=source.attempts;
	target.made +=source.made;
	set_pc(target);
	return target;
}
