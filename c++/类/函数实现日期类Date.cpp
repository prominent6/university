//����������Date��Ҫ��
//��1�������������ڣ�
//��2�����ڼ�һ�������
//��3����������������ʽΪ��XXXX-XX-XX����
//��4����д��������������������Ӧ���ܡ�
//#include <iostream>
//using namespace std;
//int days[2][13]={{0,31,28,31,30,31,30,31,31,30,31,30,31},{0,31,29,31,30,31,30,31,31,30,31,30,31}}; 
//class Date
//{
//	public:
//		//��������
//		Date()
//		{
//	        cout<<"Input  Date:";
//        	cin>>y>>m>>d;		
//		}
//		//�Ƿ������� 
//		int  beLeapYear()
//    	{
//        	return ((y%4==0&&y%100!=0)||(y%400==0));
//    	}
//    	//���ڼ�һ�����
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

//���ھ���n���ľ�������
#include <iostream>
using namespace std;
int days[2][13]={{0,31,28,31,30,31,30,31,31,30,31,30,31}
,{0,31,29,31,30,31,30,31,31,30,31,30,31}}; 
class Date
{
	public:
		//���������պ�һ��������n
		Date()
		{
        	cin>>y>>m>>d>>n;		
		}
		//�ж������������Ƿ������λ��
		int isOverYear()
    	{
        	return (y>9999);
    	}
		//�Ƿ������� 
		int beLeapYear()
    	{
        	return ((y%4==0&&y%100!=0)||(y%400==0));
    	}
    	//���ڼ�n�����
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

