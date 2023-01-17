//学校选拔篮球队员，每间宿舍最多有 4 个人。
//现给出宿舍列表，请找出每个宿舍最高的同学。
//定义一个学生类 Student，有身高 height，体重 weight 等。
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
class Student{
	public:
		int h,w;
		string name;
		string id;
};
int main(){
	int n;
	cin>>n;
	Student *s=new Student[n];
	for(int i=0;i<n;i++){
		cin>>s[i].id>>s[i].name>>s[i].h>>s[i].w;
	}
	//将宿舍号进行由小到大的排序 
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-1;j++){
			Student temp;
			if(s[j].id>s[j+1].id){
				temp=s[j];
				s[j]=s[j+1];
				s[j+1]=temp;
			}
		}
	}
//	for(int r=0;r<n;r++){
//		cout << setw(6)<<setfill('0')<<s[r].id<<" " << s[r].name<<" " << s[r].h<<" " << s[r].w << endl;
//	}
	//进行宿舍内个子由高到低排序
	for(int i=0,j=0,max=0;i<n;i=j){   //i=j妙！ 
		max=j;
		for(;s[i].id==s[j].id;j++){
			if(s[j].h>s[max].h){
				max=j;
			}
		}
		cout << setw(6)<<setfill('0')<<s[max].id<<" " << s[max].name<<" " << s[max].h<<" " << s[max].w << endl;	
	}
	return 0;
} 
