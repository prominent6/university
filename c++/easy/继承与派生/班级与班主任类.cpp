#include <iostream>
using namespace std;
class Teacher{
    private:
        string name; //姓名 
        string course; //所教课程 
    public:
        Teacher(){};
        Teacher(string name_,string course_);
        string getName(){return name;}
        string getCourse(){return course;}
};
Teacher::Teacher(string name_,string course_){
	name=name_;
	course=course_;
}
class Class:public Teacher{
	private:
		int g;
		int c;
	public:
		Class(int gg,int cc,string nn="unknow",string ss="chinese"):Teacher(nn,ss){
			g=gg;
			c=cc;
			cout<<"grade:"<<g<<" "<<"class no:"<<c<<",head teacher:"<<getName()<<"("<<getCourse()<<")"<<endl;
		}
		Class(){
			cout<<"new class created."<<endl;
		}
};
int main(){
    Class c1(2,1,"ZhangXiaowen","math");
    Class c2(3,2,"LiSisi");    
    Class c3(1,1);
    Class c4;
    return 0;
} 

