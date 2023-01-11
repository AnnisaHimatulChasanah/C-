#include <iostream>

using namespace std;

main() {
	int angka[50];
	float jumlah=0, perulangan;
	float rata;

	cout << "Menjumlahkan isi array" << endl;

	cout << "masukkan jumlah perulangan : ";

	cin >> perulangan;

	int i=1;
	while(i<=perulangan){
		cout << "Masukkan angka ke-" << i << " : ";
		cin >> angka[i];
		i = i + 1;
	}

	int a = 1;
	while(a<=perulangan){
		jumlah += angka[a];
		a = a + 1;
	}

	cout << endl << endl << "Jumlah angka adalah : " << jumlah << endl;


    rata = jumlah/perulangan;
    cout << "Rata ratanya adalah : " << rata ;
}
