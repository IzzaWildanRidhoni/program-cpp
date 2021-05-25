#include <iostream>
using namespace std;

int a;

int main(){
    cout<<"masukkan nilai : ";cin>>a;

    if( a > 0 ) {
        cout<<a<<" adalah bilangan positif "<<endl;
    }
    else {
        cout<<a<<" adalah bilangan negatif"<<endl;
    }
}