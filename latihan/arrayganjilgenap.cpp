//judul : menjumlahkan dan mencari ada berapa bilangan ganjil dan genap menggunakan array
// nama : annisa himatul
// nim : A11.2213980
#include <iostream>
using namespace std;
//kamus
int genap = 0, ganjil = 0, jmlgenap = 0, jmlganjil=0, totalempat=0, jmlempat=0;
int n, i;
int data[100];

//diskripsi
int main(){
    cout << "Masukkan jumlah bilangan yang ingin diinput : ";
    cin >> n;

//    mengisi element array
    i = 0;
    while(i < n)
    {
        cout << "Masukkan element array ke - " << i + 1 << " ";
        cin >> data[i];
        i = i + 1;
    }

//    mencetak element array
    i = 0;
    while(i < n)
    {
        cout << data[i] << " ";
        i = i+1;
    }
    cout << endl;
//    melalukan pencarian jumlah dan total bilangan genap
    i = 0;
    do{
            if(data[i] %2 == 0){
                genap = genap + 1;
                jmlgenap = jmlgenap + data[i];
            }else{
                ganjil = ganjil + 1;
                jmlganjil = jmlganjil + data[i];
            }
            if(data[i] %4 == 0)
            {
                totalempat = totalempat + 1;
                jmlempat = jmlempat + data[i];
            }
        i = i + 1;
    }while(i<n);

    cout << "Total bilangan genap : " << genap << endl;
    cout << "Total bilangan ganjil : " << ganjil << endl;
    cout << "Jumlah bilangan genap : " << jmlgenap << endl;
    cout << "Jumlah bilangan ganjil : " << jmlganjil<< endl;
    cout << "Total bilangan yang dibagi 4 : " << totalempat << endl;
    cout << "Jumlah bilangan yang dibagi 4 : " << jmlempat<< endl;
    return 0;
}
