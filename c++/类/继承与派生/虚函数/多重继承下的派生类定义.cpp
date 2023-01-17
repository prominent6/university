#include <iostream>
#include <string>
using namespace std;
//使用虚基类来避免继承中的二义性

//定义公共基类Person
class Person                              
{public:
  Person(string nam,char s,int a)              
   {name=nam;sex=s;age=a;}
 protected:                              
   string name;
   char sex;
   int age;
};
//定义类Teacher
class Teacher:virtual public Person              
 {public:                                 
   Teacher(string nam,char s,int a,string t):Person(nam,s,a)       
    {title=t; 
    }
  protected:                                   
    string title;                                
};
//定义类Student
class Student:virtual public Person               
 {public:
   Student(string nam,char s,int a,float sco):   
      Person(nam,s,a),score(sco){}              
  protected:                                     
    float score;                               
 };
 
class Graduate:public Teacher,public Student{
	protected:
		float wages;
	public:
		//note!! 
		Graduate(string nam,char s,int a,string t,float sco,float wag)
		:Person(nam,s,a),Teacher(nam,s,a,t),Student(nam,s,a,sco),wages(wag) {};
		void show(){
			cout<<"name:"<<name<<endl;
			cout<<"age:"<<age<<endl;
			cout<<"sex:"<<sex<<endl;
			cout<<"score:"<<score<<endl;
			cout<<"title:"<<title<<endl;
			cout<<"wages:"<<wages<<endl;
		}
};
int main( )
 {Graduate grad1("Wang-li",'f',24,"assistant",89.5,1234.5);
  grad1.show( );
  return 0;
}

