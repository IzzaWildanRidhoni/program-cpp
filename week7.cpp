#include <iostream>

using namespace std;
int main()
{
	int i,j,banyak;
	
	cout<<"masuukan banyak : ";
	cin>>banyak;
	
    for(i=1;i<=banyak;i++) {
	    for(j=1;j<=i;j++) {
	      cout << " *";
	    }
  		cout << endl;
    }
    
     for(i=banyak;i>=1;i--) {
	    for(j=1;j<=i;j++) {
	      cout << " *";
	    }
  		cout << endl;
    }
	
	cout<<endl;

    for(i = 0; i < banyak; i++) {
	    for(j = 1; j <= banyak-i; j++) {
	      cout << " *";
	    }
   	 	cout << endl;
  	}
    
}

//1 
