//judul
//Membuat 5 bilangan dan mencari mana terbesar lalu urutkan
//annisa himatul chasanah
//03 sept 2022
#include <iostream>
using namespace std;

//kamus
int jmlh, sorting;
main()
{
    cout << "Mencari Bilangan terbesar dan terkecil lalu diurutkan" << endl;
    cout << "Masukkan Jumlah Angka : " ; cin >> jmlh;

    int angka[jmlh];
    int a;

    for(a=0; a<jmlh; a++)
    {
        cout << "Angka Ke - " << (a+1) << " : " ;
        cin >> angka[a];
    }

    int b;

    for (b=1; b < jmlh; b++)
    {

        int c;

        for (c=0; c<jmlh-b; c++)
        {
            if (angka[c] < angka [c+1])
            {
                sorting=angka[c];
                angka[c]=angka[c+1];
                angka[c+1]=sorting;
            }
        }
    }
    cout << endl << "Hasil dari urutan dari bilangan terbesar adalah" ;

    for(int a=0; a<jmlh; a++)
    {
        cout << " " << angka[a];
    }

    cout << endl << endl;

    {
    int max;
    int min;

    max = angka[0];
    for (a=0; a < jmlh; a++)
    {
        if (max < angka[a])
        {
            max = angka[a];
        }
        else if (min > angka[a])
        {
            min = angka[a];
        }
    }
    cout << "Nilai Terbesar adalah : " << max << endl;
    cout << "Nilai Terkecil Adalah : " << min << endl;
    }

}

