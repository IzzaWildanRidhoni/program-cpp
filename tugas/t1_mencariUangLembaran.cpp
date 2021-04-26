#include <iostream>

using namespace std;
int main()
{
    int uang, sisa, a, b, c, d, f, g, h;
    cout << "masukkan uang yang akan di tukar = Rp.";
    cin >> uang;
    a = uang / 100000;
    sisa = uang % 100000;
    b = sisa / 50000;
    c = sisa % 50000 / 10000;
    d = sisa % 50000 % 10000 / 5000;
    f = sisa % 50000 % 10000 % 5000 / 1000;
    g = sisa % 50000 % 10000 % 5000 % 1000 / 500;
    h = sisa % 50000 % 10000 % 5000 % 1000 % 500 / 100;
    cout << "hasil = " << endl;
    cout << a << " lembar  uang 100.000 , \n"
         << b << " lembar  uang 50.000 , \n"
         << c << " lembar  uang 10.000 , \n"
         << d << " lembar  uang 5.000 , \n"
         << f << " lembar  uang 1.000 , \n"
         << g << " lembar  uang 500 , \n"
         << h << " lembar  uang 100 , \n"
         << endl;
}