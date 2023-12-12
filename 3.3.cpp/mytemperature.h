#include<iostream>
using namespace std;
double celsius_to_fah(double cel)         //摄氏变成华氏温度
{
	double f;
	f = 9 * cel / 5 + 32;
	return f;
}
double fahrenheit_to_cels(double fah)        //华氏温度变成摄氏温度
{
	double c;
	c = 5 * (fah - 32) / 9;
	return c;
}
