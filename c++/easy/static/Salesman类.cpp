#include<iostream>
#include<string>
#include<string.h>
using namespace std;
class Salesman{
	private:
		string name;
		double res;
		static double sum; 
		static int num;
	public:
		Salesman(string s,double x,double y,double z):name(s),res(x*y*z){
			num++;
			sum+=res;
		};
		static double getAver(){
			return sum/num;
		}
		static void show(){
			cout<<"There are "<<num<<" salesmen,sales amount is:"<<sum<<endl;
		} 
};
double Salesman::sum=0;
int Salesman::num=0;
int main(){
    Salesman sman[]={
    Salesman("Li",4,100,0.5),
    Salesman("Wang",3,200,0.4),
    Salesman("Liu",2,300,0.3)
    };
    Salesman::show();
    cout<<"Average commission is£º"<<Salesman::getAver()<<endl;
    return 0;
} 


