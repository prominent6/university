//以输出一批捐款人来到前后的捐款总金额，以及本批次捐款人中捐款最高者的姓名，
//题目保证捐款人数不少于1人
#include <iostream>
#include <string>
using namespace std;

class Donator{
    private:
        string name;
        float money; //单位：元        
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
//读取n个捐款人的姓名和捐款额 
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
    cin>>n; ////输入本批次将参与的捐款人数
    cin>>Donator::totalMoney; //输入目前已有的捐款总额 
    Donator::printTotal();
    Donator d[n];
    read(d,n);
    Donator::printTotal();
    cout<<getMaxName(d,n)<<endl;//输出本批次中捐款最高者姓名 
    return 0;     
} 

