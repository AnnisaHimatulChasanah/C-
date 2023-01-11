//judul Mendeteksi penyakit dari gejala
// Annisa Himatul Chasanah
//04 Oktober 2022
#include <iostream>
using namespace std;

//kamus
main(){
    string nama, alamat, u,ulangi;
    char jk;
    int gA, gB, gC, gD, gE, gF, gG;
    cout << "------------------------------------" << endl;
    cout << "|          Selamat Datang          |" << endl;
    cout << "------------------------------------" << endl;
    cout << endl;
    cout << "Silakan isi data diri terlebih dahulu : " << endl;
    cout << "Masukkan Nama\t : "; getline(cin, nama);
    cout << "Masukkan Alamat\t : "; getline(cin, alamat);
    cout << "Masukkan Jenis Kelamin[P/L]\t : " ; cin >> jk ;
    cout << endl << endl;

    do{
        cout << "Apa Keluhan Anda? Silahkan pilih...."<<endl;
        cout << "------------------------------------" << endl;
        cout << "|          GEJALA PERTAMA          |" << endl;
        cout << "------------------------------------" << endl;
        cout << "|1. Bintik Merah / Ruam            |" << endl;
        cout << "|2. Diare                          |" << endl;
        cout << "|3. Pusing                         |" << endl;
        cout << "------------------------------------" << endl ;
        cout << "Masukkan Keluhan Anda [1-3] : "; cin >> gA;
        cout << endl;

    switch(gA)
    {
    case 1 :
        {
            do
            {
                system("cls");
                cout << "Apa Keluhan Anda? Silahkan pilih...."<<endl;
                cout << "------------------------------------" << endl;
                cout << "|          GEJALA KEDUA            |" << endl;
                cout << "------------------------------------" << endl;
                cout << "|1. Demam                          |" << endl;
                cout << "|2. Mual                           |" << endl;
                cout << "|3. Pegal / Nyeri Otot             |" << endl;
                cout << "------------------------------------" << endl;
                cout << "Masukkan Keluhan Anda [1-3] : "; cin >> gB;
                cout << endl;
                switch(gB)
                {
                case 1 :
                    {
                        do
                        {
                            system("cls");
                            cout << "Apa Keluhan Anda? Silahkan pilih...."<<endl;
                            cout << "------------------------------------" << endl;
                            cout << "|          GEJALA KETIGA           |" << endl;
                            cout << "------------------------------------" << endl;
                            cout << "|1. Pilek                          |" << endl;
                            cout << "|2. Batuk                          |" << endl;
                            cout << "|3. Nyeri Tenggorokan              |" << endl;
                            cout << "------------------------------------" << endl;
                            cout << "Masukkan Keluhan Anda [1-3] : "; cin >> gC;
                            cout << endl;

                            if(gC==1)
                            {
                                system("cls");
                                cout << "Anda Mengalami Sakit Campak" << endl;
                                cout << "Untuk meredakan campak, perawatan yang bisa dilakukan : " << endl;
                                cout << "1. Banyak Minum air putih" << endl;
                                cout << "2. Banyak istirahat dan hindari sinar matahari" << endl;
                                cout << "3. Minum obat penurun demam dan obat pereda sakit serta nyeri" << endl;
                                exit(0);
                            }
                            else if(gC==2)
                            {
                                system("cls");
                                cout << "Anda Mengalami Sakit DBD" << endl;
                                cout << "Untuk meredakan DBD, perawatan yang bisa dilakukan : " << endl;
                                cout << "1. Banyak Minum air putih" << endl;
                                cout << "2. Berikan obat pereda demam" << endl;
                                cout << "3. Jika dalam 2-3 hari gejala semakin memburuk seperti tampak lemas, mual, mimisan, pendarahan gusi " << endl;
                                cout << "dan sebagainya segeralah dibawa ke rumah sakit atau puskesmas untuk ditangani lebih lanjut" << endl;
                                exit(0);
                            }
                            else if(gC==3)
                            {
                                system("cls");
                                cout << "Anda Mengalami Sakit Demam Scarlet Dan Radang Tenggorokan" << endl;
                                cout << "Untuk meredakan Demam Scarlet Dan Radang Tenggorokan, perawatan yang bisa dilakukan : " << endl;
                                cout << "1. Gunakan ibuprofen atau acetaminophen untuk mengontrol demam dan meminimalkan nyeri tenggorokan" << endl;
                                cout << "2. Berikan cairan yang cukup. Beri banyak air untuk menjaga tenggorokan tetap lembab dan mencegah dehidrasi" << endl;
                                exit(0);
                            }
                            else
                            {
                                system ("cls");
                                cout << "Input salah. Ingin memasukkan inputan ulang? (Y/N) : ";
                                cin >> ulangi;
                                if (ulangi=="y" || ulangi=="Y")
                                {continue;}
                                else
                                {exit(0);}
                                break;
                            }

                        } while(true);
                        break;
                    }
                case 2 :
                    {
                        do
                        {
                            system("cls");
                            cout << "Apa Keluhan Anda? Silahkan pilih...."<<endl; //gaa = gA, gba=gB, gca=gC, gcb= gD, gcc = gE, gcd = gF, gbb = gG
                            cout << "---------------------------------------" << endl;
                            cout << "|          GEJALA KETIGA              |" << endl;
                            cout << "---------------------------------------" << endl;
                            cout << "|1. Kram Perut                        |" << endl;
                            cout << "|2. Nyeri pada sendi, otot dan tulang |" << endl;
                            cout << "---------------------------------------" << endl;
                            cout << "Masukkan Keluhan Anda [1-2] : "; cin >> gD;
                            cout << endl;

                            if(gD==1)
                            {
                                system("cls");
                                cout << "Anda Mengalami Sakit Demam Scarlet Dan Radang Usus Besar" << endl;
                                cout << "Ruam Kulit akibat Radang Usus Besar tidak boleh disepelekan dan perlu ditangani oleh dokter." << endl;
                                exit(0);
                            }
                            else if(gD==2)
                            {
                                system("cls");
                                cout << "Anda Mengalami Demam Berdarah Dengue atau DBD" << endl;
                                cout << "Untuk meredakan gejala DBD, perawatan yang bisa dilakukan : " << endl;
                                cout << "1. Banyak Minum air putih" << endl;
                                cout << "2. Kompres air hangat" << endl;
                                cout << "3. Jika dalam 2-3 hari gejala semakin memburuk seperti tampak lemas, mual, mimisan, pendarahan gusi " << endl;
                                cout << "dan sebagainya segeralah dibawa ke rumah sakit atau puskesmas untuk ditangai lebih lanjut" << endl;
                                exit(0);
                            }
                            else
                            {
                                system ("cls");
                                cout << "Input salah. Ingin memasukkan inputan ulang? (Y/N) : ";
                                cin >> ulangi;
                                if (ulangi=="y" || ulangi=="Y")
                                {continue;}
                                else
                                {exit(0);}
                                break;
                            }

                        }while(true);
                        break;
                    }
                    case 3 :
                    {
                        do
                        {
                            system("cls");
                            cout << "Apa Keluhan Anda? Silahkan pilih...."<<endl; //gaa = gA, gba=gB, gca=gC, gcb= gD, gcc = gE, gcd = gF, gbb = gG
                            cout << "------------------------------------" << endl;
                            cout << "|          GEJALA KETIGA           |" << endl;
                            cout << "------------------------------------" << endl;
                            cout << "|1. Sakit Kepala                   |" << endl;
                            cout << "|2. Gatal                          |" << endl;
                            cout << "------------------------------------" << endl;
                            cout << "Masukkan Keluhan Anda [1-2] : "; cin >> gE;
                            cout << endl;

                            if(gE==1)
                            {
                                system("cls");
                                cout << "Anda Mengalami Sakit Chikungunya" << endl;
                                cout << "Chikungunya adalah infeksi  virus yang menyerang dan menulari manusia melalui gigitan nyamuk aedes " << endl;
                                cout << "aegypti atau aedes albopictus, dua jenis nyamuk yang juga dikenal sebagai penyebab demam berdarah " << endl;
                                cout << "Untuk meredakan gejala tersebut, perawatan yang bisa dilakukan : " << endl;
                                cout << "1. Minum obat antiradang, atau obat flu tulang, seperti paracetamol, ibuprofen atau naproxen." << endl;
                                exit(0);
                            }
                            else if(gE==2)
                            {
                                system("cls");
                                cout << "Anda Mengalami Sakit Biduran" << endl;
                                cout << "Untuk meredakan gejala tersebut, perawatan yang bisa dilakukan : " << endl;
                                cout << "Gejala-gejala biduran akan menghilang dengan sendirinya dalam beberapa hari. Namun, bila merasa terganggu " << endl;
                                cout << "dengan rasa gatalnya, anda bisa mengonsumsi obat anthistamin. Sedangkan bila kondisi semakin parah, maka " << endl;
                                cout << "konsumsilah tablet kortikosterodi" << endl;
                                exit(0);
                            }
                            else
                            {
                                system ("cls");
                                cout << "Input salah. Ingin memasukkan inputan ulang? (Y/N) : ";
                                cin >> ulangi;
                                if (ulangi=="y" || ulangi=="Y")
                                {continue;}
                                else
                                {exit(0);}
                                break;
                            }

                        }while(true);
                        break;
                    }
                    default :
                {
                system ("cls");
                cout << "Input salah. Ingin memasukkan inputan ulang? (Y/N) : ";
                cin >> ulangi;
                if (ulangi=="y" || ulangi=="Y")
                {continue;}
                else
                {exit(0);}
                break;
                }
                }
            }while(true);
            break;
        }
        case 2 :
        {
            do
            {
                system("cls");
                cout << "Apa Keluhan Anda? Silahkan pilih...."<<endl;
                cout << "------------------------------------" << endl;
                cout << "|          GEJALA KEDUA            |" << endl;
                cout << "------------------------------------" << endl;
                cout << "|1. Kram Perut                     |" << endl;
                cout << "|2. Perut Kembung                  |" << endl;
                cout << "|3. Demam                          |" << endl;
                cout << "------------------------------------" << endl;
                cout << "Masukkan Keluhan Anda [1-3] : "; cin >> gF; //gaa = gA, gba=gB, gca=gC, gcb= gD, gcc = gE, gcd = gF, gbb = gG
                cout << endl;

                if(gF==1)
                {
                    system("cls");
                    cout << "Anda Mengalami Sakit Irritable Syndrome atau Iritasi Usus Besar" << endl;
                    cout << "Gejala akibat iritasi pada saluran pencernaan, kondisi ini merupakan kondisi jangka panjang yang bersifat kambuhan. " << endl;
                    exit(0);
                            }
                else if(gF==2)
                {
                    system("cls");
                    cout << "Anda Mengalami Sakit Radang Usus" << endl;
                    cout << "Segera lakukan pemeriksaan ke dokter jika mengalami radang usus, atau sering terjadi perubahan pada kebiasaan buang " << endl;
                    cout << "air besar. Meski umumnya bukan tergolong penyakit serius, tetapi pada beberapa kasus, radang usus dapat menyebabkan " << endl;
                    cout << "komplikasi yang berbahaya." << endl;
                    exit(0);
                }
                else if(gF==3)
                {
                    system("cls");
                    cout << "Anda Mengalami Keracunan Makanan" << endl;
                    cout << "Untuk meredakan gejala tersebut, perawatan yang bisa dilakukan : " << endl;
                    cout << "1. Jangan minum obat anti muntah maupun anti diare tanpa anjuran dokter" << endl;
                    cout << "2. Mencegah dehidrasi adalah pertolongan pertama untuk mengatasi keracunan makanan. Dapat minum air putih sedit demi sedikit" << endl;
                    exit(0);
                }
                else
                {
                system ("cls");
                cout << "Input salah. Ingin memasukkan inputan ulang? (Y/N) : ";
                cin >> ulangi;
                if (ulangi=="y" || ulangi=="Y")
                {continue;}
                else
                {exit(0);}
                break;
                            }
            }while (true);
            break;
        }
        case 3 :
        {
            do
            {
                system("cls");
                cout << "Apa Keluhan Anda? Silahkan pilih...."<<endl;
                cout << "------------------------------------" << endl;
                cout << "|          GEJALA KEDUA            |" << endl;
                cout << "------------------------------------" << endl;
                cout << "|1. Sakit dada atau sesak nafas    |" << endl;
                cout << "|2. Mual                           |" << endl;
                cout << "------------------------------------" << endl;
                cout << "Masukkan Keluhan Anda [1-2] : "; cin >> gG; //gaa = gA, gba=gB, gca=gC, gcb= gD, gcc = gE, gcd = gF, gbb = gG
                cout << endl;

                if(gG==1)
                {
                    system("cls");
                    cout << "Anda Mengalami Sakit Hipertensi" << endl;
                    cout << "Untuk meredakan gejala tersebut, perawatan yang bisa dilakukan : " << endl;
                    cout << "1. Mengubah pola makan menjadi lebih sehat" << endl;
                    cout << "2. Kelola stress, Olahraga adalah cara terbaik untuk mengelol Stress" << endl;
                    exit(0);
                            }
                else if(gG==2)
                {
                    system("cls");
                    cout << "Anda Mengalami Sakit Migrain" << endl;
                    cout << "Gejala penyakit ini bisa diredakan dengan mengombinasi perawatan mandiri, penggunaan obat, serta perubahan gaya hidup" << endl;
                    exit(0);
                }
            }while (true);
            break;
        }
        default :
        {
        system ("cls");
        cout << "Input salah. Ingin memasukkan inputan ulang? (Y/N) : ";
        cin >> ulangi;
        if (ulangi=="y" || ulangi=="Y")
        {continue;}
        else
        {exit(0);}
        break;
        }
    }
    }while (true);
}
