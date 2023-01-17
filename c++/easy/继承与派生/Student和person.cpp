#include <iostream>
#include <string>
using namespace std;
class Person {
    protected:
        string id;
        string name;
    public:
        Person(string id, string name) {
            this->id = id;
            this->name = name;
        }
};
class Student : public Person {
    private:
        string major;
        int score;
    public:
        Student(string id, string name, string major, int score);
        friend ostream& operator <<(ostream &out, Student &s);
};
Student::Student(string id, string name, string major, int score):Person(id,name){
            this->major=major;
            this->score=score;
    }
ostream& operator <<(ostream &out, Student &s) {
    out << "ID��" << s.id
      << " ������" << s.name
      << " רҵ��" << s.major
      << " �ɼ���" << s.score;
    return out;
}
int main() {
    Student a("ypc202101", "��ݷ��", "������Ϣרҵ", 95);
    cout << a << endl;
    return 0;
}

