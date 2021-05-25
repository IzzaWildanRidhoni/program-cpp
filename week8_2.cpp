#include <iostream>
using namespace std;
;

void cetak(int n,string karakter){
     for (int i = 1; i <=n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout<<karakter<<" ";
        }
        cout<<endl;
        
    }
}

int main(){
    int n;string karakter;
   cout<<"cetak berapa deret : ";cin>>n;
   cout<<"karakter yang akan di cetak : ";cin>>karakter;
   cetak(n,karakter);
}