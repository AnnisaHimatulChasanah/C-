//judul : array
#include <iostream>
using namespace std;

//kamus
float a, b, c, wadah, jml, jmlh;

//diskripsi
int main(){
    a=1.9; c=20;
//    cout << "Masukkan Nilai A :" ; cin >> a;
    cout << "Masukkan Nilai B :" ; cin >> b;
//    cout << "Masukkan Nilai C :" ;cin >> c;

    jmlh = a*b;
    cout << "Hasil A Kali B : " << jmlh;
    cout << endl;
    jml = a + (b * c);
    cout << "A+B*C adalah : " << jml << endl;

    cout << "Ubah A 20, C 1.9" << endl;
    wadah = a;
    a = c;
    c = wadah;

    cout <<"nilai a : "<< a <<endl;
    cout << b<<endl;
    cout <<"nilai c : "<< c <<endl;

    return 0;
}

