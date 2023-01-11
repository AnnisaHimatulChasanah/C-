//judul
//Kelipatan 6
//Annisa Himatul Chasanah
//8 okt 2022
#include<iostream>
using namespace std;

//kamus
main(){

    int a=0;
    cout<<"Mengihitung Kelipatan 5 dari 125 sampai 200 : " << endl;

    while( a < 200 ){
        cout << a << " " ;
        a=a+5;
    }
    cout << endl << endl;
    cout << "Menggunakan for" << endl;
    for(a=0; a < 200; a=a+5)
    {
        cout << a << " ";
    }
    return 0;
}
