#include<iostream>
using namespace std;
//���캯��ʵ��1
//class CRect{
//	public:
//		CRect(int newL,int newW);   //
//		int showArea(); //���㲢��ʾ��� 
//	private:
//	    int length,width; 
//};
//CRect::CRect(int newL,int newW):length(newL),width(newW){   //
//}
//int CRect::showArea(){
//	return length*width;
//}
//int main(){
//	CRect myRect(3,3); //�����в����Ĺ��캯��
//	cout<<myRect.showArea()<<endl;
//	return 0; 
//}

//���캯��ʵ��2
class CRect{
	public:
		int showArea(); 
		CRect():length(2),width(2){
		}
		//��
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
	CRect myRect;  //�����޲����Ĺ��캯��
	cout<<myRect.showArea()<<endl;
	return 0; 
}
