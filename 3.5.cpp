#include<iostream>
using namespace std;
int f(int x)
{
	int num;
	if (x == 10)
	{
		num = 1;
		return num;
	}
	else
		num = (f(x + 1) +1) * 2;
	return num;
}
int main() {
	int x = 1;
	cout << "��һ���������Ϊ��" << f(x) << endl;
	return 0;
}