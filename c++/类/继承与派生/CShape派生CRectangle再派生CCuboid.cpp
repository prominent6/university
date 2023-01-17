#include <iostream>
using namespace std;
class CShape{
	public:
		virtual int Area(){
		};
		virtual int Length(){
		}
};
//矩形类 
class CRectangle:public CShape{
	private:
		int a,b;
	public:
		CRectangle(int aa=0,int bb=0):a(aa),b(bb){
		};
		int Area(){
			return a*b;
		}
		int Length(){
			return 2*(a+b);
		}
		
};
//长方体类 
class CCuboid:public CRectangle{
	private:
		int x,y,z;
	public:
		CCuboid(int xx=0,int yy=0,int zz=0):x(xx),y(yy),z(zz){
		};
		int Area(){
			return (x*y+y*z+x*z)*2;
		}
		int Length(){
			return 4*(x+y+z);
		}
		
};
void Display(CShape &c){
	cout<<c.Area()<<','<<c.Length()<<endl;
}
int main()
{
    CRectangle liv_Rect(4,8);//实例化边长为4、8的长方形
    CCuboid liv_Cub(4,4,8);// 实例化长方体，长方体的长宽高分别为4、4、8
    cout<<liv_Rect.Area()<<','<<liv_Rect.Length()<<endl;  //直接输出矩形的周长和面积
    cout<<liv_Cub.Area()<<','<<liv_Cub.Length()<<endl; //直接输出长方体的周长和面积
    Display(liv_Rect);             //调用Display函数输出liv_Rect的周长和面积
    Display(liv_Cub);             //调用Display函数输出liv_Cub的周长和面积
    return 0;
}
