//judul : Membuat KRS dan KHS
//Annisa Hamatul Chasanah
//11 Okt 2022

#include <iostream>
using namespace std;

//kamus
int sks1, sks2, sks3, sks4, sks5, sks6, sks7, totsks, jmlh, a, jmlhmk;
float totnilai, rata,persentgs1, persentgs2, persentgs3, persentgs4, persentgs5, persentgs6, persentgs7;
float persenuts1, persenuts2, persenuts3, persenuts4, persenuts5, persenuts6, persenuts7;
float persenuas1, persenuas2, persenuas3, persenuas4, persenuas5, persenuas6, persenuas7;
float nilaitgs1, nilaitgs2, nilaitgs3, nilaitgs4, nilaitgs5, nilaitgs6, nilaitgs7;
float nilaiuts1, nilaiuts2, nilaiuts3, nilaiuts4, nilaiuts5, nilaiuts6, nilaiuts7;
float nilaiuas1, nilaiuas2, nilaiuas3, nilaiuas4, nilaiuas5, nilaiuas6, nilaiuas7;
float jn1, jn2, jn3, jn4, jn5, jn6, jn7;
float ip, ip1, ip2, ip3, ip4, ip5, ip6, ip7;
string pred1, pred2, pred3, pred4, pred5, pred6, pred7;
string nama, nim, prodi, jns, mk1, mk2, mk3, mk4, mk5, mk6, mk7;

//diskripsi
int main(){

    cout << "------------------------------------" << endl;
    cout << "       KARTU RENCANA STUDI          " <<  endl;
    cout << "------------------------------------" << endl;
    cout << "NIM                : " ; getline(cin, nim);
    cout << "NAMA               : " ; getline(cin, nama);
    cout << "Jumlah Mata Kuliah : " ; cin >> jmlhmk;
    cout << endl;

    cout << "Mata Kuliah Ke                 : 1" << endl;
    cout << "Masukkan Mata Kuliah           : " ; cin.ignore(); getline(cin, mk1);
    cout << "SKS                            : " ; cin >> sks1;
    cout << "Teori atau Praktik [T/P/(TP)]  : "; cin >> jns;
    cout << "--------------------------------" << endl;

    do {
    if(jns== "T" || jns=="t"){

            cout << "Persentase Nilai Tugas : " ; cin >> persentgs1;
            cout << "Nilai Tugas            : " ; cin >> nilaitgs1 ;
            cout << "Persentase Nilai UTS   : " ; cin >> persenuts1;
            cout << "Nilai UTS              : " ; cin >> nilaiuts1 ;
            cout << "Persentase Nilai UAS   : " ; cin >> persenuas1;
            cout << "Nilai UAS              : " ; cin >> nilaiuas1 ;

        }
        else if(jns=="P" || jns=="p"){
            cout << "Persentase Nilai Tugas : " ; cin >> persentgs1;
            cout << "Nilai Tugas            : " ; cin >> nilaitgs1 ;
            cout << "Persentase Nilai UTS   : " ; cin >> persenuts1;
            cout << "Nilai UTS              : " ; cin >> nilaiuts1 ;
            cout << "Persentase Nilai UAS   : " ; cin >> persenuas1;
            cout << "Nilai UAS              : " ; cin >> nilaiuas1 ;
        }
        else{
            cout << "Persentase Nilai Tugas Teori : " ; cin >> persentgs1;
            cout << "Nilai Tugas Teori            : " ; cin >> nilaitgs1 ;
            cout << "Persentase Nilai UTS Teori   : " ; cin >> persenuts1;
            cout << "Nilai UTS Teori              : " ; cin >> nilaiuts1 ;
            cout << "Persentase Nilai UAS Teori   : " ; cin >> persenuas1;
            cout << "Nilai UAS Teori              : " ; cin >> nilaiuas1 ;
            cout << endl;
            cout << "Persentase Nilai Tugas Praktik : " ; cin >> persentgs1;
            cout << "Nilai Tugas Praktik            : " ; cin >> nilaitgs1 ;
            cout << "Persentase Nilai UTS Praktik   : " ; cin >> persenuts1;
            cout << "Nilai UTS Praktik              : " ; cin >> nilaiuts1 ;
            cout << "Persentase Nilai UAS Praktik   : " ; cin >> persenuas1;
            cout << "Nilai UAS Praktik              : " ; cin >> nilaiuas1 ;
        }
        if(persentgs1+persenuts1+persenuas1!=100){
            cout << "Inputan salah, Persentase melebihi/kurang dari 100." << endl ;
            cout << "Masukkan inputan ulang!" << endl << endl;
        }
        }while(persentgs1+persenuts1+persenuas1!=100);

        cout << endl << endl;

    if (jmlhmk >= 2){

    cout << "Mata Kuliah Ke                 : 2" << endl;
    cout << "Masukkan Mata Kuliah           : " ; cin.ignore();getline(cin, mk2);
    cout << "SKS                            : " ; cin >> sks2;
    cout << "Teori atau Praktik [T/P/(TP)]  : "; cin >> jns;
    cout << "--------------------------------" << endl;

    do {
        if(jns== "T" || jns=="t"){

            cout << "Persentase Nilai Tugas : " ; cin >> persentgs2;
            cout << "Nilai Tugas            : " ; cin >> nilaitgs2 ;
            cout << "Persentase Nilai UTS   : " ; cin >> persenuts2;
            cout << "Nilai UTS              : " ; cin >> nilaiuts2 ;
            cout << "Persentase Nilai UAS   : " ; cin >> persenuas2;
            cout << "Nilai UAS              : " ; cin >> nilaiuas2 ;

        }
        else if(jns=="P" || jns=="p"){
            cout << "Persentase Nilai Tugas : " ; cin >> persentgs2;
            cout << "Nilai Tugas            : " ; cin >> nilaitgs2 ;
            cout << "Persentase Nilai UTS   : " ; cin >> persenuts2;
            cout << "Nilai UTS              : " ; cin >> nilaiuts2 ;
            cout << "Persentase Nilai UAS   : " ; cin >> persenuas2;
            cout << "Nilai UAS              : " ; cin >> nilaiuas2 ;
        }
        else{
            cout << "Persentase Nilai Tugas Teori : " ; cin >> persentgs2;
            cout << "Nilai Tugas Teori            : " ; cin >> nilaitgs2 ;
            cout << "Persentase Nilai UTS Teori   : " ; cin >> persenuts2;
            cout << "Nilai UTS Teori              : " ; cin >> nilaiuts2 ;
            cout << "Persentase Nilai UAS Teori   : " ; cin >> persenuas2;
            cout << "Nilai UAS Teori              : " ; cin >> nilaiuas2 ;
            cout << endl;
            cout << "Persentase Nilai Tugas Praktik : " ; cin >> persentgs2;
            cout << "Nilai Tugas Praktik            : " ; cin >> nilaitgs2 ;
            cout << "Persentase Nilai UTS Praktik   : " ; cin >> persenuts2;
            cout << "Nilai UTS Praktik              : " ; cin >> nilaiuts2 ;
            cout << "Persentase Nilai UAS Praktik   : " ; cin >> persenuas2;
            cout << "Nilai UAS Praktik              : " ; cin >> nilaiuas2 ;
        }
        if(persentgs2+persenuts2+persenuas2!=100){
            cout << "Inputan salah, Persentase melebihi /kurang dari 100." << endl ;
            cout << "Masukkan inputan ulang!" << endl << endl;
        }
        }while(persentgs2+persenuts2+persenuas2!=100);

        cout << endl << endl;
    }

    if(jmlhmk>=3) {

    cout << "Mata Kuliah Ke                 : 3" << endl;
    cout << "Masukkan Mata Kuliah           : " ; cin.ignore();getline(cin, mk3);
    cout << "SKS                            : " ; cin >> sks3;
    cout << "Teori atau Praktik [T/P/(TP)]  : "; cin >> jns;
    cout << "--------------------------------" << endl;

    do {
    if(jns== "T" || jns=="t"){

            cout << "Persentase Nilai Tugas : " ; cin >> persentgs3;
            cout << "Nilai Tugas            : " ; cin >> nilaitgs3 ;
            cout << "Persentase Nilai UTS   : " ; cin >> persenuts3;
            cout << "Nilai UTS              : " ; cin >> nilaiuts3 ;
            cout << "Persentase Nilai UAS   : " ; cin >> persenuas3;
            cout << "Nilai UAS              : " ; cin >> nilaiuas3 ;

        }
        else if(jns=="P" || jns=="p"){
            cout << "Persentase Nilai Tugas : " ; cin >> persentgs3;
            cout << "Nilai Tugas            : " ; cin >> nilaitgs3 ;
            cout << "Persentase Nilai UTS   : " ; cin >> persenuts3;
            cout << "Nilai UTS              : " ; cin >> nilaiuts3 ;
            cout << "Persentase Nilai UAS   : " ; cin >> persenuas3;
            cout << "Nilai UAS              : " ; cin >> nilaiuas3 ;
        }
        else{
            cout << "Persentase Nilai Tugas Teori : " ; cin >> persentgs3;
            cout << "Nilai Tugas Teori            : " ; cin >> nilaitgs3 ;
            cout << "Persentase Nilai UTS Teori   : " ; cin >> persenuts3;
            cout << "Nilai UTS Teori              : " ; cin >> nilaiuts3 ;
            cout << "Persentase Nilai UAS Teori   : " ; cin >> persenuas3;
            cout << "Nilai UAS Teori              : " ; cin >> nilaiuas3 ;
            cout << endl;
            cout << "Persentase Nilai Tugas Praktik : " ; cin >> persentgs3;
            cout << "Nilai Tugas Praktik            : " ; cin >> nilaitgs3 ;
            cout << "Persentase Nilai UTS Praktik   : " ; cin >> persenuts3;
            cout << "Nilai UTS Praktik              : " ; cin >> nilaiuts3 ;
            cout << "Persentase Nilai UAS Praktik   : " ; cin >> persenuas3;
            cout << "Nilai UAS Praktik              : " ; cin >> nilaiuas3 ;
        }
        if(persentgs3+persenuts3+persenuas3!=100){
            cout << "Inputan salah, Persentase melebihi/kurang dari 100." << endl ;
            cout << "Masukkan inputan ulang!" << endl << endl;
        }
        }while(persentgs3+persenuts3+persenuas3!=100);

        cout << endl << endl;
    }

    if(jmlhmk>=4){

    cout << "Mata Kuliah Ke                 : 4" << endl;
    cout << "Masukkan Mata Kuliah           : " ; cin.ignore();getline(cin, mk4);
    cout << "SKS                            : " ; cin >> sks4;
    cout << "Teori atau Praktik [T/P/(TP)]  : "; cin >> jns;
    cout << "--------------------------------" << endl;

    do {
    if(jns== "T" || jns=="t"){

            cout << "Persentase Nilai Tugas : " ; cin >> persentgs4;
            cout << "Nilai Tugas            : " ; cin >> nilaitgs4 ;
            cout << "Persentase Nilai UTS   : " ; cin >> persenuts4;
            cout << "Nilai UTS              : " ; cin >> nilaiuts4 ;
            cout << "Persentase Nilai UAS   : " ; cin >> persenuas4;
            cout << "Nilai UAS              : " ; cin >> nilaiuas4 ;

        }
        else if(jns=="P" || jns=="p"){
            cout << "Persentase Nilai Tugas : " ; cin >> persentgs4;
            cout << "Nilai Tugas            : " ; cin >> nilaitgs4 ;
            cout << "Persentase Nilai UTS   : " ; cin >> persenuts4;
            cout << "Nilai UTS              : " ; cin >> nilaiuts4 ;
            cout << "Persentase Nilai UAS   : " ; cin >> persenuas4;
            cout << "Nilai UAS              : " ; cin >> nilaiuas4 ;
        }
        else{
            cout << "Persentase Nilai Tugas Teori : " ; cin >> persentgs4;
            cout << "Nilai Tugas Teori            : " ; cin >> nilaitgs4 ;
            cout << "Persentase Nilai UTS Teori   : " ; cin >> persenuts4;
            cout << "Nilai UTS Teori              : " ; cin >> nilaiuts4 ;
            cout << "Persentase Nilai UAS Teori   : " ; cin >> persenuas4;
            cout << "Nilai UAS Teori              : " ; cin >> nilaiuas4 ;
            cout << endl;
            cout << "Persentase Nilai Tugas Praktik : " ; cin >> persentgs4;
            cout << "Nilai Tugas Praktik            : " ; cin >> nilaitgs4 ;
            cout << "Persentase Nilai UTS Praktik   : " ; cin >> persenuts4;
            cout << "Nilai UTS Praktik              : " ; cin >> nilaiuts4 ;
            cout << "Persentase Nilai UAS Praktik   : " ; cin >> persenuas4;
            cout << "Nilai UAS Praktik              : " ; cin >> nilaiuas4 ;
        }
        if(persentgs4+persenuts4+persenuas4!=100){
            cout << "Inputan salah, Persentase melebihi/kurang dari 100." << endl ;
            cout << "Masukkan inputan ulang!" << endl << endl;
        }
        }while(persentgs4+persenuts4+persenuas4!=100);

        cout << endl << endl;
    }

    if(jmlhmk >= 5){

    cout << "Mata Kuliah Ke                 : 5" << endl;
    cout << "Masukkan Mata Kuliah           : " ; cin.ignore();getline(cin, mk5);
    cout << "SKS                            : " ; cin >> sks5;
    cout << "Teori atau Praktik [T/P/(TP)]  : "; cin >> jns;
    cout << "--------------------------------" << endl;

    do {
    if(jns== "T" || jns=="t"){

            cout << "Persentase Nilai Tugas : " ; cin >> persentgs5;
            cout << "Nilai Tugas            : " ; cin >> nilaitgs5 ;
            cout << "Persentase Nilai UTS   : " ; cin >> persenuts5;
            cout << "Nilai UTS              : " ; cin >> nilaiuts5 ;
            cout << "Persentase Nilai UAS   : " ; cin >> persenuas5;
            cout << "Nilai UAS              : " ; cin >> nilaiuas5 ;

        }
        else if(jns=="P" || jns=="p"){
            cout << "Persentase Nilai Tugas : " ; cin >> persentgs5;
            cout << "Nilai Tugas            : " ; cin >> nilaitgs5 ;
            cout << "Persentase Nilai UTS   : " ; cin >> persenuts5;
            cout << "Nilai UTS              : " ; cin >> nilaiuts5 ;
            cout << "Persentase Nilai UAS   : " ; cin >> persenuas5;
            cout << "Nilai UAS              : " ; cin >> nilaiuas5 ;
        }
        else{
            cout << "Persentase Nilai Tugas Teori : " ; cin >> persentgs5;
            cout << "Nilai Tugas Teori            : " ; cin >> nilaitgs5 ;
            cout << "Persentase Nilai UTS Teori   : " ; cin >> persenuts5;
            cout << "Nilai UTS Teori              : " ; cin >> nilaiuts5 ;
            cout << "Persentase Nilai UAS Teori   : " ; cin >> persenuas5;
            cout << "Nilai UAS Teori              : " ; cin >> nilaiuas5 ;
            cout << endl;
            cout << "Persentase Nilai Tugas Praktik : " ; cin >> persentgs5;
            cout << "Nilai Tugas Praktik            : " ; cin >> nilaitgs5 ;
            cout << "Persentase Nilai UTS Praktik   : " ; cin >> persenuts5;
            cout << "Nilai UTS Praktik              : " ; cin >> nilaiuts5 ;
            cout << "Persentase Nilai UAS Praktik   : " ; cin >> persenuas5;
            cout << "Nilai UAS Praktik              : " ; cin >> nilaiuas5 ;
        }
        if(persentgs5+persenuts5+persenuas5!=100){
            cout << "Inputan salah, Persentase melebihi/kurang dari 100." << endl ;
            cout << "Masukkan inputan ulang!" << endl << endl;
        }
        }while(persentgs5+persenuts5+persenuas5!=100);

        cout << endl << endl;
    }

    if(jmlhmk>=6){

    cout << "Mata Kuliah Ke                 : 6" << endl;
    cout << "Masukkan Mata Kuliah           : " ; cin.ignore();getline(cin, mk6);
    cout << "SKS                            : " ; cin >> sks6;
    cout << "Teori atau Praktik [T/P/(TP)]  : "; cin >> jns;
    cout << "--------------------------------" << endl;

    do {
    if(jns== "T" || jns=="t"){

            cout << "Persentase Nilai Tugas : " ; cin >> persentgs6;
            cout << "Nilai Tugas            : " ; cin >> nilaitgs6 ;
            cout << "Persentase Nilai UTS   : " ; cin >> persenuts6;
            cout << "Nilai UTS              : " ; cin >> nilaiuts6 ;
            cout << "Persentase Nilai UAS   : " ; cin >> persenuas6;
            cout << "Nilai UAS              : " ; cin >> nilaiuas6 ;

        }
        else if(jns=="P" || jns=="p"){
            cout << "Persentase Nilai Tugas : " ; cin >> persentgs6;
            cout << "Nilai Tugas            : " ; cin >> nilaitgs6 ;
            cout << "Persentase Nilai UTS   : " ; cin >> persenuts6;
            cout << "Nilai UTS              : " ; cin >> nilaiuts6 ;
            cout << "Persentase Nilai UAS   : " ; cin >> persenuas6;
            cout << "Nilai UAS              : " ; cin >> nilaiuas6 ;
        }
        else{
            cout << "Persentase Nilai Tugas Teori : " ; cin >> persentgs6;
            cout << "Nilai Tugas Teori            : " ; cin >> nilaitgs6 ;
            cout << "Persentase Nilai UTS Teori   : " ; cin >> persenuts6;
            cout << "Nilai UTS Teori              : " ; cin >> nilaiuts6 ;
            cout << "Persentase Nilai UAS Teori   : " ; cin >> persenuas6;
            cout << "Nilai UAS Teori              : " ; cin >> nilaiuas6 ;
            cout << endl;
            cout << "Persentase Nilai Tugas Praktik : " ; cin >> persentgs6;
            cout << "Nilai Tugas Praktik            : " ; cin >> nilaitgs6 ;
            cout << "Persentase Nilai UTS Praktik   : " ; cin >> persenuts6;
            cout << "Nilai UTS Praktik              : " ; cin >> nilaiuts6 ;
            cout << "Persentase Nilai UAS Praktik   : " ; cin >> persenuas6;
            cout << "Nilai UAS Praktik              : " ; cin >> nilaiuas6 ;
        }
        if(persentgs6+persenuts6+persenuas6!=100){
            cout << "Inputan salah, Persentase melebihi/kurang dari 100." << endl ;
            cout << "Masukkan inputan ulang!" << endl << endl;
        }
        }while(persentgs6+persenuts6+persenuas6!=100);

        cout << endl << endl;
    }

    if (jmlhmk >= 7){
    cout << "Mata Kuliah Ke                 : 7" << endl;
    cout << "Masukkan Mata Kuliah           : " ; cin.ignore();getline(cin, mk7);
    cout << "SKS                            : " ; cin >> sks7;
    cout << "Teori atau Praktik [T/P/(TP)]  : "; cin >> jns;
    cout << "--------------------------------" << endl;

    do {
    if(jns== "T" || jns=="t"){

            cout << "Persentase Nilai Tugas : " ; cin >> persentgs7;
            cout << "Nilai Tugas            : " ; cin >> nilaitgs7 ;
            cout << "Persentase Nilai UTS   : " ; cin >> persenuts7;
            cout << "Nilai UTS              : " ; cin >> nilaiuts7 ;
            cout << "Persentase Nilai UAS   : " ; cin >> persenuas7;
            cout << "Nilai UAS              : " ; cin >> nilaiuas7 ;

        }
        else if(jns=="P" || jns=="p"){
            cout << "Persentase Nilai Tugas : " ; cin >> persentgs7;
            cout << "Nilai Tugas            : " ; cin >> nilaitgs7 ;
            cout << "Persentase Nilai UTS   : " ; cin >> persenuts7;
            cout << "Nilai UTS              : " ; cin >> nilaiuts7 ;
            cout << "Persentase Nilai UAS   : " ; cin >> persenuas7;
            cout << "Nilai UAS              : " ; cin >> nilaiuas7 ;
        }
        else{
            cout << "Persentase Nilai Tugas Teori : " ; cin >> persentgs7;
            cout << "Nilai Tugas Teori            : " ; cin >> nilaitgs7 ;
            cout << "Persentase Nilai UTS Teori   : " ; cin >> persenuts7;
            cout << "Nilai UTS Teori              : " ; cin >> nilaiuts7 ;
            cout << "Persentase Nilai UAS Teori   : " ; cin >> persenuas7;
            cout << "Nilai UAS Teori              : " ; cin >> nilaiuas7 ;
            cout << endl;
            cout << "Persentase Nilai Tugas Praktik : " ; cin >> persentgs7;
            cout << "Nilai Tugas Praktik            : " ; cin >> nilaitgs7 ;
            cout << "Persentase Nilai UTS Praktik   : " ; cin >> persenuts7;
            cout << "Nilai UTS Praktik              : " ; cin >> nilaiuts7 ;
            cout << "Persentase Nilai UAS Praktik   : " ; cin >> persenuas7;
            cout << "Nilai UAS Praktik              : " ; cin >> nilaiuas7 ;
        }
        if(persentgs7+persenuts7+persenuas7!=100){
            cout << "Inputan salah, Persentase melebihi/kurang dari100." << endl ;
            cout << "Masukkan inputan ulang!" << endl << endl;
        }
        }while(persentgs7+persenuts7+persenuas7!=100);

    }

    cout << endl;
    cout << "------------------------------------" << endl;
    cout << "        KARTU HASIL STUDI           " << endl;
    cout << "   UNIVERSITAS DIAN NUSWANTORO      " << endl;
    cout << "------------------------------------" << endl;
    cout << "NIM            : " << nim << endl;
    cout << "NAMA           : " << nama << endl;
    cout << "JUMLAH MATA KULIAH : " << jmlhmk << endl;
    switch (toupper(nim[0]))
        {
            case 'A' :
            {
                cout << "Fakultas       : Ilmu Komputer" << endl;
                switch (toupper(nim[1]))
                {
                case '1' :
                    {
                      cout << "Jenjang        : S1" << endl;
                      switch(toupper(nim[2]))
                      {
                      case '1' :
                        {
                            cout << "Program Studi  : Teknik Informatika" << endl;
                            break;
                        }
                        case '2' :
                        {
                            cout << "Program Studi  : Sistem Informasi" << endl;
                            break;
                        }
                        case '4' :
                        {
                            cout << "Program Studi  : Desain Komunikasi Visual" << endl;
                            break;
                        }
                        case '5' :
                        {
                            cout << "Program Studi  : Ilmu Komunikasi" << endl;
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
                        cout << "Jenjang        : D3" << endl;
                        switch(toupper(nim[2]))
                        {
                        case '1' :
                            {
                                cout << "Program Studi  : Teknik Informatika" << endl;
                                break;
                            }
                        case '2' :
                            {
                                cout << "Program Studi  : Sistem Informasi" << endl;
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
                cout << "Fakultas       : Ekonomi Dan Bisnis" << endl;
                switch (toupper(nim[1]))
                {
                case '1' :
                    {
                      cout << "Jenjang        : S1" << endl;
                      switch(toupper(nim[2]))
                      {
                      case '1' :
                        {
                            cout << "Program Studi  : Manajemen" << endl;
                            break;
                        }
                        case '2' :
                        {
                            cout << "Program Studi  : Akuntansi" << endl;
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
                        cout << "Jenjang        : D3" << endl;
                        switch(toupper(nim[2]))
                        {
                        case '1' :
                            {
                                cout << "Program Studi  : Manajemen" << endl;
                                break;
                            }
                        case '2' :
                            {
                                cout << "Program Studi  : Akuntansi" << endl;
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
    cout << "--------------------------------" << endl;
    cout << "Mata Kuliah        : " << mk1 << endl;
    cout << "Jumlah SKS         : " << sks1 << endl;
    jn1 = ((nilaitgs1*persentgs1/100)+(nilaiuts1*persenuts1/100)+(nilaiuas1*persenuas1/100));
        if(jn1>=85){
            pred1 = "A";
        }
        else if(jn1>=80 || jn1<85){
            pred1 = "AB";
        }
        else if(jn1>=75 || jn1<80){
            pred1 = "B";
        }
        else if(jn1>=70 || jn1<75){
            pred1 = "BC";
        }
        else if(jn1>=65 || jn1<70){
            pred1 = "C";
        }
        else if(jn1>=60 || jn1<65){
            pred1 = "D";
        }
        else {
            pred1="E" ;
        }
    cout << "Score              : " << jn1 << endl;
    cout << "Predikat           : " << pred1 << endl;
    cout << "--------------------------------" << endl;

    if(jmlhmk >=2 ) {

    cout << "Mata Kuliah        : " << mk2 << endl;
    cout << "Jumlah SKS         : " << sks2 << endl;
    jn2 = ((nilaitgs2*persentgs2/100)+ (nilaiuts2*persenuts2/100)+(nilaiuas2*persenuas2/100));
        if(jn2>=85){
            pred2 = "A";
        }
        else if(jn2>=80 || jn2<85){
            pred2 = "AB";
        }
        else if(jn2>=75 || jn2<80){
            pred2 = "B";
        }
        else if(jn2>=70 || jn2<75){
            pred2 = "BC";
        }
        else if(jn2=65 || jn2<70){
            pred2 = "C";
        }
        else if(jn2>=60 || jn2<65){
            pred2 = "D";
        }
        else {
            pred2="E" ;
        }
    cout << "Score              : " << jn2 << endl;
    cout << "Predikat           : " << pred2 << endl;
    cout << "--------------------------------" << endl;
    }

    if (jmlhmk >= 3) {

    cout << "Mata Kuliah        : " << mk3 << endl;
    cout << "Jumlah SKS         : " << sks3 << endl;
    jn3 = ((nilaitgs3*persentgs3/100)+ (nilaiuts3*persenuts3/100)+(nilaiuas3*persenuas3/100));
        if(jn3>=85){
            pred3 = "A";
        }
        else if(jn3>=80 || jn3<85){
            pred3 = "AB";
        }
        else if(jn3>=75 || jn3<80){
            pred3 = "B";
        }
        else if(jn3>=70 || jn3<75){
            pred3 = "BC";
        }
        else if(jn3>=65 || jn3<70){
            pred3 = "C";
        }
        else if(jn3>=60 || jn3<65){
            pred3 = "D";
        }
        else {
            pred3="E" ;
        }
    cout << "Score              : " << jn3 << endl;
    cout << "Predikat           : " << pred3 << endl;
    cout << "--------------------------------" << endl;
    }

    if (jmlhmk >= 4){

    cout << "Mata Kuliah        : " << mk4 << endl;
    cout << "Jumlah SKS         : " << sks4 << endl;
    jn4 = ((nilaitgs4*persentgs4/100)+ (nilaiuts4*persenuts4/100)+(nilaiuas4*persenuas4/100));
        if(jn4>=85){
            pred4 = "A";
        }
        else if(jn4>=80 || jn4<85){
            pred4 = "AB";
        }
        else if(jn4>=75 || jn4<80){
            pred4 = "B";
        }
        else if(jn4>=70 || jn4<75){
            pred4 = "BC";
        }
        else if(jn4>=65 || jn4<70){
            pred4 = "C";
        }
        else if(jn4>=60 || jn4<65){
            pred4 = "D";
        }
        else {
            pred4="E" ;
        }
    cout << "Score              : " << jn4 << endl;
    cout << "Predikat           : " << pred4 << endl;
    cout << "--------------------------------" << endl;
    }

    if (jmlhmk >= 5) {

    cout << "Mata Kuliah        : " << mk5 << endl;
    cout << "Jumlah SKS         : " << sks5 << endl;
    jn5 = ((nilaitgs5*persentgs5/100)+ (nilaiuts5*persenuts5/100)+(nilaiuas5*persenuas5/100));
        if(jn5>=85){
            pred5 = "A";
        }
        else if(jn5>=80 || jn5<85){
            pred5 = "AB";
        }
        else if(jn5>=75 || jn5<80){
            pred5 = "B";
        }
        else if(jn5>=70 || jn5<75){
            pred5 = "BC";
        }
        else if(jn5>=65 || jn5<75){
            pred5 = "C";
        }
        else if(jn5>=60 || jn5<65){
            pred5 = "D";
        }
        else {
            pred5 ="E" ;
        }
    cout << "Score              : " << jn5 << endl;
    cout << "Predikat           : " << pred5 << endl;
    cout << "--------------------------------" << endl;
    }

    if (jmlhmk >= 6) {

    cout << "Mata Kuliah        : " << mk6 << endl;
    cout << "Jumlah SKS         : " << sks6 << endl;
    jn6 = ((nilaitgs6*persentgs6/100)+ (nilaiuts6*persenuts6/100)+(nilaiuas6*persenuas6/100));
        if(jn6>=85){
            pred6 = "A";
        }
        else if(jn6>=80 || jn6<85){
            pred6 = "AB";
        }
        else if(jn6>=75 || jn6<80){
            pred6 = "B";
        }
        else if(jn6>=70 || jn6<75){
            pred6 = "BC";
        }
        else if(jn6>=65 || jn6<70){
            pred6 = "C";
        }
        else if(jn6>=60 || jn6<65){
            pred6 = "D";
        }
        else {
            pred6 ="E" ;
        }
    cout << "Score              : " << jn6 << endl;
    cout << "Predikat           : " << pred6 << endl;
    cout << "--------------------------------" << endl;
    }

    if (jmlhmk >=7){

    cout << "Mata Kuliah        : " << mk7 << endl;
    cout << "Jumlah SKS         : " << sks7 << endl;
    jn7 = ((nilaitgs7*persentgs7/100)+ (nilaiuts7*persenuts7/100)+(nilaiuas7*persenuas7/100));
        if(jn7>=85){
            pred7 = "A";
        }
        else if(jn7>=80 || jn7<85){
            pred7 = "AB";
        }
        else if(jn7>=75 || jn7<80){
            pred7 = "B";
        }
        else if(jn7>=70 || jn7<75){
            pred7 = "BC";
        }
        else if(jn7>=65 || jn7<70){
            pred7 = "C";
        }
        else if(jn7>=60 || jn7<65){
            pred7 = "D";
        }
        else {
            pred7 ="E" ;
        }
    cout << "Score              : " << jn7 << endl;
    cout << "Predikat           : " << pred7 << endl;
    cout << "--------------------------------" << endl;
    }

    ip1 = (jn1+jn2+jn3+jn4+jn5+jn6+jn7) / jmlhmk;
    cout << "IP Semester        : " << ip1 << endl;
    return 0;
}

