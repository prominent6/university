#include  <iostream>
using  namespace  std;
class A{
public:
	A(){cout<<"A's cons."<<endl;}
	virtual ~A(){cout<<"A's des."<<endl;}
};
class  B  :  public  A  {
public:
	B()  {  cout  <<  "B's  cons."  <<  endl;  }
	~B()  {  cout  <<  "B's  des."  <<  endl;  }
};
class  C  :  public  B  {
public:
	C()  {  cout  <<  "C's  cons."  <<  endl;  }
	~C()  {  cout  <<  "C's  des."  <<  endl;  }
	void  f()  {  cout  <<  "C's  f()."  <<  endl;  }
};
int  main()
{
	A*  a  =  new  C;
	delete  a;
	return  0;
}
/*
  A's cons.
  B's  cons.
  C's  cons.
  C's  des.
  B's  des.
  A's des.
 */
