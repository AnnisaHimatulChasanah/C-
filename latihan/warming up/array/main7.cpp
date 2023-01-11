//judul : array
#include <iostream>
using namespace std;

//kamus
int data[7];
int x, y, wadah;

//diskripsi
int main()
{
    x=0;
    while(x < 7)
    {
        cout << "Masukkan Data : " ; cin >> data[x];
        x = x + 1;
    }

    x = 0 ;
    while(x < 7)
    {
        y = x + 1;
        while(y < 7)
        {
            if(data[x] > data[y])
            {
                wadah = data[x];
                data[x] = data[y];
                data[y] = wadah;
            }
            y = y + 1;

        }x = x + 1;
    }
        x = 0;
        while(x < 7)
        {
            cout << data[x] << " ";
            x = x + 1;
        }
    return 0;
}
