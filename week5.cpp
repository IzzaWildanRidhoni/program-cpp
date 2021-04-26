#include <iostream>

using namespace std;

int main()
{
    int umur;
    cout << "masukkan ummur : ";
    cin >> umur;

    if (umur <= 1)
        cout << "Kategori Bayi";
    else if (umur <= 3)
        cout << "Kategori Batita";
    else if (umur <= 5)
        cout << "Kategori balita";
    else if (umur <= 12)
        cout << "Kategori anak anak";
    else if (umur <= 17)
        cout << "Kategori remaja";
    else if (umur <= 30)
        cout << "Kategori Pemuda";
    else if (umur <= 60)
        cout << "Kategori Dewasa";
    else if (umur <= 100)
        cout << "Kategori Lansia";
}