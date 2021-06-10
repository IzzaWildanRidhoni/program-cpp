/* Penggunaan Call By Reference */
/* Program Pertukaran Nilai */
/* —————————- */

#include <iostream>
using namespace std;

int tukar(int *x,int *y);
int main(){
    int a,b;
    a = 88;
    b = 77;
    cout<<"nilai sebelum pemanggilan fungsi ";
    cout<<"\na = "<<a<<" b = "<<b;
    tukar(&a,&b);
    cout<<endl;
    cout<<"\nNilai Setelah pemanggilan fungsi";
    cout<<"\na = "<<a<<" b = "<<b;
}

int tukar(int *x,int *y){
    int z;
    z = *x;*x = *y;*y = z;
    cout<<endl;
    cout<<"\nNilai di akhir fungsi tukar()";
    cout<<"\nx = "<<*x<<" y = "<<*y;
}