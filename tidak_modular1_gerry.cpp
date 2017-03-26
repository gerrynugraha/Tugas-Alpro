#include <iostream>
using namespace std;

int main () {
//dua variabel
int x, y, temp;

// proses membaca
	cout << "Masukan Nilai x :"; 
	cin >> x;
	cout << "Masukan nilai y :";
	cin >> y;
//proses tukar
	temp = x;
	y = x;
	y = temp;
//proses tampil
	cout <<"==================" << endl;
	cout << "Nilai X sekarang : "<< x << endl;
	cout << "Nilai Y sekarang : "<< y;

}
