//编写数学类，能求开平方，sin 绝对值，圆面积等操作
#include <iostream>
#include <cmath>
using namespace std;
class myMath{
	public:
        static double mysqrt(double  x);
        static double mysin(double  x);
        static double myfabs(double  x);
        static int myfabs(int  x);
        static double circleArea(double  x);
    private:
        const static double  PI;
};
const double myMath::PI=3.1415926;  //
double myMath::mysqrt(double x)
{  return  sqrt(x);}
double myMath::mysin(double  x){
	return sin(x);
};
int  myMath::myfabs(int  x)
{  return  fabs(x);}
double myMath::myfabs(double  x){
	return fabs(x);
}
double  myMath::circleArea(double  x)
{  return  PI*x*x;}
int  main()
{  double  x;
    cout<<"input  a  number:";
    cin>>x;
    cout<<"the  result  of  sqrt  is:"<<myMath::mysqrt(x)<<endl;
    cout<<"the  result  of  sin  is:"<<myMath::mysin(x)<<endl;
    cout<<"the  result  of  fabs  is:"<<myMath::myfabs((int)x)<<endl;
    cout<<"the  result  of  fabs  is:"<<myMath::myfabs(x)<<endl;
    cout<<"the  result  of  area  is:"<<myMath::circleArea(x)<<endl;
    return  0;
}
