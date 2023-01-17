//
//  Student.cpp
//  test
//
//  Created by panlin on 2022/10/4.
//

#include "Student.h"
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
