#include <iostream>
using namespace std;

int main()
{
    int a, b, sn, un, n;
    cout << "masukkan nilai awal = ";
    cin >> a;
    cout << "masukkan beda = ";
    cin >> b;
    cout << "suku ke berapa yang akan di cari = ";
    cin >> n;
    un = a + (n - 1) * b;
    sn = 0.5 * n * (2 * a + (n - 1) * b);
    cout << "nilai un " << n << " = " << un << endl;
    cout << "nilai sn  " << n << " = " << sn;
}