#include <bits/stdc++.h>
using namespace std;
class Cscore
	{
	public:
		int chinese;
		int math;
		int english;
		
		Cscore(int yuwen=0,int shuxue=0,int yingyu=0)
		{
			chinese=yuwen;
			math=shuxue;
			english=yingyu;
		}
		
	};
class Cstudent
{
	public:
		string name;
		string id;
		string xinbie;
		Cscore score;
		
		Cstudent(string xingming="",string xuehao="",string sex="",int yuwen=0,int shuxue=0,int yingyu=0){};
				void InPut(string xingming,string xuehao,string sex,int yuwen,int shuxue,int yingyu)
				{
					Cscore(yuwen,shuxue,yingyu);
							name=xingming;
							id=xuehao;
							xinbie=sex;
				}
		void OutPut()
		{
			cout<<"姓名是"<<name<<"学号是"<<id<<"性别是"<<xinbie<<"语文"<<score.chinese<<"数学"<<score.math<<"英语"<<score.english<<endl;
		}
		void getAverage()
		{
			cout<<"平均值是"<<(score.chinese+score.math+score.english)/3<<endl;
		}
	
};

int main()
{
	Cstudent a[2];
	cout<<"**************"<<endl;
	cout<<"学生成绩管理系统"<<endl;
	cout<<"**************"<<endl;
	cout<<"请选择要操作的命令号"<<endl;
	cout<<"1--从键盘输入信息"<<endl;
	cout<<"2--显示数据"<<endl;
	cout<<"3--输出平均值"<<endl;
	cout<<"4--退出"<<endl;
	cout<<"**************"<<endl;
	int choice;
	cin>>choice;
	switch(choice)
	{
	case 1:
		for(int i=0; i<2; i++)
		{
			string name;
			string xuehao;
			string sex;
			int yuwen;
			int shuxue;
			int yingyue;
			cout<<"请输入名字，学号，和性别"<<endl;
			cin>>name>>xuehao>>sex;
			cout<<"请输入成绩语文，数学，英语"<<endl;
			cin>>yuwen>>shuxue>>yingyue;
			a[i].InPut(name,xuehao,sex,yuwen, shuxue, yingyue);
		};
		break;
	case 2:
		for(int k=0;k<2;k++)
		{
			a[k].OutPut();
		};
		break;
	case 3:
		for(int k=0;k<2;k++)
		{
			a[k].getAverage();
		};break;
		case 4:return 0;
	}
	return 0;
}
