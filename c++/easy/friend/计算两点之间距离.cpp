#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
class Point {
    public:
        Point() {
        }
        Point(double px,double py) {
            x=px;
            y=py;
        }
        friend void pointDis(Point &p1,Point &p2);
    private:
        double x;
        double y;
};
void pointDis(Point &p1,Point &p2){
	float x1=p1.x-p2.x;
	float y1=p1.y-p2.y;
	cout << fixed << setprecision(2) << sqrt(x1*x1+y1*y1)<<endl;;
}
int main() {
    double x1,y1,x2,y2;
    cin>>x1>>y1>>x2>>y2;
    Point p1,p2;
    while(!(x1==0&&y1==0&&x2==0&&y2==0)) {
        p1=Point(x1,y1);
        p2=Point(x2,y2);
        pointDis(p1,p2);
        cin>>x1>>y1>>x2>>y2;
    }
    return 0;
}


