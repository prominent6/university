#include <iostream>
using namespace std;
class Client{
	protected:
		static char ServerName; //���������������
		static int ClientNum; //��¼�Ѷ���Ŀͻ�������
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
//��̬���ݳ�Ա�;�̬�����ĳ�ʼ��
int  Client::ClientNum=0;
char Client::ServerName='A';
int main(){
    Client::show();
    Client c1;
    Client::show();
    Client::changeServerName('B');
    Client::show();
}
