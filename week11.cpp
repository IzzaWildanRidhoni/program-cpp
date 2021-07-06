#include <iostream>
using namespace std;

void rata(int x[],int n)
{
    int jum=0,rata;
    for (int i = 0; i <=n; i++)
    {
        jum+=x[i];
    }
    rata=jum/5;
    cout<<"rata-rata : "<<rata<<endl;

    
}

int main(){
int x[5];
x[0]=2;
x[1]=6;
x[2]=7;
x[3]=9;
x[4]=10;

rata(x,4);
}