#include <iostream>
using namespace std;
class Sample
{
public:
	Sample(int a){X=a;}
	void Print()const{cout<<"Const:X="<<X<<endl;}
	void Print(){cout<<"X="<<X<<endl;}
private:
	int X;
};
int main()
{
	const Sample s1(10);
	Sample s2(20);
	s1.Print();
	s2.Print();
	return 0;
}
