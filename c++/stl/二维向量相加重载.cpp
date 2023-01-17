#include <iostream>
#include <iomanip>
using namespace std;
class TDVector{
private:
    double x;
    double y;
public:
    TDVector(){
        x = y = 0;
    }
    TDVector(double xx,double yy){
    	x=xx;
    	y=yy;
	}
	void setX(double xx){
		x=xx;
	}
	void setY(double yy){
		y=yy;
	}
	TDVector operator+(TDVector &t){
		return TDVector(x+t.x,y+t.y);
	}
	double getX(){
		return x;
	} 
	double getY(){
		return y; 
	}
};
int main(){
    TDVector a;
    double x, y;
    cin >> x >> y;
    TDVector b(x, y);
    cin >> x >> y;
    TDVector c;
    c.setX(x);
    c.setY(y);
    TDVector d;
    d = a + b + c;
    cout << fixed << setprecision(2) << d.getX() << ' ' << d.getY();
    return 0;
}

