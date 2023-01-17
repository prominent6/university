#include <iostream>
using namespace std;
class Point{
	public:
		Point(int xx=0,int yy=0){
			x=xx;
			y=yy;
		}
		Point(Point &p);  //���ƹ��캯��
		int getX(){
			return x; 
		} 
		int getY(){
			return y;
		}
	private:
		int x,y;
}; 
//��Ա������ʵ�� 
Point::Point(Point &p){
	x=p.x;
	y=p.y;
	cout<<"copy constructor"<<endl; 
}

//�β�ΪPoint��ĺ���
void fun1(Point p){
	cout<<p.getX()<<endl;
} 

//����ֵΪPoint�����ĺ���
Point fun2(){
	Point a(1,2);
	return a;
} 

int main(){
	Point a(4,5);  //��һ������a
	Point b=a;  //Point b(a);  //���һ����a��ʼ��b,��һ�ε��ø��ƹ��캯��
	cout<<b.getX()<<endl;
	fun1(b);  //�����������b��Ϊfun1��ʵ�Σ��ڶ��ε��ø��ƹ��캯��
	b=fun2(); //������������ķ���ֵ����Ķ��󣬺�������ʱ������/�����ø��ƹ��캯�� 
	cout<<b.getX()<<endl;
	return 0; 
}
