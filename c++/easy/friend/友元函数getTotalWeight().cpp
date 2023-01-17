//定义Boat与Car两个类，二者都有weight属性，
//定义二者的一个友元函数getTotalWeight()，计算二者的重量和。
#include <iostream>
using namespace std;
class Car;  //
class Boat {
public:
	Boat(int w) :weight(w) {};
	friend int getTotalWeight(Boat &b,Car &c);  //
private:
	int weight;
};
class Car {
public:
	Car(int w):weight(w) {};
	friend int getTotalWeight(Boat &b, Car &c); //
private:
	int weight;
};
int getTotalWeight(Boat& b, Car& c) {
	return b.weight + c.weight;
}
int main(void) {
	int w;
	cout << "Input boat weight:";
	cin >> w;
	Boat b(w);
	cout << "Input car weight:";
	cin >> w;
	Car c(w);
	cout << "Total weight:"<<getTotalWeight(b, c) << endl; 
	return 0;
}
