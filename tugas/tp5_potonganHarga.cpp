#include <iostream>
using namespace std;

int main()
{
    double total, diskon;

    diskon = 0;
    cout << "masukkan total belanja :Rp.";
    cin >> total;

    if (total >= 100000)
    {
        diskon = total * 0.05;
        total -= diskon;
    }

    cout << endl;
    cout << "Anda mendapat potongan : Rp." << diskon << endl;
    cout << "total pembelian adalah : Rp." << total;
    cout << endl;
}