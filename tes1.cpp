#include <iostream>
using namespace std;

int main () {
	char kode;
	int tarif, berat, total;
	
	cout << "==============================" << endl;
	cout << "       BIAYA PENGIRIMAN       " << endl;
	cout << "==============================" << endl;
	cout << " Terdapat dua jenis pengiriman" << endl;
	cout << "1. Reguler" << endl;
	cout << "2. Express" << endl;
	cout << "Pilih jenis pengiriman(1/2): ";
	cin >> kode;
	
	switch (kode){
		case '1':
			tarif = 10000;
			break;
		case '2':
			tarif = 15000;
			break;
		default:
			cout << "Jenis pengiriman tidak valid.";
			return 0;
	}
	
	cout << "Masukkan berat paket(kg): ";
	cin >> berat;
	
	total = tarif * berat;
	if (berat > 10){
		total = total + 20000;
	}
	
	cout << "================================" << endl;
	cout << "Jenis Pengiriman: " << kode << endl;
	cout << "Berat Paket(kg) : " << berat << "KG" << endl;
	cout << "Jumlah biaya pengiriman : " << total << endl;
	cout << "================================";
	
	return 0;
}
