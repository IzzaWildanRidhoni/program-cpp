// nama : izza wildan ridhoni
// nim 201057007

#include <iostream>
using namespace std;

int h,q,k,j,m,tahun;
    string hari;

string cariHari(int q, int m, int tahun){
    k = tahun % 100;
    j = tahun /100;

    h = (q+((13*(m+1))/5)+k+(k/4)+(j/4)-(2*j)) % 7;

    switch (h)
    {
    case 0:
        hari = "sabtu";
        break;
    case 1:
        hari = "minggu";
        break;
    case 2:
        hari = "senin";
        break;
    case 3:
        hari = "selasa";
        break;
    case 4:
        hari = "rabu";
        break;
    case 5:
        hari = "kamis";
        break;
    case 6:
        hari = "jumat";
        break;
    default:
        break;
    }
    
    return hari;
}

int main(){

    // rumus
    cout<<"masukkan tanggal <1..31> : ";cin>>q;
    cout<<endl;
    cout<<"kode  bulan : ( 3 =  maret, 4 = april , 5 = mei ==> 12 = desember ,13 = januari , 14 = februari ) "<<endl;
    cout<<"\nmasukkan kode bulan  <3..14> : ";cin>>m;

    cout<<"masukkan tahun dalam suatu abad : ";cin>>tahun;
    cout<<endl;
    cout<<q<<"/"<<m<<"/"<<tahun<<"  adalah hari  "<<cariHari(q,m,tahun);
    cout<<endl;
}