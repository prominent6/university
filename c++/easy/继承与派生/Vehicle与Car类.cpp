#include<iostream>
using namespace std; 
class Vehicle 
{ 
    protected: 
        int wheels; 
        float weight; 
    public: 
        Vehicle(int wheels,float weight); 
        int get_wheels(); 
        float get_weight(); 
        float wheel_load(); 
        void show(); 
}; 
class Car:public Vehicle{
	protected:
		int passenger_load;
	public:
		Car(int w,int wt,int l):Vehicle(w,wt),passenger_load(l){
		};
		void show(){
			cout<<"Type:Car"<<endl;
			cout<<"Type:Vehicle"<<endl;
			cout<<"Wheel:"<<wheels<<endl;
			cout<<"Weight:"<<weight<<"kg"<<endl; 
			cout<<"Load:"<<passenger_load<<" persons"<<endl;
		}
};
Vehicle::Vehicle(int wheels,float weight){
	this->wheels =wheels;
	this->weight=weight;
}
void Vehicle::show(){
	cout<<"Type:Vehicle"<<endl;
	cout<<"Wheel:"<<wheels<<endl;
	cout<<"Weight:"<<weight<<"kg"<<endl; 
}
int main () 
{ 
    Vehicle v(4,1000);
    v.show(); 
    Car car1(4,2000,5);  
    car1.show(); 
    return 0;
}

