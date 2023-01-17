#include <iostream>
using namespace std;
class MyTime{
	private:
		int h,m,s;
	public:
		MyTime(int hh=0,int mm=0,int ss=0):h(hh),m(mm),s(ss){
		};
		friend istream&operator>>(istream &is,MyTime &my){
			return is>>my.h>>my.m>>my.s;
		};
		friend ostream&operator<<(ostream &os,const MyTime &my){
			return os<<my.h<<":"<<my.m<<":"<<my.s;
		} 
		MyTime & operator++(){
			s++;
			if(s>=60){
				m++;
				s=s%60;
				if(m>=60){
					h++;
					m=m%60;
					if(h>=24){
						h=h%24;
					} 
				}
				
			}
			return *(this);
		}
};
int main()
{
    MyTime t1,t2(23,59,59),t3;
    cin>>t3;
    ++t1;
    cout<<t1<<endl;
    ++t2;
    cout<<t2<<endl;
    ++t3;
    cout<<t3<<endl;
    return 0;
}

