
//judul
// aritmatika, penjumlahan, pengurangan, perkalian, pembagian
#include<iostream>
#include <math.h>

using namespace std;

//kamus
float a, b, hasil;
int arit ;

//diskripsi
int main(){
    cout << "ARITMATIKA" << endl << endl;
    cout << "1. Perkalian" << endl;
    cout << "2. Pembagian" << endl;
    cout << "3. Pengurangan" << endl;
    cout << "4. Penjumlahan" << endl << endl;

    cout << "Aritmatika yang ingin dihitung : " ; cin >> arit;
    cout << endl << endl ;

    if(arit==1){
        cout << "PERKALIAN" << endl;
        cout << "Masukkan Nilai a : " ; cin >> a ;
        cout << "Masukkan Nilai b : " ; cin >> b ;

        hasil = a*b ;

        cout << "Maka hasil perkalian dari a dan b adalah : " << hasil << endl ;

    }
    if (arit==2){
        cout << "PEMBAGIAN" << endl ;
        cout << "Masukkan Nilai a : " ; cin >> a ;
        cout << "Masukkan Nilai b : " ; cin >> b ;

        hasil = a/b;

        cout << "Maka hasil pembagian dari a dan b adalah : " << hasil << endl;
    }
    if (arit==4){
        cout << "PENJUMLAHAN" << endl ;
        cout << "Masukkan Nilai a : " ; cin >> a;
        cout << "Masukkan Nilai b : " ; cin >> b;

        hasil = a+b ;

        cout << "Maka hasil penjumlahan dari a dan b adalah : " << hasil << endl ;
    if (hasil %2 == 0){
        cout << "Maka hasilnya genap " << hasil << endl ;
    }
    else if (hasil %2 != 0 ){
        cout << "Maka hasilnya ganjil " << hasil << endl ;
    }
    }
    else if(arit==3){
        cout << "PENGURANGAN" << endl ;
        cout << "Masukkan Nilai a : " ; cin >> a;
        cout << "Masukkan Nilai b : " ; cin >> b;

        hasil = a-b ;

        cout << "Maka hasil pengurangan dari a dan b adalah : " << hasil << endl;
    }
}
