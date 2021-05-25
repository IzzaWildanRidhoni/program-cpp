#include <iostream>
using namespace std;

int main(){
    int jumlah;
    
    cout<<"input : ";cin>>jumlah;

    for (int i = 0; i < jumlah; i++)
    {
        
        for (int j = 0; j < jumlah; j++)
        {
            cout<<"#";
        }
        cout<<endl;
    }
    
}
