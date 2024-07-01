#include <iostream>
using namespace std;

void swNum(int& a, int& b) {
	if (a < b) {
		int c = a;
		a = b;
		b = c;
	}
}
int main() {
	int mynumb[5];
	for (int i = 0; i < 5; i++) {
		cout << "Nhap phan tu thu " << i << ":";
		cin >> mynumb[i];
	}
	for (int x : mynumb) {
		cout << x << " ";
	}
	int vitrimax = 0;
	int somax = 0;
	for (int i = 0; i < 5; i++) {
		if (somax < mynumb[i]) {
			somax = mynumb[i];
			vitrimax = i;
		}
	}
	cout << "\nSo max: " << somax;
	cout << "\nSau khi swap\n";
	swNum(mynumb[0], mynumb[vitrimax]);
	for (int i : mynumb) {
		cout << i << " ";
	} return 0;
}