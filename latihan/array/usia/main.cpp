// judul : array lanjutan
// annisa himatul
#include <iostream>
using namespace std;

//kamus
int array[100], data, a;
float rata, total;

//diskripsi
int main(){

    //mencari total
    total = 0;
    while(a <= 10){
        cout << "Masukkan Usia : " ;
        cin >> array[a];
        total = total + array[a];
        a++;
    }
    cout << "total : " << total ;

    //mencari rata-rata
    rata = total/10;
    cout << "Maka rata-ratanya adalah : " << rata << endl;

    //mecari bilangan terkeci;
    return 0;
}
