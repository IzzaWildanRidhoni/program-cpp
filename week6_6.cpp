#include <iostream>
using namespace std;

int main(){
    int x,y,a,b,sisa;
    cout<<"bilangan 1: ";
    cin>>x;
    cout<<"bilangan 2: ";
    cin>>y;

    if(x>y){
        a=x;
        b=y;
    }else{
        a=y;
        b=x;
    }
    sisa=a%b;
    while(sisa != 0){
        a=b;
        b=sisa;
        sisa=a%b;
    }
    cout<<b;
}