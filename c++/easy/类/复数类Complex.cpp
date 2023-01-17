#include <iostream>
#include <cmath>
using namespace std;
class Complex{
	public:
		Complex(double xx=0,double yy=0){
			x=xx;
			y=yy;
		}
		void add(Complex com){
			x=x+com.x;
			y=y+com.y; 
		}
		void show(){
			cout<<x<<"+"<<y<<"i"<<endl;
		}
	private:
		double x,y;	
};
int main(){
	Complex c1(3,5);    //用复数3+5i初始化c1
	Complex c2=4.5;     //用实数4.5初始化c2
	c1.add(c2);   //将c1与c2相加，结果保存在c1中
	c1.show(); //将c1输出（这时的结果应该是7.5+5i）
	return 0;
}
