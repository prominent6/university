#include <iostream>
using namespace std;
class Point{
	public:
		Point(int x=0,int y=0):x(x),y(y){
			count++;
		};
		Point(Point &p){
			x=p.x;
			y=p.y;
			count++;
		}
		~Point(){
			count--;
		}
		static void showCount(){
			cout<<count<<endl;
		}
	private:
		int x,y;
		static int count;
};
int Point::count=0;
int main(){
	Point a(4,5);
	Point::showCount() ;
	Point b(a);
	Point::showCount();
	return 0;
}
