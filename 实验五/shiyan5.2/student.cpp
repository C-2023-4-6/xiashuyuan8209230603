#define _CRT_SECURE_NO_WARNINGS
//student.cpp                     �ڴ��ļ��н��к���
#include <iostream>
#include"student.h" 
#include<string.h>
using namespace std;//��Ҫ©д���У��������ͨ����
void Student::display()         //�����ⶨ��display�ຯ��
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
