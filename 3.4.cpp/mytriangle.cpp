#include<iostream>
using namespace std;
bool is_valid(double side1, double side2, double side3) {
	if (side1 + side2 > side3 && side1 + side3 > side2 && side2 + side3 > side1)
		cout << "������������κϷ�" << endl;
	else
		cout << side1 << side2 << side3 << endl;
		
	return 0;
}

double _area(double side1, double side2, double side3) {
	double s = (side1 + side2 + side3) / 2;
	double area = sqrt(s * (s - side1) * (s - side2) * (s - side3));
	cout << "������������ε����area=" << area << endl;
		return 0;
}