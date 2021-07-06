#include <iostream>
using namespace std;

void dua(int b){
    b=b+10;
    cout<<"isi b di fungsi : "<<b<<endl;
}

int main(){
    int a=1;
    int b=11;
    dua(b);
    cout<<" isi b di fungsi main "<<b<<endl;
}