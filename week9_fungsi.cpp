#include <iostream>
using namespace std;

int suku(int a,int b,int n)
{
     return a+(n-1)*b;

}

int main(){
    int a,b,n;
    cout<<"==============================="<<endl;
    cout<<"      BARISAN ARITMATIKA"<<endl;
    cout<<"==============================="<<endl;
    cout<<"masukkan nilai a = ";cin>>a;
    cout<<"masukkan nilai b = ";cin>>b;
    cout<<"cari suku ke  = ";cin>>n;

    cout<<"suku ke "<<n<<" = " <<suku(a,b,n);
}