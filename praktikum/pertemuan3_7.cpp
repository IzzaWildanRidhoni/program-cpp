#include <iostream>
using namespace std;

char kode;

int main(){
    cout<<"A. Alat Olahraga ";
    cout<<"\nB. Alat Elektronik ";
    cout<<"\nC. Alat Masak";
    cout<<"\nMasukkan Kode Barang [A..C] : ";cin>>kode;

    switch (kode)
    {
        case 'A':
            cout<<"alat olahraga";
            break;
        case 'B':
            cout<<"alat Elektronik";
            break;
        case 'C':
            cout<<"alat Masak";
            break;
        
        default://jika inputan bukan a,b,c
            cout<<"anda salah memasukkan kode";
            break;
    }
    cout<<endl;
}