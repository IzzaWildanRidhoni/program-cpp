#include <iostream>
using namespace std;

int main(){
    float tbola,pbola,r,jml=1;
    cout<<"masukkan tinggi bola pertama kali  : ";cin>>tbola;
    cout<<"pantulan bola  ke 1 : ";cin>>pbola;
    
    r=pbola/tbola;
    do
    {
        jml++;
        pbola=pbola*r;
        cout<<"pantulan bola ke "<<jml<<" : "<<pbola<<endl;
    } while (pbola>=1);
    cout<<"\njumlah pantulan : "<<jml;
}
