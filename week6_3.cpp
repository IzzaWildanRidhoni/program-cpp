#include <iostream>
using namespace std;

int main(){
    int tahun;
    cout<<"masukkan tahun = ";
    cin>>tahun;
    if (tahun%400 == 0) cout<<tahun<<" kabisat";
    else if (tahun%100 == 0) cout<<tahun<<"bukan kabisat";
    else if (tahun%4==0) cout<<tahun<<" kabisat";
    else cout<<tahun<<"bukan kabisat";
    
}