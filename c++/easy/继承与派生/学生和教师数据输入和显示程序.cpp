#include <iostream>
#include <string>
using namespace std;
class  person
{
public:
        person()
        {
                cout<<"Input  id:";
                cin>>id;
                cout<<"Input  name:";
                cin>>name;
        }
        void  display()
        {
                cout<<"Id:"<<id<<endl;
                cout<<"Name:"<<name<<endl;
        }
private:
        string  id;
        string  name;
};
class student:public person{
	public:
		student(){
			cout<<"Input class:";
			cin>>classN;
			cout<<"Input score:";
			cin>>score; 
			
		} 
		void display(){
			cout<<"Student's info:"<<endl; 
			person::display();
            cout<<"Class:"<<classN<<endl;
            cout<<"Score:"<<score<<endl;			
		}
	private:
		string classN;
		string score;
};
class teacher:public person{
	public:
		teacher(){
			cout<<"Input title:";
			cin>>voc;
			cout<<"Input department:";
			cin>>dep; 
			
		} 
		void display(){
			cout<<"Teacher's info:"<<endl; 
			person::display();
            cout<<"Title:"<<voc<<endl;
            cout<<"Department:"<<dep<<endl;			
		}
	private:
		string voc;
		string dep;
};
int  main()
{
        student  stu;
        teacher  tea;
        stu.display();
        tea.display();
        return  0;
}

