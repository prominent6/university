#include <iostream>
#define PI 3.14
using namespace std;
class C{
	public:
		virtual void display(){
		};
}; 
class CCircle:public C{
	private:
		int r;
	public:	
		CCircle(int rr=0):r(rr){
		};
		float Area(){
			return PI*r*r;
		}
		void display(){
			cout<<Area()<<endl;
		}
};
class CCylinder:public C{
	private:
		int r,h;
	public:
		CCylinder(int rr=0,int hh=0):r(rr),h(hh){
		};
		float Area(){
			return PI*r*r; 
		}
		float Volume(){
			return PI*r*r*h; 
		}
		void display(){
			//cout<<Area()<<endl;
			cout<<Volume()<<endl;
		}
};
void Display(C &c){
	c.display();
}
int main()
{
    CCircle liv_Cri(4);
    CCylinder liv_Cyl (4,8);
    cout<<liv_Cri.Area()<<endl;  //直接输出liv_Cri的面积
    cout<<liv_Cyl.Area()<<','<<liv_Cyl.Volume()<<endl; //直接输出liv_Cyl的面积和体积
    Display(liv_Cri);             //调用Display函数输出liv_Cri的面积
    Display(liv_Cyl);             //调用Display函数输出liv_Cyl的面积和体积
    return 0;
}
