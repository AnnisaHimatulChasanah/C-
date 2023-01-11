//judul : repeat until

#include <iostream>
using namespace std;

//kamus
int n, bilangan, i=0;

//diskripsi
int main()
{
    cout << "Masukkan Nilai N : " ; cin >> n;
    do {
        cout << "Masukkan bilangan : ";
        cin >> bilangan;
        i++;
    }while(i < n);
}
