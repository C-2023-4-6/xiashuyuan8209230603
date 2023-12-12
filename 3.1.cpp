#include<iostream> 
using namespace std;
int n(int num1, int num2) {
	int x = (num1 < num2 ? num1 : num2);
	for (; x >= 1; x--)
		if (num1 % x == 0 && num2 % x == 0)
			break;

	return x;
}
int m(int num1,int num2){//为最小公倍数
	int x = (num1 < num2 ? num1 : num2);
	for (; x >= 1; x--)
		if (num1 % x == 0 && num2 % x == 0)
			break;

	int y = (num1 * num2) / x;
	return y;

}
int main() {
	cout << "请输入数字：" << endl;

	int a, b;
	cin >> a >> b;
	int x= n(a, b);
	int y = m(a, b);
	cout << "最大公约数：" << x << "最小公倍数：" << y;
}
