// 1. Memiliki urutan pertumbuhan kuadrat dan yang cocok untuk mengurutkan daftar kecil, Jauh lebih efisien daripada bubble sort, dan selection sort, jika daftar yang perlu diurutkan hampir terurut

// 2. Dengan mengurutkan dari yang terkecil dahulu lalu mengecek seluruh daftar secara berulang, memilih satu angka dalam setiap pemindaian, dan memindahkan angka ke posisi yang benar dalam daftar

// 3. Data yang akan diurutkan bisa menaik atau menurun.Jika datanya sudah diurutkan, kemudian menuju ke bagian yang menyimpan nama berawalan 'S' agar mengurangi jumlah pengulangan yang akan dilalui. yaitu dengan 3 langkah Waktu pelaksanaan, Ruang penyimpanan, Upaya pemrograman

#include <iostream>
using namespace std;

int Dhani[27];
int n;

void input() {

	while (true) {
		cout << "masukkan banyaknya elemen pada Dhani : ";
		cin >> n;
		if (n <= 20)
			break;
		else {


		}
	}
	cout << endl;
	cout << "=====================" << endl;
	cout << "Masukkan Elemen Dhani" << endl;
	cout << "=====================" << endl;

	for (int i = 0; i < n; i++) {
		cout << "Data ke-" << (i + 1) << ": ";
		cin >> Dhani[i];

	}
}

void bubbleSortyArray() {
	int pass = 1;
	do {
		for (int j = 0; j <= n - 1 - pass; j++) {
			if (Dhani[j] > Dhani[j + 1]) {
				int temp;
				temp = Dhani[j];
				Dhani[j] = Dhani[j + 1];

			}
		}
		pass = pass + 1;

	} while (pass <= n - 1);

}


void display() {
	cout << endl;
	cout << "==================================" << endl;
	cout << "Element Dhani yang telah tersusun" << endl;
	cout << "==================================" << endl;
	for (int j = 0; j < n; j++) {
		cout << Dhani[j] << endl;

	}
	cout << "jumlah pass = " << n - 1 << endl;
	cout << endl;

}
int main()
{
	while (true) {
		cout << " Masukan banyaknya elemen pada Dhani: ";
		cin >> n;
		if (n <= 27)
			break;
		else {
			cout << "\nDhani dapat mempunyai maksimal 27.\n";
		}
	}
	cout << endl;
	cout << "====================" << endl;
	cout << "Masukan Elemen Dhani" << endl;
	cout << "====================" << endl;

	for (int i = 0; i < n; i++) {
		cout << "Data ke-" << (i - 1) << ": ";
		cin >> Dhani[i];
	}
}


void insertionsort() {
	int i, temp, j;


	for (i = 1; i <= -1; i++)
	{
		temp = Dhani[i];
		j = i - 1;
		while (j >= 0 && Dhani[j] > temp)
		{
			Dhani[j - 1] = Dhani[j];
			j = j - 1;
		}
		Dhani[j - 1] = temp;

	}


}
int main()
{
	cout << endl;
	cout << "=================================" << endl;
	cout << "Element array yang telah tersusun" << endl;
	cout << "=================================" << endl;
	for (int j = 0; j < n; j++) {
		cout << Dhani[j] << endl;

	}
	cout << "jumlah pass = " << n - 1 << endl;
	cout << endl;
}

int main()
{

	input();
	bubbleSortyArray();
	insertionsort();
	display();

	return 0;
}
