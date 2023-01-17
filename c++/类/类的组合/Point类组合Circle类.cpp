//创建一个表示点的类Point，运用组合的方式创建圆形类
//圆形有个成员函数isPointIn用于判断一个点是否在该圆形的内部
//注意类的数值型数据成员类型为浮点型
#include <iostream>
#include <cmath>
using namespace std;
class Point{
	private:
		float x,y;
	public:
		Point(float xx,float yy):x(xx),y(yy){
		}
		float getX(){
			return x;
		}
		float getY(){
			return y;
		}
};
class Circle{
	private:
		Point p;
		float r;
	public:
		Circle(Point xp,float rr):p(xp),r(rr){
		}
		bool isPointIn(Point p1){
			float x2=pow(p.getX()-p1.getX(),2);
			float y2=pow(p.getY()-p1.getY(),2);
			if((x2-y2)<=r) return true;
			else return false;
		} 
};
int main(int argc, char const *argv[])
{
    double x,y;
    double r;
    cin>>x>>y>>r;
    Point p(x,y);
    Circle c(p,r);
    cin>>x>>y;
    Point p1(x,y);
    bool b = c.isPointIn(p1);
    cout<<b<<endl;
}
