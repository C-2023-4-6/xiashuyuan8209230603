#include<iostream>
using namespace std;
bool is_prime(int num);//函数的声明
int main()
{
	int a;
	cout << "请输入需要判断的数字a=";
	cin >> a;
	if (is_prime(a))//调用函数
	cout << a << "是素数" << endl;
	else
		cout << a << "不是素数" << endl;
	return 0;
	int b=0, c=200;
	int num = 0;
	for (int i =0; i < 200; i++)

	{
		if (is_prime(i))
		{
			num++;
			cout << i << endl;
			if (num % 10 == 0)
				cout << endl;
		}


	}
	cout << num << endl;
	return 0;
}
bool is_prime(int num) {//函数的定义
	for (int i = 2; i < num; i++)
		if (num % i == 0) {
			return 0;//不是素数
		}
		else
			return 1;//是素数
	
}