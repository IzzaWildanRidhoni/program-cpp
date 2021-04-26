#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    double byk_keramik, bayar, kamar, keramik, byk_kamar, byk_bok;
    kamar = 16000;
    keramik = 1200;
    byk_kamar = 4;
    byk_keramik = ceil(byk_kamar * (kamar / keramik));
    byk_bok = ceil(byk_keramik / 5);
    bayar = byk_bok * 60000;

    cout << " byk keramik = " << byk_keramik << " box = " << byk_bok << " bayar = " << bayar;
}