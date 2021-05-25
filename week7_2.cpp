#include <iostream>
using namespace std;

int main(){
    int angka;
    cout<<"masukkan angka :";cin>>angka;
  	
    int j=0;
    for (int i = 0; i <= angka; i++)
    {
      cout<<j;
      j=j+1;
      if (j==10)  j=0;
      
    }
    

    
}
