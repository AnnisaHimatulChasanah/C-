//judul : input a b c
#include <iostream>
using namespace std;

//kamus
float a, b, c, cari;

//diskripsi
int main()
{
    cout << "Masukkan Nilai A : " << endl;
    cin >> a ;
    cout << "Masukkan Nilai B : " << endl;
    cin >> b ;
    cout << "Masukkan nilai C : " << endl;
    cin >> c;

//    jmlh = a*b;
//    cout << "Hasil A Kali B : " << jmlh;
//    cout << endl;
//    jml = a + (b * c);
//    cout << "A+B*C adalah : " << jml;
    cout << "Masukkan data yang dicari : "; cin >> cari;
    if (a == cari)
    {
        cout << a << "Maka Nilai A yang dicari" ;
    }else if(b == cari)
    {
        cout << b << "Maka Nilai B yang dicari" ;
    }else if(c == cari)
    {
        cout << c << "Maka Nilai C yang dicari";
    }else
    {
        cout << "Tidak ada" << endl;
    }
}
