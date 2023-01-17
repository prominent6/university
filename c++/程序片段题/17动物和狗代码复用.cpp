#include <iostream>
using namespace std;

class Animal {
public:
	int iFeetCount {0};
	int iWeight {0};
	Animal(){
		cout << "Animal(), weight = " << iWeight << endl;
	}
	~Animal(){
		cout << "~Animal(), weight = " << iWeight << endl;
	}
};
class Dog : public Animal
{
public:
	string sName;
	Dog(const string name, int weight){
		sName = name;
		iFeetCount = 4;
		iWeight=weight;
		cout <<"Dog(), name = " << name << ", weight = " << iWeight << endl;
	}
	~Dog(){
		cout <<"~Dog(), name = " << sName << ", weight = " << iWeight << endl;
	}
};

int main()
{
	Dog* d1 = new Dog("Bottle",3100);
	delete d1;
	
	cout << "---------------------------------------" << endl;
	
	Dog* d2 = new Dog("Nauty",2312);
	
	Animal* a2 = d2;
	if (a2==d2){
		cout << "Parent object is located at the beginning of sub object." << endl;
	}
	delete d2;
	
	return 0;
}
