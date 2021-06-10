#include <iostream>
using namespace std;

// deklarasi prosedure / prototype prosedur
// int a merupakan parameter formal 
void ContohProsedure(int a);
void ContohProsedure2(int a);

// fungsi utama
int main(){
    int panjang= 5;

    cout<<"==============================";
    cout<<"\n=== Program COntoh Prosedure ===\n";
    cout<<"==============================\n";
    // memanggil prosedure "ContohProsedure" dan "Coontoh rosedure2"
    // panjang merupakan parameter aktual
    ContohProsedure(panjang);
    ContohProsedure2(panjang);

    return 0;
}

// contoh prosedure
// dimisalkan int panjang sebagai parameter input

void ContohProsedure(int panjang){
    int lebar,luas;

    cout<<"\n\nMasukkan Lebar Persegi Panjang Kel : ";cin>>lebar;
    luas=panjang*lebar;
    cout<<"Luas Persegi Panjang kel : "<<panjang<<" x "<<lebar<<" = "<<luas<<endl;
}

// contoh prosedure 
// dimisalkan int panjang sebagai parameter input 
void ContohProsedure2(int panjang)
{
    int lebar,keliling;

    cout<<"\n\nMasukkan lebar persegi panjang ke 2 : ";cin>>lebar;
    keliling=(panjang*lebar);
    cout<<"keliling persegi panjang ke 2 : ("<<panjang<<" + "<<lebar<<") x 2 = "<<keliling<<endl;
}
