//judul
//Menentukan Jenis Kelamin

#include <iostream>
using namespace std;

//kamus
string nama, jk, alamat ;

//diskripsi
int main(){
    cout << "Nama                   :" ; getline(cin, nama);
    cout << "Alamat                 :" ; getline(cin, alamat);
    cout << "Jenis Kelamin [P/L]    :" ; cin >> jk ;

    if (jk == "P") {
        cout << "Hallo " << nama << "!" << " Kamu tinggalnya di " << alamat << " ya? " << "oh ya, Anda Seorang Perempuan";
    }
    else{
        cout << "Hallo " << nama << "!" << " Kamu tinggalnya di " << alamat << " ya? " << "oh ya, Anda Seorang Laki-Laki";
    }
}
