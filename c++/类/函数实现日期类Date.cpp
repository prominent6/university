//定义日期类Date。要求：
//（1）可以设置日期；
//（2）日期加一天操作；
//（3）输出函数，输出格式为“XXXX-XX-XX”；
//（4）编写主函数，定义对象，完成相应功能。
//#include <iostream>
//using namespace std;
//int days[2][13]={{0,31,28,31,30,31,30,31,31,30,31,30,31},{0,31,29,31,30,31,30,31,31,30,31,30,31}}; 
//class Date
//{
//	public:
//		//设置日期
//		Date()
//		{
//	        cout<<"Input  Date:";
//        	cin>>y>>m>>d;		
//		}
//		//是否是闰年 
//		int  beLeapYear()
//    	{
//        	return ((y%4==0&&y%100!=0)||(y%400==0));
//    	}
//    	//日期加一天操作
//    	void addOneDay(){
//    		if(d==days[beLeapYear()][m])
//			{
//				if(m==12){
//					y++;
//					m=1;
//					d=1;
//				}else{
//					m++;
//					d=1;
//				}	
//			}else{
//				d++;
//			}
//		} 
//    	void  showDate()
//    	{
//        	cout<<y<<"-"<<m<<"-"<<d<<endl;
//        }
//    private:
//    	int y,m,d;
//};
//int main()
//{
//    Date d;
//    d.showDate();
//    d.addOneDay();
//    d.showDate();
//    return 0;
//}

//日期经过n天后的具体日期
#include <iostream>
using namespace std;
int days[2][13]={{0,31,28,31,30,31,30,31,31,30,31,30,31}
,{0,31,29,31,30,31,30,31,31,30,31,30,31}}; 
class Date
{
	public:
		//输入年月日和一个正整数n
		Date()
		{
        	cin>>y>>m>>d>>n;		
		}
		//判断推算出的年份是否大于四位数
		int isOverYear()
    	{
        	return (y>9999);
    	}
		//是否是闰年 
		int beLeapYear()
    	{
        	return ((y%4==0&&y%100!=0)||(y%400==0));
    	}
    	//日期加n天操作
    	void addDays(){
    		while(n>365){
    			if(beLeapYear()){
    				n-=366;
				}else{
					n-=365;
				}
				y++;
			}
			if(n==365&&!beLeapYear()){
				y++; 
				n=0;
			}
			d+=n;
			while(d>days[beLeapYear()][m]){
				d-=days[beLeapYear()][m];
				m++;
				if(m>12){
					y++;
					m=1;
				}
			}
			//if(y==2045) d--;
		} 
    	void showDate()
    	{
    		if(isOverYear()){
    			cout<<"out of limitation!";
			}else{
        		cout<<y<<"-"<<m<<"-"<<d<<endl;
       		}
        }
    private:
    	int y,m,d,n;
};
int main()
{
    Date s;
    s.addDays();
    s.showDate();
    return 0;
}

