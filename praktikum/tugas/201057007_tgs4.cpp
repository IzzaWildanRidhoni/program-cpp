#include <iostream>
using namespace std;

int main(){
    float angka,jumlah=0,rata2;
    int i=0;

    while (i < 20)
    {
        i++;
        cout<<"masukkan angka ke "<<i<<" : ";cin>>angka;
        jumlah+=angka;
    }
    
    cout<<"jumlah  : "<<jumlah<<endl;
    cout<<"rata-rata : "<<jumlah/20;
}
