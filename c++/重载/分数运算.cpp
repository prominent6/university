#include  <iostream>
#include  <cmath>
using  namespace  std;
class  CFraction
{
private:
        int  nume;    //  分子
        int  deno;    //  分母
public:
        CFraction(int  nu=0,int  de=1):nume(nu),deno(de)  {}
        void  simplify();

        //输入输出的重载
        friend  istream  &operator>>(istream  &in,CFraction  &x);
        friend  ostream  &operator<<(ostream  &out,CFraction  x);

        friend  CFraction  operator+(const  CFraction  &c1,const  CFraction  &c2);    //两个分数相加，结果要化简
        friend  CFraction  operator-(const  CFraction  &c1,const  CFraction  &c2);    //两个分数相减，结果要化简
        friend  CFraction  operator*(const  CFraction  &c1,const  CFraction  &c2);    //两个分数相乘，结果要化简
        friend  CFraction  operator/(const  CFraction  &c1,const  CFraction  &c2);    //两个分数相除，结果要化简

};
//void CFraction::simplify(){
//	//化简分子分母 
//	for(int i=2;i<min(nume,deno)/2;i++){
//		if(!(nume%i)&&!(deno%i)){
//			nume=nume/i;
//			deno=deno/i;
//			i--;
//		}
//	}
//}

istream  &operator>>(istream  &in,CFraction  &x){
	char c;
	in>>x.nume;
	in>>c;
	in>>x.deno;
	return in;
}
ostream  &operator<<(ostream  &out,CFraction  x){
	if(x.deno==1)  out<<x.nume;
	else out<<x.nume<<"/"<<x.deno<<endl;
	return out;
}
int GetFactor(int num1, int num2) {
  int factor = 1;
  num1 = max(num1, -num1);
  num2 = max(num2, -num2);

  for (int i = 2; i <= min(num1, num2); ++i) {
    if (!(num1 % i) && !(num2 % i)) {
      factor = i;
      break;
    }
  }
  return factor;
}

void CFraction::simplify() {
  while (1) {
    int factor = GetFactor(nume, deno);
    if (factor == 1) break;
    nume /= factor;
    deno /= factor;
  }
}

CFraction  operator+(const  CFraction  &c1,const  CFraction  &c2){
	int fenz,fenm;
	fenm=c1.deno*c2.deno;
	fenz=c1.nume*c2.deno+c2.nume*c1.deno;
	CFraction cfr(fenz,fenm);
	cfr.simplify();
	return cfr;
}
CFraction  operator-(const  CFraction  &c1,const  CFraction  &c2){
	int fenz,fenm;
	fenm=c1.deno*c2.deno;
	fenz=c1.nume*c2.deno-c2.nume*c1.deno;
	CFraction cfr(fenz,fenm);
	cfr.simplify();
	return cfr;
}
CFraction  operator*(const  CFraction  &c1,const  CFraction  &c2){
	int fenz,fenm;
	fenm=c1.deno*c2.deno;
	fenz=c1.nume*c2.nume;
	CFraction cfr(fenz,fenm);
	cfr.simplify();
	return cfr;
}
CFraction  operator/(const  CFraction  &c1,const  CFraction  &c2){
	int fenz,fenm;
	fenm=c1.deno*c2.nume;
	fenz=c1.nume*c2.deno;
	CFraction cfr(fenz,fenm);
	cfr.simplify();
	return cfr;
}
int  main()
{
        CFraction  x,y,s;
        cout<<"Input x: ";
        cin>>x;
        cout<<"Input y: ";
        cin>>y;
        s=x+y;
        cout<<"x+y="<<s<<endl;
        s=x-y;
        cout<<"x-y="<<s<<endl;
        s=x*y;
        cout<<"x*y="<<s<<endl;
        s=x/y;
        cout<<"x/y="<<s<<endl;
        return  0;
}
