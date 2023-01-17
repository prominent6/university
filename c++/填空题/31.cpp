#include <iostream>
using namespace std;
class S{
	int v;
public:
	S(){};
	S(int n):v(n){}
	int getV(){return v;}
};
class D:public S{
private:
	int v;
public:
	D(int n):S(n){v=n;}
	int getV(){return v;}
};

int main()
{ 
	D a(2);
	cout << a.getV()<<','<<a.S::getV()<<endl;
	return 0;
}
/*
  2,2
 */
