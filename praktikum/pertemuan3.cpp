#include <iostream>
#include <math.h> //library untuk matematika seperti sqrt,dll
using namespace std;
int angka;

int main()
{
    cout<<"masukkan angka ";cin>>angka;
    cout<<endl;

    cout<<"hasil akar kuadrat : "<<sqrt(angka)<<endl;
    cout<<"hasil pangkat 2 : "<<pow(angka,2)<<endl;
    cout<<"hasil pangkat 3 : "<<pow(angka,3)<<endl;
}