#include <iostream>
using namespace std;
class Time {
	private:
	 	int hours,minutes, seconds;
	public:
		 Time(int h=0,int m=0,int s=0);
		 Time operator + (Time &);
		 void DispTime();
};
Time::Time(int h,int m,int s){
	hours=h;
	minutes=m;
	seconds=s;
};
Time Time::operator + (Time &t){
	hours=this->hours+t.hours;
	minutes=this->minutes+t.minutes;
	seconds=this->seconds+t.seconds;
	if(seconds>60){
		seconds-=60;
		minutes++;
		if(minutes>60){
			minutes-=60;
			hours++;
		}
	}
	if(hours<0) hours=0; 
	return *this;
}
void Time::DispTime(){
	cout<<hours<<"h:"<<minutes<<"m:"<<seconds<<"s"<<endl;
}
int main() {
 Time tm1(8,75,50),tm2(0,6,16), tm3;
 tm3=tm1+tm2;
 tm3.DispTime();
 return 0;
}

