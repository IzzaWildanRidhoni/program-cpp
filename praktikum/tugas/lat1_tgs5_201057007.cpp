//  Nama    : izza Wildan Ridhoni
// Nim      : 201057007
// prodi    : Informaika

#include<iostream> 
using namespace std;

//mendeklarasikan  array dimensi 1  ber type data integer dengan jumlah elemen  maksimum 10,
int a[10];

// program utama
int main()
{
    // mendeklarasikan variabel i bertype integer sekaligus meninisialisasi nilai i = 0
    int i=0;
    //input data

     // memasukkan nilai bilangan bulat ke dalam array  dari index ke 0 sampai indeks ke 4
    for(i=0;i<=4;i++)
    {
        cout<<"masukkan bilangan bulat ke "<<i<<" = ";
        cin>>a[i];
    }
    cout<<endl;//mencetak hasil

    // mencetak nilai bilangan bulat dari array dari index ke 0 sampai index ke 4
    for(i=0;i<=4;i++)
    {
        cout<<" bilangan ke : "<<i<<" = "<<a[i]<<endl;
    }
}