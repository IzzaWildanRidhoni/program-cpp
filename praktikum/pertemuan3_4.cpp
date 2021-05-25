#include <iostream>
using namespace std;

int a;

int main(){
    cout<<"masukkan nilai : ";cin>>a;

    if(a==0) {
        cout<<"anda memasukkan bilangan nol"<<endl;
    }
    else  if(a > 0){
        cout<<"anda memasukkan bilangan positif"<<endl;
    } 
    else{
        cout<<"anda memasukkan bilangan negatif"<<endl;
    }    
}