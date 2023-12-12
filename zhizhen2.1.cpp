#include<iostream>
using namespace std;
int index0f(const char* s1, const char* s2)
{
	int a, b;
	a = strlen(s1);
	b = strlen(s2);
	if (a <= b)
	{
		int t = -1;
		for (int i = 0; i < b; i++) {
			for (int j = 0; j < a; j++)
			{
				if (s1[j] == s2[i]) {
					i++;
					if (j == (a - 1)) {
						t = (i - j - 1);
						break;
					}
				}
				else {
					break;
				}
			}
		}
		return t;

	}
	else return -1;
}
int main() {
	const int size = 999;
	char *s1=new char [size], *s2=new char [size];
	cout << "Enter a string:" << endl;
	cin.getline(s1, size);
	cout << "Enter a string:" << endl;
	cin.getline(s2, size);
	cout<<index0f(s1, s2);
	delete[]s1;delete [] s2;
	return 0;
}


