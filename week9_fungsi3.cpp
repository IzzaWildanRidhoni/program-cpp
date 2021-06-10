#include <iostream>
using namespace std;

long angsuran(long p,float i, long t)
{
    int cp,b;
    cp=p/t;
    b=p*(i/100)/12;
    cout<<"cicilan pokok = "<<cp<<endl;
    cout<<"Bunga  = "<<b<<endl;
    return cp+b;
}

int main(){
    long p,t;
    float i;
    cout<<"masukkan pokok pinjaman =  Rp. ";cin>>p;
    cout<<"masukkan suku bunga ( dalam % )  =   ";cin>>i;
    cout<<"masukkan lama kredit dlm bulan =  ";cin>>t;
    long ap=angsuran(p,i,t);
    cout<<"angsuran perbualan = "<<ap;



}