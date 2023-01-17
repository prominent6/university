#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
class Point{
    private:
        double x,y;
    public:
        Point();
        Point(double x_,double y_);
        double distance();
        double distance(const Point &p);
        double getX(){return x;}
        double getY(){return y;}
        void setX(double x_);
        void setY(double y_);
};
Point::Point(double x_,double y_){
	x=x_;
	y=y_;
}
double Point::distance(){
	return sqrt(pow(this->x,2)+pow(this->y,2));
}
double Point::distance(const Point &p){
	return sqrt(pow((this->x-p.x),2)+pow((this->y-p.y),2));
}
class Circle{
	private:
		Point ctr;
		double r;
	public:
		Circle(Point &p,double rr):ctr(p){
			r=rr;
		}; 
		string judge(Point &p){
			double len=sqrt(pow((ctr.getX() -p.getX() ),2)+pow((ctr.getY() -p.getY() ),2));
			if(len>r) return "outside";
			else if(len==r) return "on";
			else return "inside";
		}
};

int main(){
   double x1,y1,x2,y2,r; 
   cin>>x1>>y1>>x2>>y2>>r;
   Point p(x1,y1);
   Point ctr(x2,y2);
   Circle c(ctr,r);
   cout<<setprecision(3)<<p.distance()<<" "<<c.judge(p)<<endl;
} 

