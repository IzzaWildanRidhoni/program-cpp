// NAMA : IZZA WILDAN RIDHONI
// NIM  : 201057007

#include <iostream>
#include <math.h>
#include <stdlib.h>
#include<conio.h>

using namespace std;

float kelilingLingkaran(float r, float phi)
{
	return 2 * phi * r;
}

float luasLingkaran(float r, float phi)
{
	return phi*r*r;
}


float kelilingSegitiga(float a, float t)
{
	return (a+t+sqrt(a*a+t*t));
}

float luasSegitiga(float a, float t)
{
	return 0.5*a*t;
}

float volumeBalok(float p, float l,float t)
{
	return p*l*t;
}

float luasBalok(float p, float l,float t)
{
	return 2*(p*l+p*t+l*t);
}


float luasSilinder(float phi, float r,float t)
{
	return 2*phi*r*(r+t);
}


float volumeSilinder(float phi, float r,float t)
{
	return  2 * phi * r*r*t;
}


void lingkaran(){
    float phi = 3.14 , r ;
    cout<<endl;
    cout<<"masukkan jari2 = ";cin>>r;
    cout<<"keliling lingkaran = "<<kelilingLingkaran(r,phi)<<endl;
    cout<<"luas lingkaran = "<<luasLingkaran(r,phi)<<endl;

}

void segitiga(){
    float a,t;

    cout<<"masukkan alas = ";cin>>a;
    cout<<"masukkan tinggi = ";cin>>t;

    cout<<"keliling segitiga = "<<kelilingSegitiga(a,t)<<endl;
    cout<<"luas segitiga = "<<luasSegitiga(a,t)<<endl;
}

void balok(){
    float p,l,t;

    cout<<"masukkan panjang = ";cin>>p;
    cout<<"masukkan lebar = ";cin>>l;
    cout<<"masukkan tinggi = ";cin>>t;

    cout<<"volume balok = "<<volumeBalok(p,l,t)<<endl;
    cout<<"luas balok = "<<luasBalok(p,l,t)<<endl;
}

void silinder(){
    float phi = 3.14 , r,t;
    cout<<endl;
    cout<<"masukkan jari2 = ";cin>>r;
    cout<<"masukkan tinggi = ";cin>>t;
    
    cout<<"volume silinder = "<<volumeSilinder(phi,r,t)<<endl;
    cout<<"luas permukaan silinder = "<<luasSilinder(phi,r,t)<<endl;
}


int main(){
    int pil;
    do
    {
        // alternative clrscr()
        //system("clear"); // jika menggunakan linux
         system("cls"); // jika menggunakan windows

        cout<<"================================"<<endl;
        cout<<"   == Penghitung Sederhana == "<<endl;
        cout<<"================================"<<endl;
        cout<<"1. lingkaran ( luas & keliling ) "<<endl;
        cout<<"2. segitiga siku siku ( luas & keliling ) "<<endl;
        cout<<"3. balok  ( luas & volume )"<<endl;
        cout<<"4. silinder  ( luas & volume )"<<endl;
        cout<<"pilih menu  = ";cin>>pil;
        
        switch (pil)
        {
        case 1:
            lingkaran();
            break;
        case 2:
            segitiga();
            break;
        case 3:
            balok();
            break;
        case 4:
            silinder();
            break;
        
        default:
            break;
        }
     
     	getch();

    } while (pil != 0);
}
