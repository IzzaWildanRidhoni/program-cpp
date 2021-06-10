// NAMA : IZZA WILDAN RIDHONI
// NIM  : 201057007

#include <iostream>
using namespace std;

int luas(int p,int l,int t){
    return (2*(p*l+p*t+l*t));
}   

int volume(int p,int l, int t)
{
    return (p*l*t);
}

int main(){
    int p,l,t;
    cout<<"==============================="<<endl;
    cout<<"==== Mencari Luas & Volume ===="<<endl;
    cout<<"==============================="<<endl;
    cout<<endl;
    cout<<"masukkan panjang = ";cin>>p;
    cout<<"masukkan lebar   = ";cin>>l;
    cout<<"masukkan tinggi  = ";cin>>t;

    cout<<"luas balok = "<<luas(p,l,t)<<endl;
    cout<<"volume balok = "<<volume(p,l,t)<<endl;

    cout<<"hasil perkalian luas dengan volume = "<<luas(p,l,t)*volume(p,l,t);
}