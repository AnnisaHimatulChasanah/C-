// judul : array lanjutan
// annisa himatul
#include <iostream>
using namespace std;

//kamus
//int array[100], data, a, total;
//float rata;
int arrumur[10], a, b, wadah;
float jmlh, rata, jml;
float arrBB[10];

//diskripsi
int main(){
    cout << "Data usia" << endl;
    a=0;
    arrumur[0] = 17;
    arrumur[1] = 18;
    arrumur[2] = 14;
    arrumur[3] = 19;
    arrumur[4] = 20;
    arrumur[5] = 23;
    arrumur[6] = 24;
    arrumur[7] = 27;
    arrumur[8] = 30;
    arrumur[9] = 30;

    //menampilkan data umur
    a = 0;
    while(a < 10){
        cout << arrumur[a] << " ";
        a++;
    }
    cout << endl;

    cout << "Data berat badan" << endl;
    a=0;
    arrBB[0] = 34.9;
    arrBB[1] = 43.6;
    arrBB[2] = 35.8;
    arrBB[3] = 39.9;
    arrBB[4] = 56.8;
    arrBB[5] = 49.8;
    arrBB[6] = 52.6;
    arrBB[7] = 43.9;
    arrBB[8] = 54.9;
    arrBB[9] = 30.9;

    a = 0;
    while(a < 10){
        cout << arrBB[a] << " ";
        a++;
    }
    cout << endl;

    //total UMUR
    a = 0;
    while (a < 10){
        jml = jml + arrumur[a];
        a = a +1;
    }
    cout << endl;
    cout << "Jumlah usia keseluruhan : " << jml << endl;
    rata = jml/10;
    cout << "Maka rata-rata usia adalah : " << rata << endl;

    cout << endl;

    //total berat badan
    a = 0;
    while (a < 11){
        jmlh = jmlh + arrBB[a];
        a = a + 1;
    }
    cout << "Jumlah Berat Badan : " << jmlh << endl;
    rata = jmlh/10;
    cout << "Maka rata-rata BB adalah : " << rata << endl;
    cout << endl;

    //Mencari nilai terbesar UMUR
//    int max;
//    max = arrumur[10];
//    a = 1;
//    do{
//        if(arrumur[a] > max)
//        {
//            max = arrumur[a];
//        }
//        a = a+1;
//    }while(a<10);

    //sorting
    a=0;
    while (a<10)
    {
        b = a +1;
        while(b<11)
        {
            if(arrumur[a] < arrumur[b]){
                wadah = arrumur[a];
                arrumur[a] = arrumur[b];
                arrumur[b] = wadah;
            }
            b = b +1;
        }
        a = a + 1;
    }

    //tampilan sorting
    a=0;
    while (a < 10){
        cout << arrumur[a] << " ";
        a = a + 1;
    }
    return 0;
}

