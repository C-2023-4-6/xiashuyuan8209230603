#include<iostream>
using namespace std;
int main()
{
	const int MaxN = 10;
	int a[MaxN],n=0;
	cout << "please enter ten numbers:" << endl;
	for (int n = 0; n < MaxN; n++)
		cin >> a[n];
	cout << a[0] << " ";
	for (int i = 1; i < MaxN; i++)
	{
		for (int j = 0; j < i; j++)
		{
			if (a[i] != a[j])
			{
				if (j == i - 1)

					cout << a[i] <<endl;
				else
					continue;
			}
			else
				break;
		}
		cout << endl;
	}
	return 0;
}




