//judul : Array
// 30 Nov 2022
#include <iostream>
#include <string.h>
using namespace std;


//kamus
int umur[8], max_umur;
int a, b;

int main(){
    cout << "Umur" << endl;

    a = 0;
    umur[0] = 23;
    umur[1] = 24;
    umur[2] = 21;
    umur[3] = 22;
    umur[4] = 21;
    umur[5] = 19;
    umur[6] = 20;
    umur[7] = 29;

    //menampilkan
    a = 0;
    while (a < 8){
        cout << umur[a] << " ";
        a++;
    }

    cout << endl;

//    sorting
    a = 0;
    while(a < 9){
        b = a + 1;
        while(b < 9){
            if(umur[a] < umur[b]){
                max_umur = umur[a];
                umur[a] = umur[b];
                umur[b] = max_umur;
            }
            b = b + 1;
        }
        a = a + 1;
    }

    cout << "Umur yang sudah diurutkan dari yang terbesar ke terkecil" << endl;
    a=0;
    while(a<8){
        cout << umur[a] << " ";
        a=a+1;
    }
    cout << endl;
    cout << "Umur tertua : " << umur[0] ;

    return 0;
}
