#include <iostream>
using namespace std;
class CShape{
	public:
		virtual int Area(){
		};
		virtual int Length(){
		}
};
//������ 
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
//�������� 
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
    CRectangle liv_Rect(4,8);//ʵ�����߳�Ϊ4��8�ĳ�����
    CCuboid liv_Cub(4,4,8);// ʵ���������壬������ĳ���߷ֱ�Ϊ4��4��8
    cout<<liv_Rect.Area()<<','<<liv_Rect.Length()<<endl;  //ֱ��������ε��ܳ������
    cout<<liv_Cub.Area()<<','<<liv_Cub.Length()<<endl; //ֱ�������������ܳ������
    Display(liv_Rect);             //����Display�������liv_Rect���ܳ������
    Display(liv_Cub);             //����Display�������liv_Cub���ܳ������
    return 0;
}
