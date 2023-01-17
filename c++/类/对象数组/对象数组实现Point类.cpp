#include <iostream>
#include <cmath>
using namespace std;
class Point{
	public:
		void Set();
		void Display();
		void Length(Point a[]);
	private:
		int x,y;	
};
void Point::Set(){
	cout<<"Input x,y:";
	cin>>x>>y;
}
void Point::Display(){
	cout<<"("<<x<<","<<y<<")"<<endl; 
}
void Point::Length(Point a[]){
	double length=0;
	for(int i=0;i<9;i++){
		length+=sqrt(abs(a[i+1].x-a[i].x)*abs(a[i+1].x-a[i].x)+abs(a[i+1].y-a[i].y)*abs(a[i+1].y-a[i].y)); 
	};
	cout<<"Length:"<<length; 
}
int main(){
	Point a[10];
	for(int i=0;i<10;i++){
		a[i].Set();
	}
	for(int i=0;i<10;i++){
		a[i].Display();
	}
	a->Length(a);
	return 0;
}
