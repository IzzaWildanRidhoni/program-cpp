#include <iostream>
using namespace std;

int suku(int a,int beda,int n)
{
     return a+(n-1)*beda;

}

int main(){
    int a,b,n,beda;
    cout<<"==============================="<<endl;
    cout<<"      BARISAN ARITMATIKA"<<endl;
    cout<<"==============================="<<endl;
    cout<<"masukkan angka pertama = ";cin>>a;
    cout<<"masukkan angka kedua = ";cin>>b;
    beda = b-a;
    cout<<"cari suku ke  = ";cin>>n;

    cout<<"suku ke "<<n<<" = " <<suku(a,beda,n);
}