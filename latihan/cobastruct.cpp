#include <iostream>
#include<stdio.h>
#include<string.h>
using namespace std;

struct Courses
{
    char WebSite[50];
    char Subject[50];
    int Price;
};


int main(){
    struct Courses C;
    
    // initialization
     //Initialization
   strcpy( C.WebSite, "w3schools.in");
   strcpy( C.Subject, "The C Programming Language"); 
   C.Price = 0;
   
   //Print
   printf( "WebSite : %s\n", C.WebSite);
   printf( "Book Author : %s\n", C.Subject);
   printf( "Book Price : %d\n", C.Price);
}