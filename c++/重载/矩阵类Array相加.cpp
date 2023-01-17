#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;
class Array{
	private:
		vector<int> vec;
	public:
		friend istream&operator>>(istream &is,Array &a){
			int m;
			for(int i=0;i<6;i++){
				is>>m;
				a.vec.push_back(m);
			}
			return is;
		}
		friend ostream&operator<<(ostream &os,Array &a){
			for(int i=0;i<3;i++){
				cout<<setw(3)<<a.vec[i];
			}
			cout<<endl;
			for(int i=3;i<6;i++){
				cout<<setw(3)<<a.vec[i];
			}
			cout<<endl;
			return os;
		}
		Array operator+(Array &a){
			Array b;
			for(int i=0;i<6;i++){
				b.vec.push_back(vec[i]+a.vec[i]); 
			}
			return b;
		}
};
int main()
{
    Array arr1,arr2,arr3;
    cin>>arr1;
    cin>>arr2; 
    cout<<arr1<<endl;
    cout<<arr2<<endl;
    arr3=arr1+arr2;
    cout<<arr3;
    return 0;    
}

