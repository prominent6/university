#include <iostream>
#include <Windows.h>

using namespace std;

int main(void) {
	//char name;
	//int pwd;    //设置变量

	//std::cout << "请输入账号:";
	//std::cin >> name;      //让用户输入账号，并保存到name中

	//std::cout << "请输入密码";
	//std::cin >> pwd;
    
	




	//double value = 12.3456789;  // double 有效数字为16位
	//cout << value << endl;   // cout默认有效数字为6位，输出为12.3457

	////可以修改输出精度,如四位有效数字
	//cout.precision(4); 
	//cout << value << endl;  // 12.35

	////可以将精度改为确定小数点后位数
 //   	cout.flags(cout.fixed);    // 定点法
	//cout << value << endl;  //12.3457

	////取消定点法
	//cout.unsetf(cout.fixed);
	//cout << value << endl; //12.35





	/*char girlType;
	int salary;
	float height;

	cout << "请输入你的理想类型" << endl;
	cout << "A.贤惠型" << endl;
	cout << "B.泼辣型" << endl;
	cout << "C.文艺型" << endl; 
	cout << "D.运动型" << endl;
	cin >> girlType;

	cout << "请输入你的年收入（元）" << endl;
	cin >> salary;

	cout << "请输入你的身高（米）" << endl;
	cin >> height;

	cout << "你的理想型是：" << girlType << endl;
	cout << "你的年收入是：" << salary << "元" << endl;
	cout << "你的身高是：" << height << "米" << endl;*/




	int a = 0;
	int b = 0;
	int c = 0;

	cout << "请输入a" << endl;
	cin >> a;

	if (cin.fail()) {
		cout << "输入失败，应该输入一个整数" << endl;   //提示应该输入整数
		cin.clear();  //清楚cin的错误标志
		cin.sync();  // 清空输入缓冲区
	}

	cout << "请输入b" << endl;
	cin >> b;

	if (cin.fail()) {
		cout << "输入失败，应该输入一个整数" << endl;  //提示应该输入整数
		cin.clear();  //清楚cin的错误标志
		cin.sync();  // 清空输入缓冲区
	}
	
	cout << "请输入c" << endl;
	cin >> c;

	if (cin.fail()) {
		cout << "输入失败，应该输入一个整数" << endl;  //提示应该输入整数
		cin.clear();  //清楚cin的错误标志
		cin.sync();  // 清空输入缓冲区
	}

	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
	cout << "c=" << c << endl;

	system("pause");
	return 0;
}