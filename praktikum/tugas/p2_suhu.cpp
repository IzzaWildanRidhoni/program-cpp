#include <iostream>
using namespace std;

int main()
{
    float K, F, C, R;

    cout << "Masukkan Suhu (Dalam bentuk Celcius ) : ";
    cin >> C;

    K = C + 273;
    F = 1.8 * C + 32;
    R = 0.8 * C;

    cout << "Hasil dari konversi suhu \n";
    cout << "kelvin :" << K << endl;
    cout << "Fahrenheit :" << F << endl;
    cout << "Reamur :" << R << endl;
}