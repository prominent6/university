#include <iostream>
using namespace std;
class vehicle  //车辆类
{
private:
	int MaxSpeed;  //最大车速
	int Weight;    //车重
public:
	vehicle(){MaxSpeed=0; Weight=0;}
	virtual void Run() {cout<<"A vehicle is running!"<<endl;}
};

class bicycle : public vehicle
//自行车类
{ 
private:
	int Height;  //车高
public:
	bicycle(){}
	void Run() {cout<<"A bicycle is running!"<<endl;}
};

class motorcar : public vehicle
//机动车类
{ 
private:
	int SeatNum;  //乘人数
public:
	motorcar(){}
	void Run() {cout << "A motorcar is running!" << endl; }
};

class motorcycle: public bicycle,public motorcar 
//摩托车类
{ 
public:
	motorcycle (){}
	void Run() {cout<<"A motorcycle is running!"<<endl;}
};
int main() {
	motorcycle a;
	a.Run();
	return 0;
}
