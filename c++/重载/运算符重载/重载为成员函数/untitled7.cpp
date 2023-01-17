#include <iostream>
using namespace std;
class Person{
private:
	double h;
	double w;
public:
	Person(double hh,double ww):h(hh),w(ww){
		
	}
	double bmi(){
		return w/h/h;
	}
	bool operator>(Person p){
		if(this->bmi()>p.bmi())
			return true;
		else return 0;
	}
};
int main(){
	double a1,a2,b1,b2;
	cout<<"Input a's height and weight:";
	cin>>a1>>a2;
	cout<<"Input b's height and weight:";
	cin>>b1>>b2;
	Person a(a1,a2);
	Person b(b1,b2);
	cout<<"a's BMI:"<<a.bmi()<<endl;
	cout<<"b's BMI:"<<b.bmi()<<endl;
	if(b>a) cout<<"b>a";
	else cout<<"b<=a";
	return 0;
}
