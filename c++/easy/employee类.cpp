#include <iostream>
#include <string>
using namespace std;
class Employee
{
	public:
        Employee(){
			cout<<"Input name:";
			cin>>name;
		};
        void display();
	private:
        static int base_id;
        int id;
        string name;
};
int Employee::base_id=1001;
void Employee::display(){
	cout<<"ID:"<<base_id++<<" "<<"Name:"<<name<<endl;
}
int main()
{
    Employee e1;
    Employee e2;
    e1.display();
    e2.display();
    return  0;
}
