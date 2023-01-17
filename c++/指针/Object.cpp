#include <iostream>
using namespace std;
class Object{
public:
	virtual float volume()=0;
};

class Cuboid:public Object{
private:
	float l;
	float h;
	float w;
public:
	Cuboid(float ll,float hh,float ww):l(ll),h(hh),w(ww){};
	virtual float volume(){
		return l*h*w;
	};
};

class Cylinder:public Object{
private:
	float r;
	float h;
public:
	Cylinder(float rr,float hh):r(rr),h(hh){};
	virtual float volume(){
		return 3.14*r*r*h;
	};
};
int main(){
	Cuboid cu(3,4,5);
	Cylinder cy(4,10);
	Object *ptr[2]={&cu,&cy};
	cout<<"总体积："<<ptr[0]->volume()+ptr[1]->volume()<<endl;
}
