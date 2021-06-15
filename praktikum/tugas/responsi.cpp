#include <iostream>
#include <conio.h>

using namespace std;

string no_plat[10],merek[10];
long tarif[10],stok[10];
int jum;

void tambahData(int &jum)
{
    string tanya;
    string kode;
    ulang:
    cout<<"masukkan no plat : "<<jum <<" : ";cin>>kode;
    
    // validasi
    for (int i = 0; i <= jum; i++)
    {
        if (kode == no_plat[i])
        {
            cout<<"noplat harus unik , coba lagi !";
            getch();
            goto ulang;
        }
        
    }
    no_plat[jum] = kode;
    
    
    cout<<"masukkan nama  Mobil  : ";cin>>merek[jum];
    cout<<"masukkan tarif  Mobil  : ";cin>>tarif[jum];
    cout<<"masukkan stock  Mobil  : ";cin>>stok[jum];
    jum++;

    cout<<endl;
    cout<<"Masu memasukkan data lagi ? <y/t>";cin>>tanya;
    if (tanya == "y" || tanya =="Y") goto ulang;
    

}

void cetak()
{
    string tanya;
    cout<<jum;
    cout<<"--------------------------------------------"<<endl;
    cout<<"no plat     nama         tarif     stock"<<endl;
    cout<<"--------------------------------------------"<<endl;
    for (int i = 0; i <= jum; i++)
    {
        cout<<no_plat[i]<<"     "<<merek[i]<<"         "<<tarif[i]<<"         "<<stok[i]<<endl;
    }
    
}

int main(){
    jum = 0;
    int pil;
    do
    {
        ulangi:
        system("cls");
        cout<<"jumlah data mobil saat ini : "<<jum<<endl;
        cout<<"=============================================="<<endl;
        cout<<"      APLIKASI  PENGELOLAAN  RENTAL MOBIL";
        cout<<"=============================================="<<endl;
        cout<<"1. Input data Mobil "<<endl;
        cout<<"2. Lihat Data Mobil "<<endl;
        cout<<"3. layanan "<<endl;
        cout<<"4. Cetak layanan "<<endl;
        cout<<"0. Keluar "<<endl;
        cout<<"masukkan pilihan anda  : ";cin>>pil;
        
        switch (pil)
        {
        case 1:
            tambahData(jum);
            break;
        case 2:
             if (jum == 0  )
             {
                 cout<<"maaf belum ada data yang diinputkan ! ";
                  getch();
                 goto ulangi;
             }else{
                 cetak();
             }
             
            break;
        
        default:
            break;
        }
        getch();
    } while (pil != 0);
    cout<<"Terimakasih sudah menggunakan aplikasi ini :)";

}
