#include <iostream>
#include "Point.h"
#include <cmath>
using namespace std;
float LineFit(const Point Points[],int nPoint){
	float avgX=0,avgY=0;
	float lxx=0,lyy=0,lxy=0;
	for(int i=0;i<nPoint;i++){
		avgX+=Points[i].getX()/nPoint;
		avgY+=Points[i].getY()/nPoint;
	}
	for(int i=0;i<nPoint;i++){
		lxx+=(Points[i].getX()-avgX)*(Points[i].getX()-avgX);
		lxy+=(Points[i].getX()-avgX)*(Points[i].getY()-avgY);
		lyy+=(Points[i].getY()-avgY)*(Points[i].getY()-avgY);
	}
	cout<<"y=ax+b"<<endl;
	cout<<"a:"<<lxy/lxx<<endl;
	cout<<"b:"<<avgY-lxy*avgX*lxx<<endl;
	return static_cast<float>(lxy/sqrt(lxx*lyy)); 
} 
int main(){
	Point p[5]={Point(6,10),Point(14,20),Point(26,30),Point(33,40),Point(46,50)};
	float r=LineFit(p,5);
	cout<<"r="<<r<<endl;
	return 0; 
}
