#include<iostream>
using namespace std; 
class Circle{
	private:
		float r;
	public:
		Circle(float rr):r(rr){
			cout<<"Constructor called"<<endl;
		};
		~Circle(){
			cout<<"Destructor called"<<endl;
		};
		Circle(Circle &c){
			cout<<"Copy constructor called"<<endl;
			this->r=c.r;
		}
		float area(){
			return 3.14*r*r;
		}
		float perimeter(){
			return 2*3.14*r;
		}
}; 
int main()
{
    float r;
    cin>>r;
    Circle c1(r);
    Circle c2(c1);
    cout<<c1.area()<<endl;//计算圆面积
    cout<<c2.perimeter()<<endl;//计算圆周长
    return 0;
}

