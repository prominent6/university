//定义一个点类CPoint，
//有数据成员横坐标double x，纵坐标double y。
//成员函数abs()返回点到原点的距离。
#include <iostream>
#include <cmath>
using namespace std;
class CPoint
{
public:
    void input();
    void output();
private:
    double x,y;
};
void CPoint::input(){
	cin>>x>>y;
};
void CPoint::output(){
	cout<<"abs="<<sqrt(pow(x,2)+pow(y,2));
};
int main()
{
    CPoint point;
    point.input();        //初始化输入坐标点
    point.output();      //输出点到原点的距离
    return  0;
}
