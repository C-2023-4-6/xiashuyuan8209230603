#define _CRT_SECURE_NO_WARNINGS
//student.h                (这是头文件，在此文件中进行类的声明)
class Student              //类声明
{
public:      
	void set_value(const char[], const char[], char);//公用成员函数原型声明
	void display();
	void set_value();
private:
	char num[20];
	char name[20];
	char sex;
};
