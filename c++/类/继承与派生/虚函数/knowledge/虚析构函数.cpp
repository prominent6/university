#include <iostream>
using namespace std;
class Base{
	public:
		~Base(){
			cout<<"Base destructor"<<endl; 
		};
};
class Derived:public Base{
	private:
		int *p;
	public:
		Derived(){
			p=new int(0);
		};
		~Derived(){
			cout<<"Derived destructor"<<endl;
			delete p;
		}; 
};
void fun(Base *b){
	delete b;
}
int main(){
	Base *b=new Derived();
	fun(b);
	return 0;
} 
//


#include <iostream>
using namespace std;
class Base{
	public:
		virtual ~Base(){
			cout<<"Base destructor"<<endl; 
		};
};
class Derived:public Base{
	private:
		int *p;
	public:
		Derived(){
			p=new int(0);
		};
		~Derived(){
			cout<<"Derived destructor"<<endl;
			delete p;
		}; 
};
void fun(Base *b){
	delete b;
}
int main(){
	Base *b=new Derived();
	fun(b);
	return 0;
}
//Derived destructor  Base destructor
