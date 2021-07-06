/*
Nama : Izza Wildan Ridhoni
Nim  : 201057007
*/

#include <iostream>
using namespace std;

void genap(int bil)
{
    cout<<"genap : ";
    for (int i = 1; i <=bil; i++)
        if (i%2==0)  cout<<i<<" ";
}

void ganjil(int bil)
{
    cout<<"ganjil : ";
     for (int i = 1; i <=bil; i++)
            if (i%2==1)  cout<<i<<" ";
            
}

int main(){
    int bil;
    cout<<"BILANGAN GANJIL GENAP\n";
    cout<<"---------------------------\n";
    cout<<"masukkan bilangan : ";cin>>bil;
   
    if (bil%2==0) genap(bil);
    else ganjil(bil);
    

   
    
}