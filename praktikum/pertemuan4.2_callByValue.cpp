// -------------------------
// Penggunaan Call By Value
// program pertukaran nilai
// -------------------------


#include <iostream> 

using namespace std;

int tukar(int x,int y);

int main(){
    int a,b;
    a=88;b=77;
    
    cout<<"\nNilai sebelum pemanggilan fungsi";
    cout<<"\na = "<<a<<" b = "<<b;
    tukar(a,b);
    cout<<"\nNilai setelah pemanggilan fungsi";
    cout<<"\na = "<<a<<" b = "<<b;
}

int tukar(int x, int y)
{
    int z;
    z = x; x = y; y = z ;
    cout<<"\n\nNilai di dalam fungsi tukar() ";
    cout<<"\nx = "<<x<<" y = "<<y<<endl;
}