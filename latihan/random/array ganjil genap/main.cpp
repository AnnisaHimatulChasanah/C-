//judul :
//1. Menghitung berapa banyak bilangan gajil genap dalam array
//2. Menghitung penjumlahan semua bilangan genap atau ganjil
//3. Menggabunglan dua buah array

#include <iostream>
using namespace std;

//kamus
int a[6];
int i;
int genap=0, ganjil=0, jml_genap=0, jml_ganjil=0;

//diskripsi
int main(){
//    input data array
    i = 0;
    while (i < 6)
    {
        cout << "Data Ke - "<< i + 1 << " = ";
        cin >> a[i];
        i = i + 1;
    }

    //menghitung ada berapa hasil ganjil genap
    i=0;
    while (i < 6)
    {
        if(a[i]%2==0)
        {
            genap = genap + 1;
            jml_genap = jml_genap + a[i];

        }else{
            ganjil = ganjil + 1;
            jml_ganjil = jml_ganjil + a[i];
        }
        i = i + 1;
    }
    cout << "\ntotal hasil bilangan genap : " << genap;
    cout << "\ntotal hasil bilangan ganjil : " << ganjil;
    cout << "\nJumlah hasil bilangan genap : " << jml_genap;
    cout << "\nJumlah hasil bilangan ganjil : " << jml_ganjil;
    return 0;
}
