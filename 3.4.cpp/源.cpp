#include<iostream>
#include"mytriangle.h"
using namespace std;
int main() {
	double a, b, c ,area=0;
	cout << "�������a=";
	cin >> a;
	cout << "�������b=";
	cin >> b;
	cout<<"�������c=";
	cin >> c;

	if( is_valid(a,b,c))
	cout << "������������κϷ�" << endl;
	else
		cout << a<< b <<c << endl;


	if( _area(a,b,c))
		 cout << "������������ε����area=" << area << endl;

}
