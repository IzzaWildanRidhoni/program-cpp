#include <iostream>
using namespace std;

int main(){
    int tahun=2020;
    int ppdA=1000;
    int ppdB=1100;
    // kapan a>=b

    while(ppdA<ppdB){
        ppdA=ppdA+ppdA*0.02;
        ppdB=ppdB+ppdB*0.01;
        tahun=tahun+1;

        cout<<tahun<<" ppd A = "<<ppdA<<", ppdB = "<<ppdB<<endl;
    }
    cout<<"tahun = "<<tahun<<" jummlah penduduk  A > B , A ="<<ppdA<<" dan B = "<<ppdB;
    


}