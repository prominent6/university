#include<iostream>
using namespace std;
//构造函数实现1
//class CRect{
//	public:
//		CRect(int newL,int newW);   //
//		int showArea(); //计算并显示面积 
//	private:
//	    int length,width; 
//};
//CRect::CRect(int newL,int newW):length(newL),width(newW){   //
//}
//int CRect::showArea(){
//	return length*width;
//}
//int main(){
//	CRect myRect(3,3); //调用有参数的构造函数
//	cout<<myRect.showArea()<<endl;
//	return 0; 
//}

//构造函数实现2
class CRect{
	public:
		int showArea(); 
		CRect():length(2),width(2){
		}
		//或
//		 CRect(int newL=2,int newW=2)
//		 :length(newL),width(newW){
//		}
	private:
	    int length,width; 
};
int CRect::showArea(){
	return length*width;
}
int main(){
	CRect myRect;  //调用无参数的构造函数
	cout<<myRect.showArea()<<endl;
	return 0; 
}
