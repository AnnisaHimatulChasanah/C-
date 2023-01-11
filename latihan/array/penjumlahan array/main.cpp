//judul : array lanjutan
//annisa himatul
#include <iostream>
using namespace std;

//kamus
int array[100], a;
float data, total, rata;

//diskripsi
int main(){
    cout << "Masukkan Jumlah Data Array : "; cin >> data;
    cout << endl;

    total = 0;
    while(a < data){
        cout << "data ke - " << a+1 << ": ";
        cin >> array[a];
        total = total + array[a];
        a++;
    }
    cout << "Maka totalnya adalah : " << total << endl;
    rata = total/data;
    cout << "Maka rata ratanya adalah : " << rata << endl;

    cout << "Pengurutan array" << endl;
    int i, b, temp;
    a = 0;
    while(a < data)
    {
        b = a + 1;
        while (b < data)
        {
            if (array[a] > array[b])
            {
                temp = array[a];
                array[a] = array[b];
                array[b] = temp;
            }
            b = b +1;
        }
        a = a + 1;
    }

    a = 0;
    while(a<data)
    {
        cout << array[a] << " " ;
        a = a+1;
    }

    cout << endl;
    //menghitung ganjil genap
    int genap=0, ganjil=0, jml_genap=0, jml_ganjil=0;
    a = 0;
    while(a<data)
    {
        if(array[a]%2 == 0)
        {
            genap = genap + 1;
            jml_genap = jml_genap + array[a];
        }
        else{
            ganjil = ganjil +1;
            jml_ganjil = jml_ganjil + array[a];
        }
        a = a + 1;
    }
    cout << "total hasil bilangan genap : " << genap;
    cout << "\ntotal hasil bilangan ganjil : " << ganjil;
    cout << "\nJumlah hasil bilangan genap : " << jml_genap;
    cout << "\nJumlah hasil bilangan ganjil : " << jml_ganjil;
    return 0;
}
