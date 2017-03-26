#include <iostream>
using namespace std;

//prototype
void prosesbaca();
int prosestambah();
int proseskurang();
void prosestampil();

//dua variabel
int x, y;

// program utama
	int main () {
	prosesbaca();
	prosestampil();
return 0;
}

//proses membaca
void prosesbaca() {
	cout << "Masukan nilai x : ";
	cin >> x;
	cout << "masukan nilai y : ";
	cin >> y;
}
// proses tambah
  int prosestambah() {
  return x+y;
}

//proses kurang
	int proseskurang() {
 	int hasil;
	hasil = x - y;
return hasil;
}

//proses tampil
void prosestampil() {
	cout <<"hasil tambah :" << prosestambah() << endl;
	cout <<"hasil kurang :" << proseskurang();
}
