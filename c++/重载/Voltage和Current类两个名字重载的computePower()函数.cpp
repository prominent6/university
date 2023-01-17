#include <iostream>
using namespace std;

//定义Voltage类
class Voltage{
private:
	float v;
public:
	Voltage(float vv):v(vv){};
};
//定义Current类
class Current{
private:
	float c;
public:
	Current(float cc):c(cc){};
};
//定义两个函数名重载的computePoweer()函数
template <class Voltage,class Current>
float computePoweer()

int main() {
	cout << "P = UI = 3*2 = "
	<< computePower(Voltage(3),Current(2)) << endl;
	cout << "P = IIR = 2*2*1.5 = "
	<< computePower(Current(2),1.5) << endl;
	return 0;
}

