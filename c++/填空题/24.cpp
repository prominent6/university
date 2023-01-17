#include <iostream>
using namespace std;
class Base
{
public:
	int val;
	Base(){ cout << "Base Constructor"<<endl; }
	~Base() { cout << "Base Destructor"<<endl;}
};
class Base1:virtual public Base{
//public:
//	Base1(){ cout << "Base1 Constructor"<<endl; }
//	~Base1() { cout << "Base1 Destructor"<<endl;}
};
class Base2:virtual public Base {
//public:
//	Base2(){ cout << "Base2 Constructor"<<endl; }
//	~Base2() { cout << "Base2 Destructor"<<endl;}	
};
class Derived:public Base1, Base2 {
//public:
//	Derived(){ cout << "Derived Constructor"<<endl; }
//	~Derived() { cout << "Derived Destructor"<<endl;}
};
int main() 
{
	Derived d;
	return 0;
}
/*
  Base Constructor
  Base1 Constructor
  Base2 Constructor
  Derived Constructor
  Base Destructor
  ...
 */
