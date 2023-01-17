#include <iostream>
#include <cmath>
using namespace std;

//定义Point类
class Point{
public:
	int x,y;
	Point(int xx,int yy):x(xx),y(yy){};
};
//定义Rect类
class Rect{
public:
	Point tl; //左上角顶点坐标
	Point br; //右下角顶点坐标
	Rect(Point aa,Point bb):tl(aa),br(bb){};
	Point topRight(){
		return Point(br.x,tl.y);
	}
	Point bottomLeft(){
		return Point(tl.x,br.y);
	}
	int width(){
		return br.x-tl.x;
	}
	int height(){
		return br.y-tl.y;
	}
	int area(){
		return width()*height();
	}
	double diagonalLength(){
		return sqrt(pow(width(),2)+pow(height(),2));
	}
};
int main() {
	auto rt = Rect(Point(1,6),Point(7,8));
	printf("Vertices of rectangle rt:\n");
	printf("(%d,%d)-----------------------(%d,%d)\n",
		rt.tl.x,rt.tl.y,rt.topRight().x,rt.topRight().y);
	
	printf("(%d,%d)-----------------------(%d,%d)\n",
		rt.bottomLeft().x,rt.bottomLeft().y,rt.br.x,rt.br.y);
	
	printf("Size information of rectangle rt:\n");
	printf("width - %d    height - %d\n",rt.width(),rt.height());
	printf("area - %d    diagonal legnth - %.2f",rt.area(),rt.diagonalLength());
	
	return 0;
}

