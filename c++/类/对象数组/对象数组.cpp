#include <iostream>
using namespace std;
class Point{
	public:
		Point(){
			x=y=0;
		};
		Point(int x,int y):x(x),y(y){
		};
		~Point(){
		};
		void move(int newX,int newY){
			x=newX;
			y=newY;
			cout<<"now:"<<x<<","<<y<<endl;
		}	
		int getX() const {return x;};
		int getY() const {return y;};
		static void showCount();
	private:
		int x,y;
};
using namespace std;
int main(){
	Point a[2];  //对象数组 
	for(int i=0;i<2;i++){
		a[i].move(i+10,i+20);
	}
	return 0;
} 
