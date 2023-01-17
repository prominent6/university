//定义一个时间类CTime
//输入一个起始时间和一个结束时间 ，计算这两个时间间隔多少秒钟
#include <iostream>
#define N 100
using namespace std;
class CTime{
	private:
		int m;
		int s;
	public:
		CTime():m(0),s(0){
		}
		CTime(const int& mm, const int& ss): m(mm), s(ss) {}
		void input(){
			cin>>m>>s;
		}
		bool beZero() const{
			return m==0&&s==0;
		}
		int totalseconds() const{
			return m*60+s;
		}
		friend ostream& operator<< (ostream &os,const CTime &time){
			return os<<time.totalseconds()<<endl;
		}
		CTime operator-(const CTime& other){
			int ss=totalseconds();
			int other_ss=other.totalseconds();
			int ts=ss-other_ss;
			int new_m=ts/60;
			int new_s=ts%60;
			return CTime(new_m,new_s);
		}
};
int main(){
	CTime time[N];
	int count=-1;
	do{
		count++;
		time[2*count].input();
		time[2*count+1].input();
	}while(!(time[2*count].beZero()&&time[2*count+1].beZero()));
	for(int i=0;i<count;i++){
		cout<<time[2*i+1]-time[2*i]<<endl;
	}
	return 0;
} 
