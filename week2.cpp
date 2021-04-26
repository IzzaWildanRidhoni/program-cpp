#include <iostream> //
// #include <cstdlib>

using namespace std;

int floor(double x)
{
    int a;
    a = x;
    return a;
}

int main()
{

    int tiket, a, b, bayar;
    cout << "masukkan jumlah tiket yg dibeli : ";
    cin >> tiket;

    // melalui proses casting : jika variabelnya integer jika di / maka akan dibulatkan kalau tipe datanya pecahan float di / maka akan menjadi pecahan misal int 9/2=4 jika float 9/2 maka 4.5

    // proses casting
    // jika int/int = int  misal 9/2 maka 4
    // jika float/float =float misal 9/2 maka 4.5
    // jika int/float maka float
    // int = int /int maka int
    // float = int/int  misal float = 9 / 2 = 4 karena int pembulatan
    // float = int/ float misal float = 9/2.0 = 4.5
    // liat sebelah kiri ya float atau int kalau int maka pembulatan
    // a = floor(tiket / 3) * 2500;
    bayar = (tiket / 3 * 2500) + (tiket % 3 * 1000);
    cout << "total bayar = " << bayar << " ";
    int c = 9, d = 2;
    cout << c / d;
    cout << "wildan";
}