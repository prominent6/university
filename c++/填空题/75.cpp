#include<iostream>
using namespace std;
class A
{
public:
	A(int xx,int yy){X=xx;Y=yy;}
	void Set(A &p);
	void Disp()
	{cout<<X<<","<<Y<<endl;}
private:
	int X,Y;
};
void A::Set(A &p)
{
	if(this!=&p)
	{X=p.X;Y=p.Y;}
}
int main()
{
	A o1(2,5),o2(10,20);
	o1.Disp();
	o1.Set(o2);
	o1.Disp();
	return 0;
}
