//实现一个名为SimpleCircle的简单圆类
//其数据成员int *itsRadius为一个指向其半径值的指针，存放其半径值
//设计对数据成员的各种操作并计算面积
#include  <iostream>
using  namespace  std;
const  float  pi=3.14;
class  SimpleCircle
{
	public:
		SimpleCircle(){
			cout<<"Con. SimpleCircle"<<endl;
		}
		~SimpleCircle(){
			cout<<"Des. SimpleCircle"<<endl;
		}
        void  setRadius(float  r)
        {
                *itsRadius=r;
        }
        float  getRadius()
        {
                return  *itsRadius;
        }
        float  getArea()
        {
                return  (*itsRadius)*(*itsRadius)*pi;
        }
        
    private:
    	float  *itsRadius;
};
int  main()
{
        SimpleCircle  c;
        c.setRadius(10);
        cout<<"Area:"<<c.getArea()<<endl;
}

