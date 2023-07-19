#include <iostream>
#include "task1.h"
using namespace std;

int main(){
    double real,comp;
    cout<<"Enter real number: ";
    cin>>real;
    cout<<endl;
    cout<<"Enter complex number: ";
    cin>>comp;
    cout<<endl;
    // Object1
    Complex c1(real,comp);
    cout<<"Complex number c1 is: ";
    c1.PrintComplex();
    cout<<endl;
    cout<<"Conjugate of complex number c1 is: ";
    c1.Conjugate();
    cout<<endl;
    
    // Copy Object
    Complex c2=c1;
    cout<<"Complex number c2 is: ";
    c2.PrintComplex();
    cout<<endl;
    cout<<"Conjugate of complex number c2 is: ";
    c2.Conjugate();
    cout<<endl;
}