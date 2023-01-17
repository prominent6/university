#include <iostream>
using namespace std;
class A{
public:
	int val;
	A(int n=0){val=n;}
	A & getObj1(){return *this;}
	int getObj2(){return val;}
};
int main()
{
	A a,b(2),c[2]={10};
	cout<<a.val<<endl;
	cout<<b.val<<endl;
	cout<<c[0].val<<endl;
	a.getObj1()=5;
	cout<<a.val<<endl;
	cout<<b.getObj2()<<endl;
	return 0;
}
/*
  0
  2
  10
  5
  2
 */
