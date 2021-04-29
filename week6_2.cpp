#include <iostream>
using namespace std;

int main(){
    int angka;
    cout<<"masukkan angka = ";
    cin>>angka;
    // while itu perulangan tidak pasti tidak tau kapan program akan berhenti
    while(angka > 1){
        if(angka%2 == 0){
            angka=angka/2;
        }else{
            angka=(angka*3)+1;
        }
        cout<<angka<<" ";
    }
}