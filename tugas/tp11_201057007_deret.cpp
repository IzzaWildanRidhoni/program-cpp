/*
Nama : Izza Wildan Ridhoni
Nim  : 201057007
*/

#include <iostream>
using namespace std;

void cariDeret(int angka){
    int j=1;
    for (int i = 1; i <= angka; i++)
    {
      cout<<j;
      j++;
      if (j==10)  j=0;
    }
}

int main(){
    int angka;
    cout<<"masukkan angka :";cin>>angka;
  	cariDeret(angka);
    
}
