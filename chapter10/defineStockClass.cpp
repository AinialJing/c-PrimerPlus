#include <iostream>
#include "defineStockClass.h"
using namespace std;
Stock::~Stock(){
   cout << "Bye Stock!!!!"<< endl;
}
void Stock::acquire(const string &co,long n,double pr){
        company=co;
        if(n<0){
          cout << "Numbers of shares can`t be negative;" << company << "share set to 0." <<endl;
	shares=0;
        }else{
        shares=n;
       }
       share_val=pr;
	set_tot();
    }
    //购买股票
void Stock::buy(long num,double price){
      if(num <0){
       cout << "Numbers of shares can`t be negative." <<"Transaction is abords.\n";
      }else{
       shares+=num;
	share_val=price;
	set_tot();
      }
    }
    //卖出股票
void Stock::sell(long num,double price){

      if(num <0){
       cout << "Numbers of shares can`t be negative." <<"Transaction is abords.\n";
      }else{
       shares-=num;
	share_val=price;
	set_tot();
      }
    }
    //更新股票价格
void Stock::update(double price){

	share_val=price;
	set_tot();
    }
    //展示股票信息
void Stock::show(){
      cout <<"Company: "<<company
          <<" Shares: "<<shares<<'\n'
          <<" Share Price: $" << share_val
          <<" Total Worth: $"<< total_val <<'\n';
    }

