// pengiriman data constanta ke fungsi
#include <iostream>
using namespace std;

float luas(float sisi);

int main(){
    float luas_bs;
    luas_bs = luas(4.25);
    cout<<"\nLuas Bujur sangkar = "<<luas_bs;
}

float luas(float sisi){
    return (sisi*sisi);
}