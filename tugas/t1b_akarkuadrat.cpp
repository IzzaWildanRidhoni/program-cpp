#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int a, b, c;
    float x1, x2;
    // input
    cout << "PROGRAM AKAR KUADRAT \n \n";
    cout << "masukkan nilai a = ";
    cin >> a;
    cout << "masukkan nilai b = ";
    cin >> b;
    cout << "masukkan nilai c = ";
    cin >> c;
    // proses
    x1 = -b + sqrt(pow(b, 2) - 4 * a * c) / (2 * a);
    x2 = -b - sqrt(pow(b, 2) - 4 * a * c) / (2 * a);

    cout << "nilai x1 =" << x1 << endl;
    cout << "nilai x2 =" << x2;
}