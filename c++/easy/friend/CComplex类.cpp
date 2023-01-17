#include <iostream>
using namespace std;
class CComplex{
	private:
		double real;
		double image;
		friend CComplex add(CComplex a,CComplex b){
			CComplex c;
			c.real=a.real+b.real;
			c.image=a.image+b.image; 
			return c;
		}
		friend CComplex sub(CComplex a,CComplex b){
			CComplex c;
			c.real=a.real-b.real;
			c.image=a.image-b.image; 
			return c;
		}
	public:
		CComplex(){
			real = 0.0;
        	image = 0.0;
		};
		CComplex(double r,double i):real(r),image(i){
		};
		void display(){
			string i="i";
			if (image >= 0)
        {
            cout << real << "+" << image << i << endl;
        }
			else cout<<real<<image<<i<<endl; 
		}
};
int main()
{
  double r1,r2,i1,i2;
    cin>>r1>>i1;
    cin>>r2>>i2;
    CComplex c1(r1,i1),c2(r2,i2),c3,c4;
    c1.display();
    c2.display();
    c3=add(c1,c2);
    c3.display();
    c4=sub(c1,c2);
    c4.display();
}



