#include <iostream>
using namespace std;
class Sample
{
public:
	Sample(int i,int j){x=i;y=j;}
	void disp()const{cout<<"disp const"<<endl;}
	void disp(){cout<<"disp"<<endl;}
private:
	int x,y;
};
int main()
{
	const Sample a1(4,11);
	a1.disp();
	return 0;
}
