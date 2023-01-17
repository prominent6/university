//基类shape类是一个表示形状的抽象类，area( )为求图形面积的函数。
//请从shape类派生三角形类(triangle)、圆类（circles）、并给出具体的求面积函数。
#include <iostream>
#include<cmath>
#define  PI  3.14
using  namespace  std;
class shape
{ 
	public: 
		virtual float area()=0;
}; 
class triangle:public shape{
	public:	
		triangle(float aa=0.0,float bb=0.0,float cc=0.0):a(aa),b(bb),c(cc){
		};
		float area(){
			float p=(a+b+c)/2;
			return sqrt(p*(p-a)*(p-b)*(p-c));
		}
	private:
		float a,b,c; 
};
class circles:public shape{
	private:
		float r;
	public:
		circles(float rr=0.0):r(rr){
		};
		float area(){
			return PI*r*r;
		}
};
int main()
{
    shape *p;
    triangle t(3,4,5);
    circles c(10);
    p=&t;
    cout<<"triangle area:"<<p->area()<<endl;
    p=&c;
    cout<<"circles area:"<<p->area()<<endl;
}
