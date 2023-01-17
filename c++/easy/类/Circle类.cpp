#include <iostream>
using namespace std;
class Circle{
	public:
		void getArea();
		void showArea();
	private:
		double radius,area;
};
void Circle::getArea(){
	cout<<"Input Radius:";
	cin>>radius;
	area=3.14*radius*radius;
};
void Circle::showArea(){
	cout<<"Area:"<<area;
};
int main()
{
    Circle yuan;
    yuan.getArea();        
    yuan.showArea();      
    return 0;
}
