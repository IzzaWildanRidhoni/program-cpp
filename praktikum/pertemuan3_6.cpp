#include <iostream>
using namespace std;

int main(){
    char nama[100];
    int no;
    string menu,harga;

    cout<<"memilih menu makanan ";
    cout<<"\nmasukkan nama pelanggan :";cin.getline(nama,sizeof(nama));
    cout<<"masukkan nomor menu       : ";cin>>no;
    cout<<"masukkan nama menu       : ";cin>>menu;

    if((no == 1 )&&(menu=="soto")) harga="Rp.4000";
    else if((no == 2 )&&(menu=="capcai")) harga="Rp.5000";
    else if((no == 3 )&&(menu=="sate")) harga="Rp.6000";
    else if((no == 4 )&&(menu=="telor")) harga="Rp.5000";
    else if((no == 5 )&&(menu=="rawon")) harga="Rp.5000";

    cout<<"nama pelanggan   : "<<nama<<endl;
    cout<<"menu yg diambil  : "<<menu<<endl;
    cout<<"harga menu       : "<<harga<<endl;

}