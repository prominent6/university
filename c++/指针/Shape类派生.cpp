#include <iostream>
#define pi 3.14
using namespace std;
class Shape{
	public:
		virtual float getArea(){
			return 0;
		}
		virtual ~Shape(){
		}
};
class Rectangle:public Shape{
	private:
		int l,w;
	public:
		Rectangle(int len,int wid):l(len),w(wid){
		}
		float getArea(){
			return l*w;
		}
};
class Circle:public Shape{
	private:
		int r;
	public:
		Circle(int rad):r(rad){
		}
		float getArea(){
			return pi*r*r;
		}
};
int main(){
	int a,b,r;
	cout<<"Input a,b:";
	cin>>a>>b;
	cout<<"Input r:";
	cin>>r;
	Shape *ps;
	ps=new Rectangle(a,b);
	Shape *pr;
	pr=new Circle(r);
	cout<<"Rectangle Area:"<<ps->getArea()<<","<<"Circle Area:"<<pr->getArea();
	return 0;
}
