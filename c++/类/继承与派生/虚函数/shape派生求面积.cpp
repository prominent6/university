//����shape����һ����ʾ��״�ĳ����࣬area( )Ϊ��ͼ������ĺ�����
//���shape��������������(triangle)��Բ�ࣨcircles��������������������������
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
