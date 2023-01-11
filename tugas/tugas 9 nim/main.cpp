//JUDUL Mendeteksi Fakultas Dan Prodi Melalui NIM
// Annisa Himatul Chasanah
// 06 Oktober 2022
#include <iostream>
using namespace std;

//KAMUS
char nim [20];

int main()
{
    cout << "Input Nilai Induk Mahasiswa" << endl;

        cout << "Masukkan NIM : "; cin >> nim ;

        switch (toupper(nim[0]))
        {
            case 'A' :
            {
                cout << "Fakultas Ilmu Komputer" << endl;
                switch (toupper(nim[1]))
                {
                case '1' :
                    {
                      cout << "Jenjang S1" << endl;
                      switch(toupper(nim[2]))
                      {
                      case '1' :
                        {
                            cout << "Program Studi Teknik Informatika" << endl;
                            break;
                        }
                        case '2' :
                        {
                            cout << "Program Studi Sistem Informasi" << endl;
                            break;
                        }
                        case '4' :
                        {
                            cout << "Program Studi Desain Komunikasi Visual" << endl;
                            break;
                        }
                        case '5' :
                        {
                            cout << "Program Studi Ilmu Komunikasi" << endl;
                            break;
                        }
                        default :
                        {
                            cout << "Tidak Ada" << endl;
                            break;
                        }
                      }
                      break;
                    }
                case '2' :
                    {
                        cout << "Jenjang D3" << endl;
                        switch(toupper(nim[2]))
                        {
                        case '1' :
                            {
                                cout << "Program Studi Teknik Informatika" << endl;
                                break;
                            }
                        case '2' :
                            {
                                cout << "Program Studi Sistem Informasi" << endl;
                                break;
                            }
                        default :
                            {
                                cout << "Tidak Ada" << endl;
                                break;
                            }
                        }
                    }
                }
            }
            break;
        }
        switch (toupper(nim[0]))
        {
            case 'B' :
            {
                cout << "Fakultas Ekonomi Dan Bisnis" << endl;
                switch (toupper(nim[1]))
                {
                case '1' :
                    {
                      cout << "Jenjang S1" << endl;
                      switch(toupper(nim[2]))
                      {
                      case '1' :
                        {
                            cout << "Program Manajemen" << endl;
                            break;
                        }
                        case '2' :
                        {
                            cout << "Program Akuntansi" << endl;
                            break;
                        }
                        default :
                        {
                            cout << "Tidak Ada" << endl;
                            break;
                        }
                      }
                      break;
                    }
                case '2' :
                    {
                        cout << "Jenjang D3" << endl;
                        switch(toupper(nim[2]))
                        {
                        case '1' :
                            {
                                cout << "Program Studi Manajemen" << endl;
                                break;
                            }
                        case '2' :
                            {
                                cout << "Program Studi Akuntansi" << endl;
                                break;
                            }
                        default :
                            {
                                cout << "Tidak Ada" << endl;
                                break;
                            }
                        }
                    }
                }
            }
        }

}
