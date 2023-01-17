//����Boat��Car�����࣬���߶���weight���ԣ�
//������ߵ�һ����Ԫ����getTotalWeight()��������ߵ������͡�
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
