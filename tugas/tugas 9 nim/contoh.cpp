#include <iostream>
using namespace std;

//kamus
char kodefak;
int kodeprodi;
string nim;

//diskripsi
main(){
    cout << "Kode Fakultas" << endl;
    cout << "Masukkan NIM : " ; cin >> nim ;
    cout << endl;
    cout << "Masukkan Kode Fakultas [A-E] : " ; cin >> kodefak ;

    switch (kodefak)
    {
    case 'A' :
        {
            cout << " Fakultas Ilmu Komputer " << endl;
            cout << "Masukkan Kode Prodi [1-6] : " ; cin >> kodeprodi ;

            switch (kodeprodi)
            {
            case 1 :
                {
                    cout << " Teknik Informatika " << endl;
                    break;
                }
            case 2 :
                {
                    cout << " Sistem Informasi " << endl;
                    break;
                }
            case 3 :
                {
                    cout << " DKV " << endl;
                    break;
                }
            case 4 :
                {
                    cout << " Ilmu Komunikasi " << endl;
                    break;
                }
            case 5 :
                {
                    cout << " FTV " << endl;
                    break;
                }
            case 6 :
                {
                    cout << " ANIMASI " << endl;
                    break;
                }
            }
            break;
        }
    case 'B' :
        {
            cout << " Fakultas Ekonomi Dan Bisnis " << endl;
            cout << "Masukkan Kode Prodi [1-2] : "; cin >> kodeprodi;

            if(kodeprodi==1)
            {
                cout << " Manajemen " << endl;
            }
            if(kodeprodi==2)
            {
                cout << " Akuntansi " << endl;
            }
            break;
        }
    case 'C' :
        {
            cout << " Fakultas Ilmu Budaya " << endl;
            break;
        }
    case 'D' :
        {
            cout << " Fakultas Kesehatan " << endl;
            break;
        }
    case 'E' :
        {
            cout << " Fakultas Teknik " << endl;
            break;
        }
    default :
        {
            cout << " Tidak Ada " << endl;
            break;
        }
    }
}

