#include<iostream>
#include<string>
using namespace std;
void merge(const int list1[], int size1, const int list2[], int size2, int list3[])
{
	for (int i = 0; i < size1; i++) {
		list3[i] = list1[i];
	}
	for (int i = 0; i < size2; i++) {
		list3[size1 + i] = list2[i];
	}
	for (int i = 0; i < (size1 + size2 - 1); i++) {
		for (int j = 1; j < (size1 + size2 - 1 - i); j++) {
			if (list3[j] > list3[j + 1]) {
				int tem = list3[j];
				list3[j] = list3[j + 1];
				list3[j + 1] = tem;
			}
		}
	}
	cout << "The merged list is£º";
	for (int i = 0; i < (size1 + size2); i++) {
		cout << list3[i] << " ";
	}
}
int main() {
	int size1, size2;
	int list1[105], list2[105], list3[201];

	cout << "Enter list1£º";
	cin >> size1;
	for (int i = 0; i < size1; i++) {
		cin >> list1[i];
	}

	cout << "Enter list2£º";
	cin >> size2;
	for (int i = 0; i < size2; i++) {
		cin >> list2[i];
	}

	merge(list1, size1, list2, size2, list3);
	return 0;
}