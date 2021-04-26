#include <iostream>
using namespace std;

int main()
{
    int uang, bayar;
    cout << "masukkan uang pembeli  , Rp.";
    cin >> uang;
    if (uang >= 50000)
    {
        bayar = uang - (uang * 0.1);
        cout << "anda mendapat diskon 10 % \n bayar = Rp.";
    }
    else
    {
        bayar = uang;
        cout << "anda tidak mendapat  diskon \n bayar = Rp. ";
    }
    cout << bayar;
}