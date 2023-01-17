#include<iostream>
using namespace std;
class Vehicle
{
public:
	virtual void run(){
		cout<<"Vehicle run"<<endl;
	}
	virtual void stop(){
		cout<<"Vehicle stop"<<endl;
	}
};
class Bicycle:public Vehicle
{
public:
	void run(){
		cout<<"Bicycle run"<<endl;
	}
	void stop(){
		cout<<"Bicycle stop"<<endl;
	}
};
class Motorcar:public Vehicle
{
public:
	void run(){
		cout<<"Motorcar run"<<endl;
	}
	void stop(){
		cout<<"Motorcar stop"<<endl;
	}
};
//void run(Vehicle v){
//    v.run();
//}
//void run(Bicycle b){
//    b.run();
//}
//void run(Motorcar m){
//    m.run();
//}
void run(Vehicle &a){
	a.run();
}
int main(int argc, char const *argv[])
{
	Vehicle veh;
	Bicycle bic;
	Motorcar mot;
	run(veh);
	run(bic);
	run(mot);
	return 0;
}

