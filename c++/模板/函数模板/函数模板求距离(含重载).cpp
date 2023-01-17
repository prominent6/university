#include  <iostream>
#include  <cmath>
using  namespace  std;
class Complex{
	private:
		int real,imag;
	public:
		Complex(int r=0,int i=0):real(r),imag(i){
		}
		void input(){
			cin>>real>>imag;
		}
		double operator-(const Complex &c2) const{
			double x=real-c2.real;
			double y=imag-c2.imag;
			return sqrt(x*x+y*y);
		}
		
}; 
template < class T >
double dist(T a, T b){
	return abs(b-a);
}
int  main()
{
        int  a1,b1;
        double  a2,b2;
        Complex  a3,b3;
        int  type;
        cin>>type;
        if(type==1)
        {
                  cin>>a1>>b1;
                  cout<<dist(a1,b1)<<endl;
        }
        else  if(type==2)
      {
                cin>>a2>>b2;
                cout<<dist(a2,b2)<<endl;
      }
      else
      {
                  a3.input();
                  b3.input();
                  cout<<dist(a3,b3)<<endl;
      }
      return  0;
}
