//�����һ�����������ǰ��ľ���ܽ��Լ������ξ�����о������ߵ�������
//��Ŀ��֤�������������1��
#include <iostream>
#include <string>
using namespace std;

class Donator{
    private:
        string name;
        float money; //��λ��Ԫ        
    public:
        void setName(string _name);
        void setMoney(float _money);
        string getName(){return name;}
        float getMoney(){return money;}
        static double totalMoney;
        static void printTotal(){
        	cout<<"total:"<<totalMoney<<endl;
		}
};
double Donator::totalMoney =0;
void Donator::setName(string _name){
	name=_name;
}
void Donator::setMoney(float _money){
	money=_money;
	totalMoney+=money;
}
string getMaxName(Donator dt[],int n){
	int flag=0;
	int maxn=dt[0].getMoney();
	for(int i=1;i<n;i++){
		if(dt[i].getMoney()>maxn){
			maxn=dt[i].getMoney();
			flag=i;
		}
	}
	return dt[flag].getName();
} 
//��ȡn������˵������;��� 
void read(Donator dt[],int n){
    string name;
    float money;
    for(int i=0;i<n;i++){
        cin>>name>>money;
        dt[i].setName(name);
        dt[i].setMoney(money);
    }
}
int main(){
    int n;
    cin>>n; ////���뱾���ν�����ľ������
    cin>>Donator::totalMoney; //����Ŀǰ���еľ���ܶ� 
    Donator::printTotal();
    Donator d[n];
    read(d,n);
    Donator::printTotal();
    cout<<getMaxName(d,n)<<endl;//����������о����������� 
    return 0;     
} 

