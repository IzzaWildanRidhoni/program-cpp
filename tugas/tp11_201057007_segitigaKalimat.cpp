/*
Nama : Izza Wildan Ridhoni
Nim  : 201057007
*/

#include <iostream>
using namespace std;

void buatSegitiga(string kalimat)
{
    for (int i = 0; i <kalimat.length(); i++)
    {
        for (int j = 0; j <= i; j++)
            cout<<kalimat[j];
        cout<<endl;
    }
}

int main(){
    string kalimat;
    cout<<"Masukkan Kalimat : ";cin>>kalimat;
    buatSegitiga(kalimat);
    
}