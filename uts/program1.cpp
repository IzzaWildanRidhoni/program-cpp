// NAMA : IZZA WILDAN RIDHONI
// NIM : 201057007
#include <iostream>
using namespace std;

int main(){
    int besar_persegi,i,j;
    
    cout<<"======== persegi =========="<<endl;
    cout<<"masukkan besar pesergi : ";cin>>besar_persegi;

    cout << endl;
    for(i=1;i<=besar_persegi;i++) {
        for(j=1;j<=besar_persegi;j++) {
        cout << " #";
        }
        cout << endl;
    }
}
