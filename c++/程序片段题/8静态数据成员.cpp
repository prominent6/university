#include<iostream>
using namespace std;
class Point{
	double x,y;
	static int count;//定义静态变量
public:
	Point(double a=0,double b=0):x(a),y(b){
		count++;
	}
	~Point(){
		count--;	
	}
	void show(){
		cout<<"the number of Point is "<<count<<endl;
	}
};
int Point::count=0;
int main(){
	Point p1;
	Point *p=new Point(1,2);
	p->show();
	delete p;
	p1.show();
	return 0;
}
