// Nama     : Izza WIldan Ridhoni
// Nim      : 201057007
// Prodi    : Informatika

#include<iostream>
using namespace std;

// deklarasi variabel mat dengan array 2 dimensi bertypedata integer dengan maksimum 3 baris dan maksimum 3 kolom  
int mat[3][3];

int main()
{
    int m,n;

    // memasukkan jumlah baris maxsimal 3 dan kolom  maxsimal 3
    cout<<"masukkan baris matrix max 3: ";cin>>m;//memsukkan jumlah baris ke dalam variabel m
    cout<<"masukkan kolom matrix max 3: ";cin>>n;//memasukkan jumlah kolom ke dalam variabel n


    //input elemen matrix
    // perulangan bersarang
    for(int i=1;i<=m;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cout<<"masukkan data matriks ke ["<<i<<","<<j<<"]= ";
            // memasukkan data matrik baris ke i dan kolom ke j
            cin>>mat[i][j];
        }
    }
    //mencetak hasilnya
    cout<<"hasil matriks adalah sbb : "<<endl;

    // perulangan bersarang
    for(int i=1;i<=m;i++)
    {
        for(int j=1;j<=n;j++)
        {

            // menampilkan matrik baris ke i dan kolom ke j
            cout<<mat[i][j]<<" ";;
        }
        cout<<endl;
    }
}