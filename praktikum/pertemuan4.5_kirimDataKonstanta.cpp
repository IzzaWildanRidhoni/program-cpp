#include <iostream>
using namespace std;

float luas(float sisi);

int main(){
    float luas_bs,sisi_bs;
    
    cout<<"\nMenghitung Luas Bujur sangkar"<<endl;
    cout<<"\nMasukkan nilai sisi bujur sangkar : ";
    cin>>sisi_bs;
    luas_bs=luas(sisi_bs);
    cout<<"\nLuas Bujur sangkar = "<<luas_bs<<" cm";

}

float luas(float sisi)
{ 
    return (sisi*sisi);
}