#include <iostream>
using namespace std;
const double PI=3.14;
class Shape {
public:
    virtual double getArea()=0;
    virtual double getPerim()=0;
};
class Circle:public Shape{
	private:
		double r;
	public:
		Circle(double rr=0):r(rr){
		};
		double getArea(){
			return 3.14*r*r;
		}
		double getPerim(){
			return 2*3.14*r;
		}
};
class Rectangle:public Shape{
	private:
		double l,w;
	public:
		Rectangle(double ll,double ww):l(ll),w(ww){
		};
		double getArea(){
			return l*w;
		}
		double getPerim(){
			return 2*(l+w);
		}
};
void print(Shape *s){
	cout<<"Area:"<<s->getArea()<<endl;
	cout<<"Perimeter:"<<s->getPerim() <<endl;
}
int main(){
    double r,l,w;
    cin>>r;
    cin>>l>>w;
    Shape *p=NULL;
    p=new Circle(r);
    print(p);//输出圆面积与周长
    p=new Rectangle(l,w);
    print(p);//输出矩形面积与周长
    return 0;    
}

