#include<iostream>
#include <string.h>
using namespace std;
int mul[17]={7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
int Y[11]={1,0,10,9,8,7,6,5,4,3,2};
class ID{
	private:
		string id;
	public:
		ID(string i):id(i){
		};
		void print(){
			cout<<id<<endl;
		}
		void convert(){
			string temp;
			int s=0,y;
			for(int i=0;i<6;i++){
				temp+=id[i];
				if(i==5) temp+='1';
			}
			temp+='9';
			for(int i=6;i<15;i++){
				temp+=id[i];
			}
			for(int i=0;i<17;i++){
				s+=(temp[i]-'0')*mul[i];
			} 
			y=s%11;
			if(Y[y]==10) temp+='X';
			else temp+=to_string(Y[y]);
			id=temp;
		} 
}; 

int main()
{
    char oldID[15];
    cin>>oldID; 
    ID myID(oldID);
    cout<<"ID No.£º";
    myID.print();
    myID.convert();
    cout<<"New ID NO.£º";
    myID.print();
    return 0;
}


