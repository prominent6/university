#include <iostream>
#include <string>
using namespace std;
class CCard{
	public:
		CCard(string x=0,string y=""):id(x),pass(y){
		};
		void deposit(double m){
			money+=m;
		};
		void draw(double m){
			money-=m;
		};
		static void showMoney(){
			cout<<money;
		};
	private:
//		string id;
//		string pass;
		string id,pass;
		static double money;
};
double CCard::money=0; 
int main(void){
	CCard card1("123","xiaosu");
	CCard card2("123456","xiaoxiao");
	card1.deposit(30);
	card2.draw(10);
	card1.showMoney(); 
	return 0;
}
