#include <iostream>
#include <cmath>
using namespace std;
class CPoint{
	private:
		int x,y;
	public:
		CPoint(int xx=0,int yy=0):x(xx),y(yy){
		}
		CPoint(CPoint &c){
			x=c.x;
			y=c.y;
		} 
		int getx(){
			return x;
		}
		int gety(){
			return y;
		}
};
class CLine{
	private:
		CPoint p1,p2;
		static int count;
	public:
		CLine(CPoint pp1,CPoint pp2):p1(pp1),p2(pp2){
			count++;
		};
		CLine(CLine &c){
			p1=c.p1 ;
			p2=c.p2 ;
			count++;
		};
		int GetLen(){
			int x=pow(p1.getx()-p2.getx(),2); 
			int y=pow(p1.gety()-p2.gety(),2);
			return sqrt(x+y);
		};
		static int ShowCount(){
			return count;
		}
};
int CLine::count=0;
int main(){
     int x,y;
     cin>>x>>y;
     CPoint p1(x,y);
     cin>>x>>y;
     CPoint p2(x,y);
     CLine line1(p1,p2);
     cout<<"the length of line1 is:"<<line1.GetLen()<<endl;
     CLine line2(line1);
     cout<<"the length of line2 is:"<<line2.GetLen()<<endl;
     cout<<"the count of CLine is:"<<CLine::ShowCount()<<endl; 
     return 0;
}
