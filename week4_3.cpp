#include <iostream>
using namespace std;
int main()
{
    int angka1, angka2, angka3;

    cout << "masukkan angka pertama = ";
    cin >> angka1;
    cout << "masukkan angka kedua = ";
    cin >> angka2;
    cout << "masukkan angka ketiga = ";
    cin >> angka3;
    if (angka1 > angka2 && angka1 > angka3)
    {
        cout << angka1 << " lebih besar dari " << angka2 << " dan " << angka3;
    }
    else if (angka2 > angka1 && angka2 > angka3)
    {
        cout << angka2 << " lebih besar dari " << angka1 << " dan " << angka3;
    }
    else
    {
        cout << angka3 << " lebih besar dari " << angka1 << " dan " << angka2;
    }
}