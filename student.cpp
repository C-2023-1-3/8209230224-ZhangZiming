#include<iostream>
#include"student.h"
using namespace std;
void Student::display()         //在类外定义display类函数
{
    cout << "num:" << num << endl;
    cout << "name:" << name << endl;
    cout << "sex:" << sex << endl;
}
void Student::set_value(int a, const char b[20], char c)
{
    this->num = a;
    this->sex = c;
    for (int i = 0; i < 20; i++)
    {
        this->name[i] = b[i];
    }



}