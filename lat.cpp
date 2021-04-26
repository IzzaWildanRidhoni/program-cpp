#include <iostream> //
// #include <cstdlib>

using namespace std;

int main()
{
    int uang;
    cout << "uang saya = ";
    cin >> uang;
    int ratusribu, puluhribu, ratus, total;
    ratusribu = uang / 100000;
    puluhribu = (uang % 100000) / 10000;
    ratus = ((uang % 100000) % 10000) / 100;
    cout << ratusribu << " lembar 100.000 , " << puluhribu << " lembar 10.000 ," << ratus << " lembar 100";
    cout << endl;
}