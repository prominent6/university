//要求输出各省的总销量及各省销量最高的城市名称及其销量
#include <iostream>
using namespace std;
class Sale {
    private:
        string prov,city;//省份，城市
        double volume; //销量
    public:
        void setProv(string p);        
        void setCity(string c);
        void setVolume(double v);
        string getProv();
        string getCity();
        double getVolume();
};
int main(){
    int n;//城市个数
    cin>>n;
    Sale s[n];
    string prov;
    string city;
    double volume;
    for(int i=0; i<n; i++) {
        cin>>prov>>city>>volume;
        s[i].setProv(prov); 
        s[i].setCity(city); 
        s[i].setVolume(volume); 
	}
	double max=s[0].getVolume(),ans=s[0].getVolume();
    int index=0;
	for(int i=1;i<n;i++){
		if(s[i].getProv()==s[i-1].getProv()){
			if(s[i].getVolume()>max){
				max=s[i].getVolume();
				index=i;	
			}
			ans+=s[i].getVolume();
		}else{
    		cout<<s[index].getProv()
    		<<" sum="<<ans
    		<<" max="<<s[index].getCity()
    		<<","<<s[index].getVolume()
    		<<endl;
    		max=s[i].getVolume();
    		index=i;
    		ans=s[i].getVolume();
		}
	}  
   	cout<<s[index].getProv()
    <<" sum="<<ans
    <<" max="<<s[index].getCity()
    <<","<<s[index].getVolume()
   	<<endl;	  
}
void Sale::setProv(string p){
	prov=p;
}
void Sale::setCity(string c){
	city=c;
}
void Sale::setVolume(double v){
	volume=v;
}
string Sale::getProv(){
	return prov;
}
string Sale::getCity(){
	return city;
}    
double Sale::getVolume(){
	return volume;
}
