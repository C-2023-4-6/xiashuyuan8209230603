#include<iostream>
using namespace std;
const int n = 10;

int sort1(int list[]) {
	bool changed = true;
	do {
		changed = false;
		for (int j = 0; j < n - 1; j++) {
			if (list[j] < list[j + 1]) {
				swap(list[j], list[j + 1]);
				changed = true;
			}
		}
	} while (changed);
	return list[n];
}
int sort2(int list[]) {
	bool changed = true;
	do {
		changed = false;
		for (int j = 0; j < n - 1; j++) {
			if (list[j] > list[j + 1]) {
				swap(list[j], list[j + 1]);
				changed = true;
			}
		}
	} while (changed);
	return list[n];
}
int main() {
	cout << "ÇëÊäÈë10¸öÊı£º";
	int list1[n];
	for (int i = 0; i < n; i++) {
		cin >> list1[i];
	}
	sort1(list1);
	cout << "½µĞò£º";
	for (int i = 0; i < n; i++) {
		cout << list1[i] << " ";
	}
	cout << endl;
	cout << "ÉıĞò£º";
	sort2(list1);
	for (int i = 0; i < n; i++) {
		cout << list1[i] << " ";
	}
	return 0;
}






