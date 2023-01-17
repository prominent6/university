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
	  
	int num=0;
		
	cout << "请输入编号（1-7）" << endl;
	cin >>num;
	
	switch(num) {
	case 1:	// 定点数据
		cout << "星期一：炒四季豆" << endl;
		break;
	case 2:
		cout << "星期二：鱼香肉丝" << endl;
		break;
	case 3:
		cout << "星期三：酸菜鱼" << endl;
		break;	
	case 4:
		cout << "星期四：酸萝卜老鸭汤" << endl;
		break;
	case 5:
		cout << "星期五；姜爆鸭子" << endl;	
		break;
	case 6:
	case 7: 
		cout << "周末：休息" << endl;	
	    break;
	default:    
		cout << "输入无效，请输入1-7" << endl;
    }  

	system("pause");
	return 0;	
}
