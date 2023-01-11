//judul : array
#include <iostream>
using namespace std;

//kamus
int a, cari;
int data[7];

//diskripsi
int main()
{
//    int data[7] ={11, 2, 3, 12, 13, 14, 19};
//    while (a < 7)
//    {
//        cout << data[a] << " " ;
//        a = a + 1;
//    }
    a =0;
    while(a < 7)
    {
        cout << "Masukkan data : " ; cin >> data[a];
        a = a + 1;
    }
    cout << "Mau cari apa ? " ; cin >> cari;
    a = 0;
    while(a < 7)
    {
        if (data[a] == cari)
        {
            cout << "NIII KETEMU YAAA " << cari << " Di sini yaa : " << a;
            return(0);
        }
        a = a + 1;
    }
            cout << "Tidak ditemukan";
    return 0;
}
