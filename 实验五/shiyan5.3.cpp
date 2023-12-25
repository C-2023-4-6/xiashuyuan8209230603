#include<iostream>
using namespace std;
class Reccol {
private:
	double length;
	double width;
	double height;

public:
	void tiji() {
		double v;
		v = length * width * height;
		cout << "体积为：" << v << endl;
	}
	void V() {
		
		double v;
		cout << "第一个Reccol的length：" << "第一个Reccol的width：" << "第一个Reccol的height：" << endl;
		cin >> length >> width >> height;
		tiji();
		cout << "第二个Reccol的length：" << "第二个Reccol的width：" << "第一个Reccol的height：" << endl;
		cin >> length >> width >> height;
		tiji();
		cout << "第三个Reccol的length：" << "第三个Reccol的width：" << "第三个Reccol的height：" << endl;
		cin >> length >> width >> height;
		tiji();
		
	}
};
int main() {
	Reccol threeReccol;
	threeReccol.V();
	

}