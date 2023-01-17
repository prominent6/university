//上课时间查询
#include <iostream>
#include <map>
#include <string>
using namespace std;

int main(){
	multimap<string,string>courses;
	typedef multimap<string,string>::iterator CourseIter;
	
	//将课程上课时间插入courses映射中
	courses.insert(make_pair("c++","2-6"));
	courses.insert(make_pair("COMPILER","3-1"));
	courses.insert(make_pair("COMPILER","5-2"));
	courses.insert(make_pair("os","1-2")); 
	courses.insert(make_pair("os","4-1")); 
	courses.insert(make_pair("os","5-5"));
	
	string name;
	int count;
	do{
		cin>>name;
		count=courses.count(name);  //count() 
		if(count==0) cout<<"not find"<<endl; 
	}while(count==0);
	
	cout<<count<<" lesson(s) per week: ";
	pair<CourseIter,CourseIter>range=courses.equal_range(name); //equal_range() 
	for(CourseIter iter=range.first;iter!=range.second;++iter){
		cout<<iter->second<<" ";
	}
	cout<<endl;
	return 0;
} 
