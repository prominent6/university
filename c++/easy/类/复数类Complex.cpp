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
	Complex c1(3,5);    //�ø���3+5i��ʼ��c1
	Complex c2=4.5;     //��ʵ��4.5��ʼ��c2
	c1.add(c2);   //��c1��c2��ӣ����������c1��
	c1.show(); //��c1�������ʱ�Ľ��Ӧ����7.5+5i��
	return 0;
}
