#include <iostream>
#include <cstring>
#include <iomanip>
using namespace std;
const int N=5; 
class CPerson
{
	char name[10];    
	char num[10];
public:
	void get_data(const char* na,const char* nu)
	{
		strcpy(name,na);
		strcpy(num,nu);}
	void put_data(CPerson pn[N]);
};
void CPerson::put_data(CPerson pn[N])
{    
	int i;
	for(i=0;i<N;i++)
	{  
		cout.width(5); 
		cout<<pn[i].name;
		cout.width(5);
		cout<<pn[i].num<<endl;
	}
}
int main()
{
	char *na[5]={"li","zh","wu","xie","liu"};
	char *nu[5]={"01","02","03","04","05"};
	CPerson obj[5];    //对象数组
	for(int i=0;i<5;i++)    
		obj[i].get_data(na[i],nu[i]);
	CPerson *pt=obj;   
	pt->put_data(pt);
	return 0;
}

