#include <iostream>
#include <conio.h>
using namespace std;
int pecahan ()
{
    int a,b,hasil;
    cout << "Masukkan Pembilang = "; cin >> a;
    cout << "Masukkan Penyebut  = "; cin >> b;
    cout << "Pecahan Yang Anda Masukkan Adalah \n";
    cout << a <<endl;
    cout << "-" <<endl;
    cout << b <<endl;
    hasil=a/b;
    cout << "\n Hasil Bilangan Bulat Dari Pecahan Itu Adalah = " <<hasil<<endl;
}
int main ()
{
    pecahan ();
    getch();
    return 0;
}
