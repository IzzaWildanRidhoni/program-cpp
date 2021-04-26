#include <iostream>
using namespace std;

int main()
{
    double P, i, t, cp, bunga, total;

    cout << "Jumlah pokok pinjam : Rp.";
    cin >> P;
    cout << "suku bunga per tahun dlm % : ";
    cin >> i;
    cout << "lama kredit dalam bulan :";
    cin >> t;

    cp = P / t;
    i = i / 100;
    bunga = P * i / 12;
    total = cp + bunga;

    cout << endl;
    cout << "Cicilan Pokok : Rp." << cp << endl;
    cout << "Bunga  : Rp." << bunga << endl;
    cout << "Angsuran per bulan : Rp." << total << endl;
}