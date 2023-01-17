#include <iostream>
#include <string>
#include <algorithm>
#include "student.h"
using namespace std;

//void Student::Set(){
//	cin>>name>>chinese>>math>>english;
//	all=chinese+math+english;
//}
bool cmp(const Student &g1,const Student &g2){
	if(g1.all>g2.all) 
		return true;
	else if(g1.all==g2.all&&g1.chinese>g2.chinese) 
		return true;
	else if(g1.all==g2.all&&g1.chinese==g2.chinese&&g1.math>g2.math) 
		return true;
	else if(g1.all==g2.all&&g1.chinese==g2.chinese&&g1.math==g2.math&&g1.name<g2.name) return true;
	else return false;
}
//void Student::Display(){
//	cout<<name<<" "<<all<<endl; 
//}
int main(){
	int N,k;
	cin>>N;
	Student a[N];
	for(int i=0;i<N;i++){
		//a[i].Set();
		cin>>a[i].name>>a[i].chinese>>a[i].math>>a[i].english;
		a[i].all=a[i].chinese+a[i].math+a[i].english;
	}
	sort(a,a+N,cmp);
	cin>>k;
	cout<<a[k-1].name<<" "<<a[k-1].all<<endl; 
	return 0;
}
