#include <iostream>
#include <math.h>
using namespace std;
#define g 9.8;

int main()
{
    int Vo, sudut;
    float radian, X;
    cout << "PROGRAMM JARAK JATUH PELURU \n \n";
    cout << "masukkan besar kecepatan = ";
    cin >> Vo;
    cout << "masukkan sudut penembakan = ";
    cin >> sudut;

    radian = sudut * 3.14 / 180;
    X = 2 * pow(Vo, 2) * sin(radian) * cos(radian) / g;

    cout << "hasil perhitungan jarak jatuh peluru = " << X;
}