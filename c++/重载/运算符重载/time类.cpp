#include <iostream>
#include <iomanip>
using namespace std;
class TIME{
	private:
		int h,m,s;
	public:
		TIME(){
			h=0;m=0;s=0;
		}
		TIME(int hh,int mm,int ss):h(hh),m(mm),s(ss){
		}
		void Input(){
			char ch; 
			cin>>h>>ch>>m>>ch>>s;
		}
		void Output() const{
			char ch=':';
			cout<<h<<ch<<m<<ch<<s;
		}
		TIME Next(){
			(this->s)++;
			if((this->s)>=60){
				(this->s)=0;
				(this->m)++;
				if((this->m)>=60){
					(this->m)=0;
					(this->h)++;
					if(this->h>24) this->h%=24;
				}
			} 
			return *(this);
		}
};

int main()
{
    TIME a, b;
    a.Input();
    b = a.Next();
    a.Output();
    cout << ' ';
    b.Output();
    cout << endl;
    return 0;
}

