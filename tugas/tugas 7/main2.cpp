//judul menacari 5 bilangan terbesar
//NIM : A11.2022.13980
//NAMA : Annisa Himatul Chasanah
//Modify : 05 Oktober 2022

#include <iostream>
using namespace std;

//kamus
int A, B, C, D, E;

//diskripsi
main()
{
    cout << "Mencari 5 Bilangan Terbesar" << endl << endl;
    cout << "Masukkan Nilai A : " ; cin >> A ;
    cout << "Masukkan Nilai B : " ; cin >> B ;
    cout << "Masukkan Nilai C : " ; cin >> C ;
    cout << "Masukkan Nilai D : " ; cin >> D ;
    cout << "Masukkan Nilai E : " ; cin >> E ;
    cout << endl;

    if( A > B && B > C && C > D && D > E)
    {
        cout << "Maka, urutkan nilai dari yang terbesar adalah " << A << ", " << B << ", " << C << ", " << D << " dan " << E ;
    }
     else if( A > B && B > C && C > E && E > D)
    {
        cout << "Maka, urutkan nilai dari yang terbesar adalah " << A << ", " << B << ", " << C << ", " << E << " dan " << D ;
    }
    else if( A > B && B > D && D > C && C > E)
    {
        cout << "Maka, urutkan nilai dari yang terbesar adalah " << A << ", " << B << ", " << D << ", " << C << " dan " << E ;
    }
    else if( A > B && B > D && D > E && E > C)
    {
        cout << "Maka, urutkan nilai dari yang terbesar adalah " << A << ", " << B << ", " << D << ", " << E << " dan " << C ;
    }
    else if( A > B && B > E && E > C && C > D)
    {
        cout << "Maka, urutkan nilai dari yang terbesar adalah " << A << ", " << B << ", " << E << ", " << C << " dan " << D ;
    }
    else if( A > B && B > E && E > D && D > C)
    {
        cout << "Maka, urutkan nilai dari yang terbesar adalah " << A << ", " << B << ", " << E << ", " << D << " dan " << E ;
    }
    else if( A > C && C > B && B > D && D > E)
    {
        cout << "Maka, urutkan nilai dari yang terbesar adalah " << A << ", " << C << ", " << B << ", " << D << " dan " << E ;
    }
    else if( A > C && C > B && B > E && E > D)
    {
        cout << "Maka, urutkan nilai dari yang terbesar adalah " << A << ", " << C << ", " << B << ", " << E << " dan " << D ;
    }
    else if( A > C && C > D && D > B && B > E)
    {
        cout << "Maka, urutkan nilai dari yang terbesar adalah " << A << ", " << C << ", " << D << ", " << B << " dan " << E ;
    }
    else if( A > C && C > D && D > E && E > B)
    {
        cout << "Maka, urutkan nilai dari yang terbesar adalah " << A << ", " << C << ", " << D << ", " << E << " dan " << B ;
    }
    else if( A > C && C > E && E > B && B > D)
    {
        cout << "Maka, urutkan nilai dari yang terbesar adalah " << A << ", " << C << ", " << E << ", " << B << " dan " << D ;
    }
    else if( A > C && C > E && E > D && D > B)
    {
        cout << "Maka, urutkan nilai dari yang terbesar adalah " << A << ", " << C << ", " << E << ", " << D << " dan " << B ;
    }
    else if( A > D && D > B && B > C && C > E)
    {
        cout << "Maka, urutkan nilai dari yang terbesar adalah " << A << ", " << D << ", " << B << ", " << C << " dan " << E ;
    }
    else if( A > D && D > B && B > E && E > C)
    {
        cout << "Maka, urutkan nilai dari yang terbesar adalah " << A << ", " << D << ", " << B << ", " << E << " dan " << C ;
    }
    else if( A > D && D > C && C > B && B > E)
    {
        cout << "Maka, urutkan nilai dari yang terbesar adalah " << A << ", " << D << ", " << C << ", " << B << " dan " << E ;
    }
    else if( A > D && D > C && C > E && E > B)
    {
        cout << "Maka, urutkan nilai dari yang terbesar adalah " << A << ", " << D << ", " << C << ", " << E << " dan " << B ;
    }
    else if( A > D && D > E && E > B && B > C)
    {
        cout << "Maka, urutkan nilai dari yang terbesar adalah " << A << ", " << D << ", " << E << ", " << B << " dan " << C ;
    }
    else if( A > D && D > E && E > C && C > B)
    {
        cout << "Maka, urutkan nilai dari yang terbesar adalah " << A << ", " << D << ", " << E << ", " << C << " dan " << B ;
    }
    else if( A > E && E > B && B > C && C > D)
    {
        cout << "Maka, urutkan nilai dari yang terbesar adalah " << A << ", " << E << ", " << B << ", " << C << " dan " << D ;
    }
    else if( A > E && E > B && B > D && D > C)
    {
        cout << "Maka, urutkan nilai dari yang terbesar adalah " << A << ", " << E << ", " << B << ", " << D << " dan " << C ;
    }
    else if( A > E && E > C && C > B && B > D)
    {
        cout << "Maka, urutkan nilai dari yang terbesar adalah " << A << ", " << E << ", " << C << ", " << B << " dan " << D ;
    }
    else if( A > E && E > C && C > D && D > B)
    {
        cout << "Maka, urutkan nilai dari yang terbesar adalah " << A << ", " << E << ", " << C << ", " << D << " dan " << B ;
    }
    else if( A > E && E > D && D > B && B > C)
    {
        cout << "Maka, urutkan nilai dari yang terbesar adalah " << A << ", " << E << ", " << D << ", " << B << " dan " << C ;
    }
    else if( A > E && E > D && D > C && C > B)
    {
        cout << "Maka, urutkan nilai dari yang terbesar adalah " << A << ", " << E << ", " << D << ", " << C << " dan " << B ;
    }
    else if( B > A && A > C && C > D && D > E)
    {
        cout << "Maka, urutkan nilai dari yang terbesar adalah " << B << ", " << A << ", " << C << ", " << D << " dan " << E ;
    }
    else if( B > A && A > C && C > E && E > D)
    {
        cout << "Maka, urutkan nilai dari yang terbesar adalah " << B << ", " << A << ", " << C << ", " << E << " dan " << D ;
    }
    else if( B > A && A > D && D > C && C > E)
    {
        cout << "Maka, urutkan nilai dari yang terbesar adalah " << B << ", " << A << ", " << D << ", " << C << " dan " << E ;
    }
    else if( B > A && A > D && D > E && E > C)
    {
        cout << "Maka, urutkan nilai dari yang terbesar adalah " << B << ", " << A << ", " << D << ", " << E << " dan " << C ;
    }
    else if( B > A && A > E && E > C && C > D)
    {
        cout << "Maka, urutkan nilai dari yang terbesar adalah " << B << ", " << A << ", " << E << ", " << C << " dan " << D ;
    }
    else if( B > A && A > E && E > D && D > C)
    {
        cout << "Maka, urutkan nilai dari yang terbesar adalah " << B << ", " << A << ", " << E << ", " << D << " dan " << C ;
    }
    else if( B > C && C > A && A > D && D > E)
    {
        cout << "Maka, urutkan nilai dari yang terbesar adalah " << B << ", " << C << ", " << A << ", " << D << " dan " << E ;
    }
    else if( B > C && C > A && A > E && E > D)
    {
        cout << "Maka, urutkan nilai dari yang terbesar adalah " << B << ", " << C << ", " << A << ", " << E << " dan " << D ;
    }
    else if( B > C && C > D && D > A && A > E)
    {
        cout << "Maka, urutkan nilai dari yang terbesar adalah " << B << ", " << C << ", " << D << ", " << A << " dan " << E ;
    }
    else if( B > C && C > D && D > E && E > A)
    {
        cout << "Maka, urutkan nilai dari yang terbesar adalah " << B << ", " << C << ", " << D << ", " << E << " dan " << A ;
    }else if( B > C && C > E && E > A && A > D)
    {
        cout << "Maka, urutkan nilai dari yang terbesar adalah " << B << ", " << C << ", " << E << ", " << A << " dan " << D ;
    }
    else if( B > C && C > E && E > D && D > A)
    {
        cout << "Maka, urutkan nilai dari yang terbesar adalah " << B << ", " << C << ", " << E << ", " << D << " dan " << A ;
    }
    else if( B > D && D > A && A > C && C > E)
    {
        cout << "Maka, urutkan nilai dari yang terbesar adalah " << B << ", " << D << ", " << A << ", " << C << " dan " << E ;
    }
    else if( B > D && D > A && A > E && E > C)
    {
        cout << "Maka, urutkan nilai dari yang terbesar adalah " << B << ", " << D << ", " << A << ", " << E << " dan " << C ;
    }
    else if( B > D && D > C && C > A && A > E)
    {
        cout << "Maka, urutkan nilai dari yang terbesar adalah " << B << ", " << D << ", " << C << ", " << A << " dan " << E ;
    }
    else if( B > D && D > C && C > E && E > A)
    {
        cout << "Maka, urutkan nilai dari yang terbesar adalah " << B << ", " << D << ", " << C << ", " << E << " dan " << A ;
    }
    else if( B > D && D > E && E > A && A > C)
    {
        cout << "Maka, urutkan nilai dari yang terbesar adalah " << B << ", " << D << ", " << E << ", " << A << " dan " << C ;
    }
    else if( B > D && D > E && E > C && C > A)
    {
        cout << "Maka, urutkan nilai dari yang terbesar adalah " << B << ", " << D << ", " << E << ", " << C << " dan " << A ;
    }
    else if( B > E && E > A && A > C && C > D)
    {
        cout << "Maka, urutkan nilai dari yang terbesar adalah " << B << ", " << E << ", " << A << ", " << C << " dan " << D ;
    }
    else if( B > E && E > A && A > D && D > C)
    {
        cout << "Maka, urutkan nilai dari yang terbesar adalah " << B << ", " << E << ", " << A << ", " << D << " dan " << C ;
    }
    else if( B > E && E > C && C > A && A > D)
    {
        cout << "Maka, urutkan nilai dari yang terbesar adalah " << B << ", " << E << ", " << C << ", " << A << " dan " << D ;
    }
    else if( B > E && E > C && C > D && D > A)
    {
        cout << "Maka, urutkan nilai dari yang terbesar adalah " << B << ", " << E << ", " << C << ", " << D << " dan " << A ;
    }
    else if( B > E && E > D && D > A && A > C)
    {
        cout << "Maka, urutkan nilai dari yang terbesar adalah " << B << ", " << E << ", " << D << ", " << A << " dan " << C ;
    }
    else if( B > E && E > D && D > C && C > A)
    {
        cout << "Maka, urutkan nilai dari yang terbesar adalah " << B << ", " << E << ", " << D << ", " << C << " dan " << A ;
    }
    else if( C > A && A > B && B > E && E > D)
    {
        cout << "Maka, urutkan nilai dari yang terbesar adalah " << C << ", " << A << ", " << B << ", " << E << " dan " << D ;
    }
    else if( C > A && A > D && D > B && B > E)
    {
        cout << "Maka, urutkan nilai dari yang terbesar adalah " << C << ", " << A << ", " << D << ", " << B << " dan " << E ;
    }
    else if( C > A && A > D && D > E && E > B)
    {
        cout << "Maka, urutkan nilai dari yang terbesar adalah " << C << ", " << A << ", " << D << ", " << E << " dan " << B ;
    }
    else if( C > A && A > E && E > B && B > D)
    {
        cout << "Maka, urutkan nilai dari yang terbesar adalah " << C << ", " << A << ", " << E << ", " << B << " dan " << D ;
    }
    else if( C > A && A > E && E > D && D > B)
    {
        cout << "Maka, urutkan nilai dari yang terbesar adalah " << C << ", " << A << ", " << E << ", " << D << " dan " << B ;
    }
    else if( C > A && A > B && B > D && D > E)
    {
        cout << "Maka, urutkan nilai dari yang terbesar adalah " << C << ", " << A << ", " << B << ", " << D << " dan " << E ;
    }
    else if( C > B && B > A && A > D && D > E)
    {
        cout << "Maka, urutkan nilai dari yang terbesar adalah " << C << ", " << B << ", " << A << ", " << D << " dan " << E ;
    }
    else if( C > B && B > A && A > E && E > D)
    {
        cout << "Maka, urutkan nilai dari yang terbesar adalah " << C << ", " << B << ", " << A << ", " << E << " dan " << D ;
    }
    else if( C > B && B > D && D > A && A > E)
    {
        cout << "Maka, urutkan nilai dari yang terbesar adalah " << C << ", " << B << ", " << D << ", " << A << " dan " << E ;
    }
    else if( C > B && B > D && D > E && E > A)
    {
        cout << "Maka, urutkan nilai dari yang terbesar adalah " << C << ", " << B << ", " << D << ", " << E << " dan " << A ;
    }
    else if( C > B && B > E && E > A && A > D)
    {
        cout << "Maka, urutkan nilai dari yang terbesar adalah " << C << ", " << B << ", " << E << ", " << A << " dan " << D ;
    }
    else if( C > B && B > E && E > D && D > A)
    {
        cout << "Maka, urutkan nilai dari yang terbesar adalah " << C << ", " << B << ", " << E << ", " << D << " dan " << A ;
    }
    else if( C > D && D > A && A > B && B > E)
    {
        cout << "Maka, urutkan nilai dari yang terbesar adalah " << C << ", " << D << ", " << A << ", " << B << " dan " << E ;
    }
    else if( C > D && D > A && A > E && E > B)
    {
        cout << "Maka, urutkan nilai dari yang terbesar adalah " << C << ", " << D << ", " << A << ", " << E << " dan " << B ;
    }
    else if( C > D && D > B && B > A && A > E)
    {
        cout << "Maka, urutkan nilai dari yang terbesar adalah " << C << ", " << D << ", " << B << ", " << A << " dan " << E ;
    }
    else if( C > D && D > B && B > E && E > A)
    {
        cout << "Maka, urutkan nilai dari yang terbesar adalah " << C << ", " << D << ", " << B << ", " << E << " dan " << A ;
    }
    else if( C > D && D > E && E > A && A > B)
    {
        cout << "Maka, urutkan nilai dari yang terbesar adalah " << C << ", " << D << ", " << E << ", " << A << " dan " << B ;
    }
    else if( C > D && D > E && E > B && B > A)
    {
        cout << "Maka, urutkan nilai dari yang terbesar adalah " << C << ", " << D << ", " << E << ", " << B << " dan " << A ;
    }
    else if( C > E && E > A && A > B && B > D)
    {
        cout << "Maka, urutkan nilai dari yang terbesar adalah " << C << ", " << E << ", " << A << ", " << B << " dan " << D ;
    }
    else if( C > E && E > A && A > D && D > B)
    {
        cout << "Maka, urutkan nilai dari yang terbesar adalah " << C << ", " << E << ", " << A << ", " << D << " dan " << B ;
    }
    else if( C > E && E > B && B > A && A > D)
    {
        cout << "Maka, urutkan nilai dari yang terbesar adalah " << C << ", " << E << ", " << B << ", " << A << " dan " << D ;
    }
    else if( C > E && E > B && B > D && D > A)
    {
        cout << "Maka, urutkan nilai dari yang terbesar adalah " << C << ", " << E << ", " << B << ", " << D << " dan " << A ;
    }
    else if( C > E && E > D && D > A && A > B)
    {
        cout << "Maka, urutkan nilai dari yang terbesar adalah " << C << ", " << E << ", " << D << ", " << A << " dan " << B ;
    }
    else if( C > E && E > D && D > B && B > A)
    {
        cout << "Maka, urutkan nilai dari yang terbesar adalah " << C << ", " << E << ", " << D << ", " << B << " dan " << A ;
    }
    else if( D > A && A > B && B > C && C > E)
    {
        cout << "Maka, urutkan nilai dari yang terbesar adalah " << D << ", " << A << ", " << B << ", " << C << " dan " << E ;
    }
    else if( D > A && A > B && B > E && E > C)
    {
        cout << "Maka, urutkan nilai dari yang terbesar adalah " << D << ", " << A << ", " << B << ", " << E << " dan " << C ;
    }
    else if( D > A && A > C && C > B && B > E)
    {
        cout << "Maka, urutkan nilai dari yang terbesar adalah " << D << ", " << A << ", " << C << ", " << B << " dan " << E ;
    }
    else if( D > A && A > C && C > E && E > B)
    {
        cout << "Maka, urutkan nilai dari yang terbesar adalah " << D << ", " << A << ", " << C << ", " << E << " dan " << B ;
    }
    else if( D > A && A > E && E > B && B > C)
    {
        cout << "Maka, urutkan nilai dari yang terbesar adalah " << D << ", " << A << ", " << E << ", " << B << " dan " << C ;
    }
    else if( D > A && A > E && E > C && C > B)
    {
        cout << "Maka, urutkan nilai dari yang terbesar adalah " << D << ", " << A << ", " << E << ", " << C << " dan " << B ;
    }
    else if( D > B && B > A && A > C && C > E)
    {
        cout << "Maka, urutkan nilai dari yang terbesar adalah " << D << ", " << B << ", " << A << ", " << C << " dan " << E ;
    }
    else if( D > B && B > A && A > E && E > C)
    {
        cout << "Maka, urutkan nilai dari yang terbesar adalah " << D << ", " << B << ", " << A << ", " << E << " dan " << C ;
    }
    else if( D > B && B > C && C > A && A > E)
    {
        cout << "Maka, urutkan nilai dari yang terbesar adalah " << D << ", " << B << ", " << C << ", " << A << " dan " << E ;
    }
    else if( D > B && B > C && C > E && E > A)
    {
        cout << "Maka, urutkan nilai dari yang terbesar adalah " << D << ", " << B << ", " << C << ", " << E << " dan " << A ;
    }
    else if( D > B && B > E && E > A && A > C)
    {
        cout << "Maka, urutkan nilai dari yang terbesar adalah " << D << ", " << B << ", " << E << ", " << A << " dan " << C ;
    }
    else if( D > B && B > E && E > C && C > A)
    {
        cout << "Maka, urutkan nilai dari yang terbesar adalah " << D << ", " << B << ", " << E << ", " << C << " dan " << A ;
    }
    else if( D > C && C > A && A > B && B > E)
    {
        cout << "Maka, urutkan nilai dari yang terbesar adalah " << D << ", " << C << ", " << A << ", " << B << " dan " << E ;
    }
    else if( D > C && C > A && A > E && E > B)
    {
        cout << "Maka, urutkan nilai dari yang terbesar adalah " << D << ", " << C << ", " << A << ", " << E << " dan " << B ;
    }
    else if( D > C && C > B && B > A && A > E)
    {
        cout << "Maka, urutkan nilai dari yang terbesar adalah " << D << ", " << C << ", " << B << ", " << A << " dan " << E ;
    }
    else if( D > C && C > B && B > E && E > A)
    {
        cout << "Maka, urutkan nilai dari yang terbesar adalah " << D << ", " << C << ", " << B << ", " << E << " dan " << A ;
    }
    else if( D > C && C > E && E > A && A > B)
    {
        cout << "Maka, urutkan nilai dari yang terbesar adalah " << D << ", " << C << ", " << E << ", " << A << " dan " << B ;
    }
    else if( D > C && C > E && E > B && B > A)
    {
        cout << "Maka, urutkan nilai dari yang terbesar adalah " << D << ", " << C << ", " << E << ", " << B << " dan " << A ;
    }
    else if( D > E && E > A && A > B && B > C)
    {
        cout << "Maka, urutkan nilai dari yang terbesar adalah " << D << ", " << E << ", " << A << ", " << B << " dan " << C ;
    }
    else if( D > E && E > A && A > C && C > B)
    {
        cout << "Maka, urutkan nilai dari yang terbesar adalah " << D << ", " << E << ", " << A << ", " << C << " dan " << B ;
    }
    else if( D > E && E > B && B > A && A > C)
    {
        cout << "Maka, urutkan nilai dari yang terbesar adalah " << D << ", " << E << ", " << B << ", " << A << " dan " << C ;
    }
    else if( D > E && E > B && B > C && C > A)
    {
        cout << "Maka, urutkan nilai dari yang terbesar adalah " << D << ", " << E << ", " << B << ", " << C << " dan " << A ;
    }
    else if( D > E && E > C && C > A && A > B)
    {
        cout << "Maka, urutkan nilai dari yang terbesar adalah " << D << ", " << E << ", " << C << ", " << A << " dan " << B ;
    }
    else if( D > E && E > C && C > B && B > A)
    {
        cout << "Maka, urutkan nilai dari yang terbesar adalah " << D << ", " << E << ", " << C << ", " << B << " dan " << A ;
    }
    else if( E > A && A > B && B > C && C > D)
    {
        cout << "Maka, urutkan nilai dari yang terbesar adalah " << E << ", " << A << ", " << B << ", " << C << " dan " << D ;
    }
    else if( E > A && A > B && B > D && D > C)
    {
        cout << "Maka, urutkan nilai dari yang terbesar adalah " << E << ", " << A << ", " << B << ", " << D << " dan " << C ;
    }
    else if( E > A && A > C && C > B && B > D)
    {
        cout << "Maka, urutkan nilai dari yang terbesar adalah " << E << ", " << A << ", " << C << ", " << B << " dan " << D ;
    }
    else if( E > A && A > C && C > D && D > B)
    {
        cout << "Maka, urutkan nilai dari yang terbesar adalah " << E << ", " << A << ", " << C << ", " << D << " dan " << B ;
    }
    else if( E > A && A > D && D > B && B > C)
    {
        cout << "Maka, urutkan nilai dari yang terbesar adalah " << E << ", " << A << ", " << D << ", " << B << " dan " << C ;
    }
    else if( E > A && A > D && D > C && C > B)
    {
        cout << "Maka, urutkan nilai dari yang terbesar adalah " << E << ", " << A << ", " << D << ", " << C << " dan " << B ;
    }
    else if( E > B && B > A && A > C && C > D)
    {
        cout << "Maka, urutkan nilai dari yang terbesar adalah " << E << ", " << B << ", " << A << ", " << C << " dan " << D ;
    }
    else if( E > B && B > A && A > D && D > C)
    {
        cout << "Maka, urutkan nilai dari yang terbesar adalah " << E << ", " << B << ", " << A << ", " << D << " dan " << C ;
    }
    else if( E > B && B > C && C > A && A > D)
    {
        cout << "Maka, urutkan nilai dari yang terbesar adalah " << E << ", " << B << ", " << C << ", " << A << " dan " << D ;
    }
    else if( E > B && B > C && C > D && D > A)
    {
        cout << "Maka, urutkan nilai dari yang terbesar adalah " << E << ", " << B << ", " << C << ", " << D << " dan " << A ;
    }
    else if( E > B && B > D && D > A && A > C)
    {
        cout << "Maka, urutkan nilai dari yang terbesar adalah " << E << ", " << B << ", " << D << ", " << A << " dan " << C ;
    }
    else if( E > B && B > D && D > C && C > A)
    {
        cout << "Maka, urutkan nilai dari yang terbesar adalah " << E << ", " << B << ", " << D << ", " << C << " dan " << A ;
    }
    else if( E > C && C > A && A > B && B > D)
    {
        cout << "Maka, urutkan nilai dari yang terbesar adalah " << E << ", " << C << ", " << A << ", " << B << " dan " << D ;
    }
    else if( E > C && C > A && A > D && D > B)
    {
        cout << "Maka, urutkan nilai dari yang terbesar adalah " << E << ", " << C << ", " << A << ", " << D << " dan " << B ;
    }
    else if( E > C && C > B && B > A && A > D)
    {
        cout << "Maka, urutkan nilai dari yang terbesar adalah " << E << ", " << C << ", " << B << ", " << A << " dan " << D ;
    }
    else if( E > C && C > B && B > D && D > A)
    {
        cout << "Maka, urutkan nilai dari yang terbesar adalah " << E << ", " << C << ", " << B << ", " << D << " dan " << A ;
    }
    else if( E > C && C > D && D > A && A > B)
    {
        cout << "Maka, urutkan nilai dari yang terbesar adalah " << E << ", " << C << ", " << D << ", " << A << " dan " << B ;
    }
    else if( E > C && C > D && D > B && B > A)
    {
        cout << "Maka, urutkan nilai dari yang terbesar adalah " << E << ", " << C << ", " << D << ", " << B << " dan " << A ;
    }
    else if( E > D && D > A && A > B && B > C)
    {
        cout << "Maka, urutkan nilai dari yang terbesar adalah " << E << ", " << D << ", " << A << ", " << B << " dan " << C ;
    }
    else if( E > D && D > A && A > C && C > B)
    {
        cout << "Maka, urutkan nilai dari yang terbesar adalah " << E << ", " << D << ", " << A << ", " << C << " dan " << B ;
    }
    else if( E > D && D > B && B > A && A > C)
    {
        cout << "Maka, urutkan nilai dari yang terbesar adalah " << E << ", " << D << ", " << B << ", " << A << " dan " << C ;
    }
    else if( E > D && D > B && B > C && C > A)
    {
        cout << "Maka, urutkan nilai dari yang terbesar adalah " << E << ", " << D << ", " << B << ", " << C << " dan " << A ;
    }
    else if( E > D && D > C && C > A && A > B)
    {
        cout << "Maka, urutkan nilai dari yang terbesar adalah " << E << ", " << D << ", " << C << ", " << A << " dan " << B ;
    }
    else
    {
        cout << "Maka, urutkan nilai dari yang terbesar adalah " << E << ", " << D << ", " << C << ", " << B << " dan " << A ;
    }
}
