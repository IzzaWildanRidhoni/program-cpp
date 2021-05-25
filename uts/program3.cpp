// NAMA : IZZA WILDAN RIDHONI
// NIM : 201057007
#include <iostream>
using namespace std;

int main(){
    long jml,bayar;

    cout<<"======== kasir pembayaran saputangan ======"<<endl;
    cout<<"masukkan jumlah saputangan : ";cin>>jml;
    bayar= jml/12*9000 + jml % 12 *800  ;
    cout<<"anda harus membayar : Rp."<<bayar;
}
