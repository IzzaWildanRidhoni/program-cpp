#include <iostream>
using namespace std;
int main()
{
    int jarak, km, m, cm;
    cout << "masukkan jarak  dlm cm = ";
    cin >> jarak;
    km = jarak / 100000;
    m = jarak % 100000 / 1000;
    cm = jarak % 100000 % 1000;
    cout << " hasil = " << endl;
    cout << km << "km" << endl;
    cout << m << "m" << endl;
    cout << cm << "cm" << endl;
}