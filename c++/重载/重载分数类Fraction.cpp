//ʵ��һ��������Fraction,�ܶ�д��1/2�����ӵķ�����
//��һ��Ӧ�϶��Ƿֱ������ӷ�ĸ 
//�ַ������� 
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
class Fraction{
	private:
		string f;
	public:
		friend istream&operator>>(istream&is,Fraction &fr){
			is>>fr.f;
			return is;
		}
		Fraction operator+(const Fraction &fr2){
			Fraction fr;
			int fenz1=f[0]-'0';
			int fenz2=fr2.f[0]-'0';
			int fenm1=f[2]-'0';
			int fenm2=fr2.f[2]-'0';
			int fenz=fenz1*fenm2+fenz2*fenm1;
			int fenm=fenm1*fenm2;
			//������ӷ�ĸ 
			for(int i=2;i<min(fenz,fenm);i++){
				if(!fenz%i&&!fenm%i){
					fenz/=i;
					fenm/=i;
					i--;
				}
			}
			fr.f=to_string(fenz)+"/"+to_string(fenm);
			//cout<<fr.f<<endl;
			return fr;
		}
		friend ostream&operator<<(ostream&os,Fraction &fr){
			os<<fr.f;
			return os;
		}
		
};

int main(void)
{
    Fraction f1;
    Fraction f2;
    cin >> f1 >> f2;
    Fraction f3=f1+f2;
    cout << f1+f2 << endl;
//    cout << (double)(f1+f2) << endl;
//    cout << f1-f2 << endl;
//    cout << f1*f2 << endl;
//    cout << f2/f1 << endl;
//    double d;
//    cin >> d;
//    Fraction f((long long)(d*1e16), 1e16);
//    cout << f << endl;
//    f=0.5;
//    cout << f << endl;
//    Fraction*p = &f1;
//    f1=*p;
//    cout << f1 << endl;
//    cin >> f1;
//    f1 = f1*Fraction(2.0);
    cout << f1 << endl;
}

