#include <iostream>
#include <cmath> 
const double PI=3.14;
using namespace std;
class Shape{
	protected:
		double r;
		double h;
	public:
		virtual double getArea(){
			return 0;
		}
		virtual double getVolume(){
			return 0;
		}
		virtual void display(){
			return ;
		}
		virtual ~Shape(){
		}
};
class sphere:public Shape{
	public:
		sphere(){
			cout<<"Input the radius of the sphere:";
			cin>>r;
		} 
		double getArea(){
			return 4*PI*r*r;
		}
		double getVolume(){
			return 4*r*r*r*PI/3; 
		}
	 	void display() 
    	{
	        cout << "The area of the sphere:" << getArea() << endl;
	        cout << "The volume of the sphere:" << getVolume() << endl;
    	}
};
class cylinder:public Shape{
	public:
		cylinder(){
			cout<<"Input the radius and height of the cylinder:";
			cin>>r>>h;
		}
		double getArea(){
			return (2*PI*r*r+2*PI*r*h);
		}
		double getVolume(){
			return PI*r*r*h;
		}
	 	void display() 
    	{
	        cout << "The area of the cylinder:" << getArea() << endl;
	        cout << "The volume of the cylinder:" << getVolume() << endl;
    	}
};
class cone:public Shape{
	public:
		cone(){
			cout<<"Input the radius and height of the cone:";
			cin>>r>>h;
		}
		double getArea(){
			return PI * r * r + 2 * PI * r * sqrt(r * r + h * h) / 2;
		}
		double getVolume(){
			return h*PI*r*r/3;
		}
	 	void display() 
    	{
	        cout << "The area of the cone:" << getArea() << endl;
	        cout << "The volume of the cone:" << getVolume() << endl;
    	}

};
int main(){
	sphere sp1;
	cylinder cy1;
	cone co1;
	sp1.display();
	cy1.display();
	co1.display();
	return 0;
}
