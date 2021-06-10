#include <iostream>
using namespace std;

// deklarasi fungsi / prototype fungsi
// int a nerupakan parameter formal

int ContohFungsi(int a);

// fungsi utama
int main(){
    int luas1,luas2,totalluas;
    int panjang =  5;

    cout<<"=============================";
    cout<<"\n== Program Contoh Fungsi ==\n";
    cout<<"=============================";

    // memanggil fungsi contoh fungsi ContohFungsi
    // panjang merupakan parameter aktual
    luas1 = ContohFungsi(panjang);
    luas2 = ContohFungsi(panjang);
    totalluas=luas1+luas2;

    cout<<"\n\nLuas Gabungan Kedua Persegi Panjang adalah = "<<totalluas<<endl;

    return 0;
}

// contoh fungsi
// dimisalkan int panjang sebagai parameter input
int ContohFungsi(int panjang){
    int lebar,luas;

    cout<<"\n\nMasukkan lebar persegi panjang : ";cin>>lebar;
    luas=panjang*lebar;
    cout<<"luas persegi panjang adalah "<<panjang<<" x "<<lebar<<" = "<<luas;

    return luas;
}