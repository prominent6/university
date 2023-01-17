#include <iostream>
using namespace std;
class Client{
	protected:
		static char ServerName; //保存其服务器名称
		static int ClientNum; //记录已定义的客户机数量
	public:
		Client(){
			ClientNum+=1;
		}
		void static changeServerName(char newName){
			ServerName=newName;
		}
		void static show(){
			cout<<"server name:"<<ServerName<<endl;
			cout<<"num of clients:"<<ClientNum<<endl;
		}
};
//静态数据成员和静态函数的初始化
int  Client::ClientNum=0;
char Client::ServerName='A';
int main(){
    Client::show();
    Client c1;
    Client::show();
    Client::changeServerName('B');
    Client::show();
}
