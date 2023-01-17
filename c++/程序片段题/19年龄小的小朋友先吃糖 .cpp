#include <iostream>
#include <queue>
using namespace std;

class Child {
public:
	string sName;
	int iAge;
	
	bool operator>(const Child &c) const{
		return (this->iAge>c.iAge?true:false);
	}
	
	Child(string name, int age){
		sName = name;
		iAge=age;
	}
};

int main()
{
	priority_queue<Child,vector<Child>,greater<Child>> q;
	q.push(Child("Jack",7));
	q.push(Child("Tom",5));
	q.push(Child("Tiffany",9));
	q.push(Child("Alex",10));
	q.push(Child("Dick",4));
	q.push(Child("Jimmy",8));
	
	while (!q.empty()){
		auto x = q.top();
		cout << x.sName << " at age " << x.iAge << " get candy." << endl;
		q.pop();
	}
	return 0;
}
