#include<iostream>
#include"mytriangle.h"
using namespace std;
int main() {
	double a, b, c ,area=0;
	cout << "你输入的a=";
	cin >> a;
	cout << "你输入的b=";
	cin >> b;
	cout<<"你输入的c=";
	cin >> c;

	if( is_valid(a,b,c))
	cout << "你输入的三角形合法" << endl;
	else
		cout << a<< b <<c << endl;


	if( _area(a,b,c))
		 cout << "你输入的三角形的面积area=" << area << endl;

}
