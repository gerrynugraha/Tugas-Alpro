#include <iostream>
using namespace std;

//prototype
void prosesbaca();
void prosestukar();
void prosestampil();

	// variabel
	int x, y, temp;
	
//program utama
	int main () {
		prosesbaca();
		prosestukar();
		prosestampil();
	return 0;
	}	
	
	// Proses membaca
	void prosesbaca() {
	cout << " Masukan nilai X : ";
	cin >> x;
	cout << " Masukan nilai Y : ";
	cin >> y;
	}

	// Proses Tukar
	void prosestukar() {
	temp = y;
	y = x;
	x = temp;
	}

	// Proses Tampil
	void prosestampil() {
	cout << "================================" << endl;
	cout << "Nilai X sekarang : " << x << endl;
	cout << "Nilai Y sekarang : " << y;
	}