#include "Student.cpp"
#include <iostream>
#include <cstring>
using namespace std;

class Student
{
public:
    void input();
    void output();
    string getName();
    int getScore1();
    int getScore2();
    int getScore3();
    int getTotal();
private:
    string name;
    int score1,score2,score3;
    int total;
};

void Student::input()
{
    cin>>name>>score1>>score2>>score3;
    total = score1+score2+score3;
}
void Student::output()
{
    cout<<name<<" "<<total<<endl;
}
string Student::getName()
{
    return name;
}
int Student::getTotal()
{
    return total;
}
int Student::getScore1()
{
    return score1;
}
int Student::getScore2()
{
    return score2;
}
int Student::getScore3()
{
    return score3;
}

bool greate(Student& s1,Student& s2)
{
    if(s1.getTotal()!=s2.getTotal())
    {
        return s1.getTotal()>s1.getTotal();
    }
    if(s1.getScore1()!=s2.getScore1())
    {
        return s1.getScore1()>s2.getScore1();
    }
    if(s1.getScore2()!=s2.getScore2())
    {
        return s1.getScore2()>s2.getScore2();
    }
    if(s1.getScore3()!=s2.getScore3())
    {
        return s1.getScore3()>s2.getScore3();
    }
    if(s1.getName()!=s2.getName())
    {
        return s1.getName()<s2.getName();
    }
    return false;
}

void sort(Student s[],int n)
{
    int i,j;
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(greate(s[j],s[i]))
            {
                Student t;
                t=s[j];
                s[j]=s[i];
                s[i]=t;
            }
        }
    }
}

int main() {
    const int N=1024;
    Student stu[N];
    int n,i;
    cin>>n;
    for(i=0;i<n;i++)
        stu[i].input();
    sort(stu,n);
    cin>>i;
    stu[i-1].output();    
    return 0;
}
