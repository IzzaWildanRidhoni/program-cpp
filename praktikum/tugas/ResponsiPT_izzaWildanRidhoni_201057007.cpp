// Nama : Izza Wildan Ridhoni
// Nim : 201057007

#include <iostream>
#include <conio.h>

using namespace std;

string no_plat[10],merek[10],nama_pembeli[10],merk_mobil[10];
long tarif[10],stok[10],total[10];
int jum,jumPel,jumlah_rental[10],lama_rental[10];

void tambahData()
{
    string tanya;
    string kode;
    ulang:
    cout<<"masukkan no plat  : ";cin>>kode;
    
    // validasi
    for (int i = 0; i <= jum; i++)
    {
        if (kode == no_plat[i])
        {
            cout<<"no plat harus unik , coba lagi !\n";
            getch();
            goto ulang;
        }
        
    }
    no_plat[jum] = kode;
    
    
    cout<<"masukkan nama  Mobil  : ";cin>>merek[jum];
    cout<<"masukkan tarif  Mobil  : Rp ";cin>>tarif[jum];
    cout<<"masukkan stock  Mobil  : ";cin>>stok[jum];
    jum++;

    cout<<endl;
    cout<<"Mau memasukkan data lagi ? <y/t>";cin>>tanya;
    if (tanya == "y" || tanya =="Y") goto ulang;
    

}

void cetak()
{
    cout<<"|-------------------------------------------------|"<<endl;
    cout<<"  no  no plat     nama         tarif       stock"<<endl;
    cout<<"|-------------------------------------------------|"<<endl;
    int j = 1;
    for (int i = 0; i < jum; i++)
    {
        cout<<"  "<<j++<<"    "<<no_plat[i]<<"     "<<merek[i]<<"       Rp "<<tarif[i]<<"       "<<stok[i]<<endl;
    }
    cout<<"|-------------------------------------------------|"<<endl;
    
}

long hitungTotal(int jm,int jh,long tarif){
        return jm*(jh*24/12)*tarif;
}

void layanan()
{
    string cek;
    int pos;
    bool ada=false;

    cetak();
    cout<<"\nRental Mobil \n";
    cout<<"Masukkan nama penyewa :  ";cin>>nama_pembeli[jumPel];
    ulang:
    cout<<"Masukkan nama mobil :  ";cin>>cek;
    for (int i = 0; i < jum; i++)
    {
        if (cek == merek[i])
        {
            pos = i;
            ada = true;
        }
        
    }
    // cek ada tidak 
    if (!ada){ cout<<"nama mobil tidak ada di database ,ulangi !\n";getch();goto ulang; };
    merk_mobil[jumPel] = cek;
    
    // cek stok
    if (stok[pos] == 0){
        cout<<"\nmaaf stok  mobil ini ternyata habis, pilih mobil lain aja ,wkwk\n"; 
        getch();
        goto ulang;
    }
    
    ulangjum:
    cout<<"Masukkan jumlah mobil yg disewa : ";cin>>jumlah_rental[jumPel];
    if (stok[pos] < jumlah_rental[jumPel])
    {
        cout<<"stok kurang ! ,  hanya tersedia "<<stok[pos]<<" stok mobil , coba lagi \n";
        goto ulangjum;
    }
    
    stok[pos] -=jumlah_rental[jumPel]; 

    cout<<"lama sewa <hari> : ";cin>>lama_rental[jumPel];
    total[jumPel]=hitungTotal(jumlah_rental[jumPel],lama_rental[jumPel], tarif[pos]);
    jumPel++;
}

int Posisi(string  merk)
{
    int pos;
     for (int i = 0; i < jum; i++)
        {
            if (merk == merek[i])
            {
                pos = i;
            }
            
        }
        return pos;
}
void cetakLayanan()
{
    for (int i = 0; i < jumPel; i++)
    {
        cout<<"nama Penyewa : "<<nama_pembeli[i]<<endl;
        cout<<"nama mobil   : "<<merk_mobil[i]<<endl;
        cout<<"tarif per 12 jam : "<<tarif[Posisi(merk_mobil[i])]<<endl;
        cout<<"\njumlah mobil : "<<jumlah_rental[i]<<endl;
        cout<<"lama penyewaan : "<<lama_rental[i]<<" hari"<<endl;
        cout<<"\njumlah tagihan per hari  : Rp "<<total[i]/lama_rental[i]<<endl;
        cout<<"jumlah semua tagihan       : Rp "<<total[i]<<endl;
        cout<<"\n-----------------------------------------------------\n";
    }
}


int main(){
    jum = 0;
    jumPel=0;
    int pil;
    do
    {
        ulangi:
        system("clear");
        cout<<"jumlah data mobil saat ini : "<<jum<<endl;
        cout<<"=============================================="<<endl;
        cout<<"      APLIKASI  PENGELOLAAN  RENTAL MOBIL\n";
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
            tambahData();
            break;
        case 2:
             if (jum == 0  ){cout<<"maaf belum ada data mobil yang diinputkan ! "; getch(); goto ulangi; }
            //  tidak kosong
            cetak();
            break;
        case 3:
             if (jum == 0  ){cout<<"maaf belum ada data mobil yang diinputkan ! "; getch(); goto ulangi; }
            layanan();
            break;
        case 4:
             if (jumPel == 0  ){cout<<"maaf belum ada  pelayanan yang diinputkan ! "; getch(); goto ulangi; }
            cetakLayanan();
            break;
    	case 0:
    		cout<<"Terimakasih sudah menggunakan aplikasi ini :)";
    		break;
        default:
            cout<<"anda salah pilih menu , wkwk";
            break;
        }
        getch();
    } while (pil != 0);
    

}
