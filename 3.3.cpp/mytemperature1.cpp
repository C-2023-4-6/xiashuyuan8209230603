#include<iostream>
#include"mytemperature.h"
using namespace std;
int main() {
	double fah=0, cel=0;
	cout << "������������¶�Ϊ��";
	cin >> cel;
	cout << "�����¶�fah=" << celsius_to_fah(cel) << endl;
	cout << "������Ļ����¶�Ϊ��";
	cin >> fah;
	cout<<"�����¶�cel="<< fahrenheit_to_cels(fah) <<endl;

	return 0;



}