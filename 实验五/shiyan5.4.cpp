#include<iostream>
using namespace std;
class Student
{
public:
	Student() {} //ע�����һ���޲εĹ��캯������Ȼ�ᱨ��
	Student(string i, double s) :id(i), score(s) {}
	string id;
	double score;
};
void max(Student* p)
{
	Student* t, * s;
	double max;
	for (t = p, s = t, max = t->score; t < (p + 5); t++)
	{
		if (t->score > max)
		{
			max = t->score;
			s = t;
		}
	}

	cout << "�ɼ������idΪ:" << s->id << " " << max << "��" << endl;
}
int main()
{
	Student s[5];
	for (int i = 0; i < 5; i++)
	{
		cin >> s[i].id >> s[i].score;
	}
	max(s);
	return 0;
}