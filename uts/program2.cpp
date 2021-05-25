// NAMA : IZZA WILDAN RIDHONI
// NIM : 201057007
#include <iostream>
using namespace std;

int main(){
    int i,j,n;

	cout << "Masukkan nilai N: ";
	cin >> n;

    for (int i = n; i >= 0; i--)
    {
        for (int j = 1; j <= i; j++)
                cout << j;
        cout <<endl;
    }
}
