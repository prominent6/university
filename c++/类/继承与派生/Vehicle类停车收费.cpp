#include <iostream>
#include <string>
using namespace std;
const float Car_Price= 8;
const float Bus_Price= 10;
const float Truck_Price=15;
class Vehicle{
    protected:
        float price;
        int minute;
    public:
       virtual float computeFee(){return 20.0f*minute/60;};
       virtual string getType(){return "unknow"; };
       float getPrice();
       void setPrice(float _price);
       int getMinute();
       void setMinute(int _minute);
       Vehicle(float _price,int _minute); 
       Vehicle(){
       };
};
Vehicle::Vehicle(float _price,int _minute){
	price=_price;
	minute=_minute;
}; 
void Vehicle::setMinute(int _minute){
	minute=_minute;
}
int Vehicle::getMinute(){
	return minute;
}
class Parker{
	private:
		double sum=0;
	public:
		void park(Vehicle *p){
			sum+=p->computeFee();
		} 
		double getSum(){
			return sum;
		}
};
//轿车Car：每小时8元，超过30分钟按一小时计算，未超过30分钟不收费 
class Car:public Vehicle{
	public:
		Car(int m):Vehicle(Car_Price,m){
		};
		string getType(){return "car"; };
		float computeFee(){
			int hour=minute/60;  //除60 
			if(minute-hour*60>30) hour++;
			return hour*price;
		}
};
//客车Bus：每小时10元，30分钟以内按半小时计费，未达1小时但超过30分钟按1小时计算
class Bus:public Vehicle{
	public:
		Bus(int m):Vehicle(Bus_Price,m){
		};
		string getType(){return "bus"; };
		float computeFee(){
			int hour=minute/60;
			if((minute-hour*60)>30) return (hour+1)*price;
			else if((minute-hour*60)==0) return hour*price;
			else return hour*price+price/2;
		}
};
// 货车Truck：每小时15元，未达1小时的按1小时计算
class Truck:public Vehicle{
	public:
		Truck(int m):Vehicle(Truck_Price,m){
		};
		string getType(){return "truck"; };
		float computeFee(){
			int hour=minute/60;
			if(minute%60)  hour++;
			return hour*price;
		}
};
int main(){
    int n,minute; //停车辆次，时长 
    char type;
    Vehicle *vp;
    Parker p;
    cin>>n;
    
    for(int i=1;i<=n;i++){
        cin>>type>>minute;
        switch(type){
            case 'c':vp=new Car(minute);break;
            case 't':vp=new Truck(minute);break;
            case 'b':vp=new Bus(minute);break;
            default: vp=new Vehicle();vp->setMinute(minute);
        }
        cout<<"type:"<<vp->getType() <<" minute:"<<vp->getMinute()<<" fee:"<<vp->computeFee()<<endl;
        p.park(vp);
        if(vp) delete vp;
    }
    cout<<"sum:"<<p.getSum()<<endl;
    return 0;
}

