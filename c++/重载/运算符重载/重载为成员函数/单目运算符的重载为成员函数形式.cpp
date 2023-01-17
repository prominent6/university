#include <iostream>
using namespace std;
class Clock{
	private:
		int hour,minute,second;
	public:
		Clock(int h=0,int m=0,int s=0):hour(h),minute(m),second(s){
		};
		void showTime() const;
		Clock & operator++(); //前置单目运算符重载 
		Clock operator++(int); //后置单目运算符 
};
void Clock::showTime() const{
	cout<<hour<<":"<<minute<<":"<<second<<endl;
}
Clock &Clock::operator++(){
	second++;
	if(second>=60){
		second-=60;
		minute++;
		if(minute>=60){
			minute-=60;
			hour=(hour+1)%24;
		}
	}
	return *this;
} 
Clock Clock::operator++(int){
	Clock old=*this;
	++(*this);
	return old;
}
int main(){
	Clock myClock(23,59,59);
	cout<<"First time ouput:";
	myClock.showTime();
	cout<<"Show myClock++: ";
	(myClock++).showTime();
	 cout<<"Show ++myClock: ";
	(++myClock).showTime();
	return 0;
} 
