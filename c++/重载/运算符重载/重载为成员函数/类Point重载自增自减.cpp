#include  <iostream>
using  namespace  std;
class Point{
	private:
		int a,b;
	public:
		Point(int aa=0,int bb=0):a(aa),b(bb){
		}; 
		Point operator++(){
			Point p0;   //¡Ÿ ± 
			p0.a=a+1;
			p0.b=b+1;
			a+=1;
			b+=1;
			return p0;
		};
		Point operator++(int){
			Point old=*this;
			++(*this);
			return old;
		};
		Point operator--(){
			Point p0;
			p0.a=a-1;
			p0.b=b-1;
			a-=1;
			b-=1;
			return p0;
		}
		Point operator--(int){
			Point old=*this;
			--(*this);
			return old;
		};
		void display(){
			cout<<"("<<a<<","<<b<<")"<<endl;
		}
}; 
int  main()
{
        Point a,b(5,5);
        a=b++;
        a.display();
        a=++b;
        a.display();
        a=--b;
        a.display();
        a=b--;
        a.display();
}
