#include  <iostream>
using  namespace  std;
class  CClassA
{public:
	CClassA()
	{cout<<"构造A"<<endl;}
};
class  CClassB:virtual  public  CClassA
{public:
	CClassB()
	{cout<<"构造B"<<endl;}
};

class  CClassC:public  CClassA
{public:
	CClassC()
	{cout<<"构造C"<<endl;}
};

class  CClassD:public  CClassB,
virtual  public  CClassC
{public:
	CClassD()
	{cout<<"构造D"<<endl;}
};
int  main()
{   CClassD  dd;
	return  0;
}
/*
  
 */
