#define _CRT_SECURE_NO_WARNINGS
//student.cpp                     在此文件中进行函数
#include <iostream>
#include"student.h" 
#include<string.h>
using namespace std;//不要漏写此行，否则编译通不过
void Student::display()         //在类外定义display类函数
{
    cout << "num:" << num << endl;
    cout << "name:" << name << endl;
    cout << "sex:" << sex << endl;
    
}
void  Student::set_value(const char num[],const char name[],char sex)
{
    strcpy(this->num, num);
    strcpy(this->name, name);
    this->sex = sex;

}
