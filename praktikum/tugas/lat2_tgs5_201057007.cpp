// Nama     : Izza WIldan Ridhoni
// Nim      : 201057007
// Prodi    : Informatika

#include <iostream>

using namespace std;

int a[10]; // deklarasi variabel a dengan   array dimensi 1 bertypedata integer dengan jumlah elemen maksimal 10 artinya dari index 0-9 saja
int n,jum=0; //deklarasi  dan inisialisasi n=0 dan jum =0 bertype data integer
float mean; // deklarasi variabel mean bertype float
//  ke tiga variabel diatas ini merupakan variabel global

main()
{
    int i=0;
    
    // meminta  user untuk menginputkan jumlah data bilangan bulat yang akan diinputkan 
    cout<<"berapa data yang akan diinputkan : ";cin>>n;

    // memasukkan nilai bilangan bulat dari index ke 0 sampai n(jumlah data  yang tadi diinputkan user)
    for(i=0;i<n;i++)
    {
        cout<<"masukkan bilangan bulat ke "<<i+1<<" = ";
        cin>>a[i];
        // rumus menghitung jumlah semua  data dari index ke 0 sampai ke n 
        jum=jum+a[i];
    }

    // rumus menghitung rata2 dengan cara jumlah semua data dibagi n
    mean=jum/n;
    cout<<endl;
    //mencetak hasil

    // mencetak data bilangan bulat dari indek ke 0 sampai ke n 
    for(i=0;i<n;i++)
    {
        cout<<" bilangan ke : "<<i+1<<" = "<<a[i]<<endl;
    }
    
    // menampilkan rata rata yaitu  hasil  variabel mean
    cout<<endl<<" rata-rata dari bilangan di atas ="<<mean;
}