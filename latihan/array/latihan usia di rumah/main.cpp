//judul : Array
// 30 Nov 2022
#include <iostream>
#include <string.h>
using namespace std;


//kamus
int data[6];
//diskripsi
int main(){
    cout << "data" << endl;

    data[0] = 3;
    data[1] = 5;
    data[2] = 6;
    data[3] = 8;
    data[4] = 2;
    data[5] = 4;


    cout << "Data Pertama : " << data[0] << endl;
    cout << "Data kedua : " << data[1] << endl;
    cout << "Data ketiga : " << data[2] << endl;
    cout << "Data keempat : " << data[3] << endl;
    cout << "Data kelima : " << data[4] << endl;
    cout << "Data keenam : " << data[5] << endl;

//    //menampilkan data
//    a = 0;
//    while(a < 6){
//        cout << data[a] << " ";
//        a++;
//    }
//
//    //menampilkan data kebalik
//    cout << endl;
//    cout << "Setelah dibalik" << endl;
//    for (a = 5; a>=0 ; a--){
//        cout << data[a] << " ";
//    }
    return 0;
}
