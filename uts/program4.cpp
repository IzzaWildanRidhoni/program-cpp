// NAMA : IZZA WILDAN RIDHONI
// NIM : 201057007
#include <iostream>
using namespace std;

int main(){
    long total,bayar;
    cout<<"masukkan total belanja : ";cin>>total;
    bayar=total-(total % 1000);
    cout<<"anda cukup membayar : Rp. "<<bayar;
}
