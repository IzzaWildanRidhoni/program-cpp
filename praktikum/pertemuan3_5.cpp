#include <iostream>
using namespace std;

int main(){
    // variabel 
    char nama[100];
    string sks;
    float ips;

    // input 
    cout<<"program untuk perhitungan nilai"<<endl;
    cout<<"input nama : ";cin.getline(nama,sizeof(nama));
    cout<<"input ips :";cin>>ips;
    cout<<endl;

    // proses
    if (ips < 2.00) sks = "15 sks";
    else if((2.00 > ips ) || (ips <= 2.50)) sks ="17 sks";
    else if((2.50 > ips ) || (ips <= 3.00)) sks ="20 sks";
    else if(3.00 >= ips ) sks ="24 sks";

    // output
    cout<<"nama saya :"<<nama<<endl;
    cout<<"nilai saya : "<<ips<<endl;
    cout<<"bisa ambil : "<<sks<<endl;
    
}   