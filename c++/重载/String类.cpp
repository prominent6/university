#include<iostream>
#include<cstring>
using namespace std;
class String {
    private:
        char *s;
        int len;
    public:
        String(char*t = NULL) {
            if(t == NULL) {    
                s = new char('\0');
                len = 1;
            } else {
                s = new char[len = strlen(t) + 1];
                strcpy(s,t);
            }
        }
        ~String() {delete []s;}
        char& operator[](int i);
        String& operator=(const String& a) ;
        friend String operator+(const String& a,const String& b);    
        friend ostream& operator<<(ostream& out,const String& a);    
        friend istream& operator>>(istream& in,String& a);
};
int main() {
    String a,b,c;
    int x; 
    while(cin >> a >> b >> x) {
        getchar();
        c=a;
        cout << "testing =: " << c<<endl;
        c=a+b;
        cout << "testing +: " << c<<endl;
        cout << "testing []: " << c[x]<<endl;
    }
    return 0;
}
istream& operator>>(istream& in,String& a){
	in>>a.s;
	return in;
}
ostream& operator<<(ostream& out,const String& a){
	out<<a.s<<endl;
	return out;
}
char& operator[](int i){
	return s[i]; 
}
String& operator=(const String& a){
	this->len = strlen(a) + 1;
	strcpy(this->s,a);
	return *this;
}

String operator+(const String& a,const String& b){
	String ss;
	ss = new char[len = strlen(a)+strlen(b) + 1];
	strcpy(ss.s,(a.s+b.s));
	return  ss;
}

