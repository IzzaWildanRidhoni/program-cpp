#include <iostream>
#include <math.h> //library untuk matematika seperti sqrt,dll
using namespace std;

int a,t;
float sisimiring,luas,keliling;

int main()
{
    cout<<"menghitung luas dan keliling segitiga siku siku ";
    cout<<endl;
    cout<<"masukkan alas :";cin>>a;
    cout<<"masukkan tinggi : ";cin>>t;

    // cari sisi miring 
    sisimiring=sqrt(pow(a,2))+(pow(t,2));
    luas=0.5 * a*t;
    keliling=a+sisimiring+t;

    cout<<endl;
    
    cout<<"segitiga dengan alas = "<<a<<" dan tinggi = "<<t<<endl;
    cout<<"luas = "<<luas<<endl;
    cout<<"keliling = "<<keliling<<endl;
}