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
		cout << "���Ϊ��" << v << endl;
	}
	void V() {
		
		double v;
		cout << "��һ��Reccol��length��" << "��һ��Reccol��width��" << "��һ��Reccol��height��" << endl;
		cin >> length >> width >> height;
		tiji();
		cout << "�ڶ���Reccol��length��" << "�ڶ���Reccol��width��" << "��һ��Reccol��height��" << endl;
		cin >> length >> width >> height;
		tiji();
		cout << "������Reccol��length��" << "������Reccol��width��" << "������Reccol��height��" << endl;
		cin >> length >> width >> height;
		tiji();
		
	}
};
int main() {
	Reccol threeReccol;
	threeReccol.V();
	

}