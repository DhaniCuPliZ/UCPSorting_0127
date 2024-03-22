#include <iostream>
using namespace std;


int a[20];
int n;

void input() {

	while (true) {
		cout << "masukkan banyaknya elemen pada array : ";
		cin >> n;
		if (n <= 20)
			break;
		else {


		}
	}
	cout << endl;
	cout << "=====================" << endl;
	cout << "Masukkan Elemen Array" << endl;
	cout << "=====================" << endl;

	for (int i = 0; i < n; i++) {
		cout << "Data ke-" << (i + 1) << ": ";
		cin >> a[i];

	}
}

void bubbleSortyArray() {
	int pass = 1;
	do {
		for (int j = 0; j <= n - 1 - pass; j++) {
			if (a[j] > a[j + 1]) {
				int temp;
				temp = a[j];
				a[j] = a[j + 1];

			}
		}
		pass = pass + 1;

	} while (pass <= n - 1);

}


void display() {
	cout << endl;
	cout << "==================================" << endl;
	cout << "Element Array yang telah tersusun" << endl;
	cout << "==================================" << endl;
	for (int j = 0; j < n; j++) {
		cout << a[j] << endl;

	}
	cout << "jumlah pass = " << n - 1 << endl;
	cout << endl;

}