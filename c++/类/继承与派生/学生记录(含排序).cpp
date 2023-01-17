#include <iostream>
#include <string> 
#include <iomanip>
using namespace std;
class Person{
	protected:
		string name;
		int age;
	public:
		void input(){
			cin>>name>>age;
		}
		void output(){
			//姓名（英文）占6位，年龄占3位
			cout<<setw(6)<<name<<setw(3)<<age<<endl;
		}
};
class Student:public Person{
	private:
		int id;
	public:
		void input(){
			cin>>id;
			Person::input();
		}
		void output(){
			cout<<setw(3)<<id; //学号占3位
			Person::output();
			cout<<endl;
		}
		bool cmpName(Student &stu){
			if(this->name>stu.name) return true;
			return false;
		}
		bool cmpAge(Student &stu){
			if(this->age>stu.age) return true;
			else if(this->age==stu.age) return this->cmpName(stu);
			return false;
		}
		void swap(Student &stu){
			Student temp;
			temp=*this;
			*this=stu;
			stu=temp;
		}
};
void sortInfo(Student stu[],int n,bool cmp){
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-i-1;j++){
			if(cmp){
				if(stu[j].cmpName(stu[j+1])) stu[j].swap(stu[j+1]);
			}else{
				if(stu[j].cmpAge(stu[j+1])) stu[j].swap(stu[j+1]);
			}
			
		}
	}
}
void getInfo(Student stu[],int n){
	for(int i=0;i<n;i++){
		stu[i].input();
	}
}
void showInfo(Student stu[],int n){
	for(int i=0;i<n;i++){
		stu[i].output();
	}
}
int main(){
	int n;
	Student stu[50];  //
	cin>>n;
	getInfo(stu,n); 
	sortInfo(stu,n,true);
	showInfo(stu,n);
	sortInfo(stu,n,false);
	showInfo(stu,n);
	return 0;
}
