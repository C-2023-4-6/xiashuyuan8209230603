#define _CRT_SECURE_NO_WARNINGS
//student.h                (����ͷ�ļ����ڴ��ļ��н����������)
class Student              //������
{
public:      
	void set_value(const char[], const char[], char);//���ó�Ա����ԭ������
	void display();
	void set_value();
private:
	char num[20];
	char name[20];
	char sex;
};
