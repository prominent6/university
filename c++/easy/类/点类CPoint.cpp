//����һ������CPoint��
//�����ݳ�Ա������double x��������double y��
//��Ա����abs()���ص㵽ԭ��ľ��롣
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
    point.input();        //��ʼ�����������
    point.output();      //����㵽ԭ��ľ���
    return  0;
}
