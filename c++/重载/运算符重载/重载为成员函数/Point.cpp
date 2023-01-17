//定义Point类，有坐标x,y两个私有成员变量;
//对Point类重载“+”（相加）、“-”（相减）和“==”（相等）运算符，实现对坐标的改变，
//要求用友元函数和成员函数两种方法实现。
//对Point类重载<<运算符，以使得代码 Point p; cout<<p<<endl;可以输出该点对象的坐标。
#include <iostream>
using namespace std;
class Point{
	private:
		int x,y;
	public:
		Point(int xx,int yy):x(xx),y(yy){
		};
		Point operator+(const Point &point2){
			return Point(x+point2.x,y+point2.y);
		}
		Point operator-(const Point &point2){
			return Point(x-point2.x,y-point2.y);
		}
		void operator+=(const Point &point2){
			x=x+point2.x;
			y=y+point2.y;
		}
		bool operator==(const Point &point2){
			if(x==point2.x&&y==point2.y) return true;
			else return false;
		}
		friend ostream&operator<<(ostream&os,Point &point){
			os<<"("<<point.x<<","<<point.y<<")";
			return os;
		}
}; 
int main(int argc, char const *argv[])
{
    Point p1(2,3);
    cout<<p1<<endl;
    Point p2(4,5);
    cout<<p2<<endl;
    Point p3 = p1+p2;    
    cout<<p3<<endl;
    p3 = p2-p1;
    cout<<p3<<endl;
    p1 += p2;
    cout<<p1<<endl;
    cout<<(p1==p2)<<endl;
    return 0;
}
