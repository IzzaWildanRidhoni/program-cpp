#include <iostream>
using namespace std;

int main(){

	int jumlah;
	cout<<"jumlah = ";cin>>jumlah;
    for (int i = 1; i <= jumlah; i++)
    {
       
       for (int k=i; k <jumlah ; k++)
        {
            cout<<" ";
        }
        
        for (int j = 1; j <= i; j++)
        {
        	
            cout<<"*";
        }
        cout<<endl;
        
    }
  
}
    
