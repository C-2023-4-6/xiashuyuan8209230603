#include<iostream>
#include"mytemperature.h"
using namespace std;
int main() {
	double fah=0, cel=0;
	cout << "你输入的摄氏温度为：";
	cin >> cel;
	cout << "华氏温度fah=" << celsius_to_fah(cel) << endl;
	cout << "你输入的华氏温度为：";
	cin >> fah;
	cout<<"摄氏温度cel="<< fahrenheit_to_cels(fah) <<endl;

	return 0;



}