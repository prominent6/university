#include <iostream> 
using namespace std;
class Complex{
	private:
		int a,b;
	public:
		Complex(int aa=0,int bb=0):a(aa),b(bb){
		};
		Complex(Complex &c){ 
			a=c.a;
			b=c.b; 
		}
		void Display(){
			if(b<0) cout<<a<<b<<"i"<<endl; 
			else cout<<a<<"+"<<b<<"i"<<endl; 
		}
		int geta(){
			return a;
		}
		int getb(){
			return b;
		}
		
};
Complex AddComplex(Complex &c1,Complex &c2){
		Complex c(c1.geta() +c2.geta(),c1.getb() +c2.getb());
		return c;
	}
int main(){
    int x,y;
    cin>>x>>y;
        Complex  c0(x,y);
        Complex  c1(c0);
        cout<<"c1 is: "; 
        c1.Display();
        cin>>x>>y; 
        Complex c2(x,y);
        cout<<"c2 is: "; 
        c2.Display();
        Complex c3;
        c3 = AddComplex(c1,c2); 
        cout<<"c3 is: "; 
        c3.Display();    
        return 0;
}
