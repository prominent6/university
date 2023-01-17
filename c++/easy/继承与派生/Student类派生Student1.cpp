#include <iostream>
#include <string>
using namespace std;
class Student
{
	public:
	  void get_value()
	   {cin>>num>>name>>sex;}
	  void display( )
	    {cout<<"num: "<<num<<endl;
	     cout<<"name: "<<name<<endl;
	     cout<<"sex: "<<sex<<endl;}
	private :
	   int num;
	   string name;
	   char sex;
};   

class Student1:public Student{
	public:
		void get_value_1(){
			cin>>age>>adr;
		};
		void display_1(){
			cout<<"age: "<<age<<endl;
			cout<<"address: "<<adr<<endl;
		}
	private:
		int age;
		string adr; 
};

int main()
 {Student1 stud1;
  stud1.get_value();
  stud1.get_value_1();
  stud1.display();
  stud1.display_1();
  return 0;
} 

