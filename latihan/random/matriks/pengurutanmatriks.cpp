//judul : membuat matriks lalu diurutkan dari yang tekecil
#include <iostream>
using namespace std;

//kamus
int kolom, baris, i, b, a[20][20];
int min_matriks;

int main()
{
    cout << "Matriks" << endl;
    cout << "Masukkan jumlah baris : ";
    cin >> baris;
    cout << "Masukkan jumlah kolom : ";
    cin >> kolom;

    i = 1;
    while(i<=baris)
    {
        b = 1;
        while(b <= kolom)
        {
            cout << "Maka data baris ke - " << i << "kolom ke - " << b << " : ";
            cin >> a[i][b];
            b = b + 1;
        }
        i = i + 1;
    }

    cout << "Tampilkan" << endl;
    i = 1;
    while(i<=baris)
    {
        b = 1;
        while(b <= kolom)
        {
            cout << a[i][b];
            b = b + 1;
        }
        cout << endl;
        i = i + 1;
    }


    cout << "Mengurutkan bilangan yang terkecil" << endl;
    i = 0;
    while(i<= baris)
    {
        b = i + 1;
        while(b <= kolom)
        {
            if(a[i][b]<a[b][i])
            {
                min_matriks = a[i][b];
                a[i][b] = a[b][i];
                a[b][i] = min_matriks;
            }
            b = b + 1;
        }
        i = i+1;
    }
    cout << "Tampilkan" << endl;
    i = 0;
    while(i<=baris)
    {
        b = 0;
        while(b <= kolom)
        {
            cout << a[i][b];
            b = b + 1;
        }
        cout << endl;
        i = i + 1;
    }
}
