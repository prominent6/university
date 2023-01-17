#include <iostream>
#include <string>
using namespace std;
class Person {	
public:
	string name;
	Person(string aname) {name=aname;}
	virtual void print() {
		cout<<"Person:"<<name<<endl;
	}
	
};

class Student: public Person {
public:
	Student(string aname):Person(aname) {}
	void print() {
		cout<<"Student:"<<name<<endl;
	}	
};

class GStudent: public Student{
public:
	GStudent(string aname):Student(aname){}
	void print(){
		cout<<"GStudent:"<<name<<endl;	
	}
};

int main() {
	Person p1("Mark"), *p;
	Student p2("Jack");
	GStudent p3("Rose");
	p=&p1;
	p->print();
	p=&p2;
	p->print();
	p=&p3;
	p->print();
	return 0;
}


