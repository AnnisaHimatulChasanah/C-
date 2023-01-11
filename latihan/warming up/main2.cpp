//judul : Assigmentkan hello dan kabar menggunakan string
//nama : annisa himatul

#include <iostream>
#include <string.h>

using namespace std;

//kamus
//string hello, kabar;
char helo[20];
char kabar[30];

//diskripsi
main()
{
//    hello = " Hallo semarang" ;
//    kabar = "Apa kabar hari ini";
//
//    cout << hello << endl;
//    cout << kabar << endl;
    strcpy(helo, "Hallo semarang");
    cout << helo;
}
