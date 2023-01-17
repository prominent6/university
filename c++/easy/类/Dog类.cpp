#include <iostream>
using namespace std;
class Dog{
	public:
		void input();
		void output();
	private:
		int age,weight;
};
void Dog::input(){
	cout<<"Input Age and Weight:";
	cin>>age>>weight;
};
void Dog::output(){
	cout<<"Dog Age:"<<age<<" years"<<endl;
	cout<<"Dog Weight:"<<weight<<"kg"<<endl;
};
int main()
{
    Dog w;
    w.input();        
    w.output();      
    return 0;
}
