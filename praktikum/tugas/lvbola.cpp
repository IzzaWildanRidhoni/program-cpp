#include <iostream> //librari untuk mengenali sintak c++
using namespace std;

int main() //program utama  /  main program
{
    // inisialisasi & deklarasi variabel menggunakan double
    double r, luas, volume, phi = 3.14;

    cout << "Menentukan Luas Permukaan dan Volume Bola" << endl;
    cout << "masukkan jari-jari Bola:";
    cin >> r; // input jari jari

    // proses menghitung luas dan volume
    luas = 4 * phi * r * r;
    volume = 4.0 / 3.0 * phi * r * r * r;

    // output luas dan volume
    cout << "luas = " << luas << " cm2" << endl;
    cout << "volume = " << volume << " cm2" << endl;
}
