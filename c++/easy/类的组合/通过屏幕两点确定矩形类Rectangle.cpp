#include <iostream>
#include <cmath>
using namespace std;
class Point{
	public:
		Point(double xx=0,double yy=0){
			x=xx;
			y=yy;
		}
		Point(Point &p);  //复制构造函数
		double getX(){
			return x; 
		} 
		double getY(){
			return y;
		}
	private:
		double x,y;	
};
//成员函数的实现 
Point::Point(Point &p){
	x=p.x;
	y=p.y;
}

//类的组合
class Area{
	public:
		Area(Point xp1,Point xp2);  
		double getArea(){return area;}
	private:
		Point p1,p2;   //Point 类的对象p1,p2 
		double area;
}; 
//组合类构造函数
Area::Area(Point xp1,Point xp2):p1(xp1),p2(xp2){
	double x=static_cast<double>(p2.getX()-p1.getX());
	double y=static_cast<double>(p2.getY()-p1.getY());
	area=x*y;
} 

int main(){
	double a1,a2,b1,b2;
	cout<<"Input Point A:";
	cin>>a1>>a2;
	cout<<"Input Point B:";
	cin>>b1>>b2;
	Point myp1(a1,a2),myp2(b1,b2);  //建立Point类的对象
	Area area(myp1,myp2);  
	cout<<"Rectangle Area:"<<area.getArea()<<endl;
	return 0;
}
