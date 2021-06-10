#include <iostream>
using namespace std;
// nilai default
int tambah(int x=20,int y=30);

int main(){
    cout<<tambah()<<endl;
    cout<<tambah(100,200);
}

int tambah(int x,int y)
{
    return x+y;
}