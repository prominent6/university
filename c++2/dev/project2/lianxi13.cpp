#include <iostream>
#include <Windows.h>
#include <string> 

using namespace std;

int main(void){
	/*星期一：炒四季豆
	 星期二：鱼香肉丝
	 星期三：酸菜鱼
	 星期四：酸萝卜老鸭汤
	 星期五；姜爆鸭子
	 星期六；休息
	 星期天：休息
	                  */
	  
	int num;
	
	cout << "请输入编号（1-7）" << endl;
	cin >>num;
	
	if(num==1){
		cout << "星期一：炒四季豆" << endl;
	} else if(num==2){
		cout << "星期二：鱼香肉丝" << endl;
	} else if(num==3){
		cout << "星期三：酸菜鱼" << endl;	
	} else if(num==4){
		cout << "星期四：酸萝卜老鸭汤" << endl;
	} else if(num==5){
		cout << "星期五；姜爆鸭子" << endl;	
	} else if(num==6){
		cout << "星期六；休息" << endl;	
	} else if(num==7){
		cout << "星期天：休息" << endl;	
	} else {
		cout << "输入无效，请输入1-7" << endl;
	}
	
	system("pause");
	return 0;
}
