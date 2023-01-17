/*
  构造中的num:3
  构造中的num:3
  析构中的num:5
  析构中的num:5
 */
#include <iostream>
using namespace std;
class T
{
	int num; 
public:
	T( int num=3); 
	void inc( ) ;
	~T( );
}; 
T::T(int num1) 
{
	num=num1;
	cout << "构造中的num:"<<num  << endl; 
} 
void T::inc() 
{
	num++;
}
T::~T( )
{
	num++;
	cout <<"析构中的num:"<<num  << endl;
} 
int main( ) 
{
	T array1,array2; 
	array1.inc();
	array2.inc();
	return 0;
}
