#include <iostream.h>
#include <conio.h>
main() {
 int a,b,mod;
 float hasil ;
 cout<<"Contoh Penggunaan / dan %\n\n";
 cout<<"Masukkan angka pertama (a) = ";cin>>a;
 cout<<"Masukkan angka kedua   (b) = ";cin>>b;
 hasil = float(a)/b; // hasil = float(a)/b; atau hasil=a/float(b)
 mod = a%b;
 cout<<"\nHasil Pembagian      = "<<hasil;
 cout<<"\nSisa Hasil Bagi      = "<<mod;
 getch();}