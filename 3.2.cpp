#include<iostream>
using namespace std;
bool is_prime(int num);//����������
int main()
{
	int a;
	cout << "��������Ҫ�жϵ�����a=";
	cin >> a;
	if (is_prime(a))//���ú���
	cout << a << "������" << endl;
	else
		cout << a << "��������" << endl;
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
bool is_prime(int num) {//�����Ķ���
	for (int i = 2; i < num; i++)
		if (num % i == 0) {
			return 0;//��������
		}
		else
			return 1;//������
	
}