#include <string>
#include <iostream>
#include <string>
using namespace std;

class MyDate{
	private:
		int m,d,y;
	public:
		void setDate(int mm=1,int dd=1,int yy=1900){
			m=mm;
			d=dd;
			y=yy;	
			//检查日期是否合法
			bool rn=false;
			rn=((y%4==0)&&(y%100!=0)||(y%400==0)); 
			bool err=((m==1||m==3||m==5||m==7||m==8||m==10||m==12)&&d>31)||((m==4||m==6||m==9||m==11)&&d>30)||(m==2&&rn&&d>29||!rn&&m==2&&d>28)||m>12;
			if(err){
				m=1;
				d=1;
				y=1900;
			}
		};
		friend ostream&operator<<(ostream &os,MyDate my){
			string month[12]={"January","February","March","April","May","June","July",
                        "August","September","October","November","December"};
            os<<month[my.m-1]<<" "<<my.d<<", "<<my.y;
            return os;
		}
		MyDate operator++(int){
	        MyDate my=*this;
	        operator++();
	        return my;
    	}
		MyDate operator++(){
			d++;
			//检查日期是否合法
			bool rn=false;
			rn=((y%4==0)&&(y%100!=0)||(y%400==0)); 
			bool err=((m==1||m==3||m==5||m==7||m==8||m==10||m==12)&&d>31)||((m==4||m==6||m==9||m==11)&&d>30)||(m==2&&rn&&d>29||!rn&&m==2&&d>28)||m>12;
			if(err){
				m++;
				d=1;
				if(m>12){
					y++;
					m=1;
				}
			}
			return *this;
		}
		MyDate operator+=(int n){
			for(int i=0;i<n;i++){
				operator++();
			}
			return *this;
		}
};

int main()
{
    int m,d,y;
    MyDate d1,d2,d3;
    cin>>m>>d>>y;
    d1.setDate(m,d,y);
    
    cin>>m>>d>>y;
    d2.setDate(m,d,y);
    
    cin>>m>>d>>y;
    d3.setDate(m,d,y);
    
    cout << "d1 is " << d1 << "\nd2 is " << d2;
    cout << "\n\nd1 += 7 is " << ( d1 += 7 );
    cout << "\n\n d2 is " << d2;
    cout << "\n++d2 is " << ++d2;
    cout << "\n\nTesting the prefix increment operator:\n"<< " d3 is " << d3 << endl;
    cout << "++d3 is " << ++d3 << endl;
    cout << " d3 is " << d3;
    cout << "\n\nTesting the postfix increment operator:\n"<< " d3 is " << d3 << endl;
    cout << "d3++ is " << d3++ << endl;
    cout << " d3 is " << d3 <<endl;
} 

