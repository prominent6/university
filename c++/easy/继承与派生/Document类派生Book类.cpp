#include <iostream>
#include <string>
using namespace std;
class Document{
	private:
		string name;
	
	public:
		Document(string n):name(n){
			cout<<"Name:"<<name <<endl;
		};
};
class Book:public Document{
	public:
		Book(string n,int p):Document(n),pageCount(p){
			cout<<"Page:"<<pageCount;
		}
	private:
		int pageCount;
};
int main(){
	int page;
	string name;
	cout<<"Input Name and Page:";
	cin>>name>>page;
	Book b1(name,page);
	return 0;
}
