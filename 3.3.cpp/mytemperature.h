#include<iostream>
using namespace std;
double celsius_to_fah(double cel)         //���ϱ�ɻ����¶�
{
	double f;
	f = 9 * cel / 5 + 32;
	return f;
}
double fahrenheit_to_cels(double fah)        //�����¶ȱ�������¶�
{
	double c;
	c = 5 * (fah - 32) / 9;
	return c;
}
