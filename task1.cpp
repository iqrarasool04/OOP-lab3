#include <iostream>
#include "task1.h"
using namespace std;

Complex::Complex(){
    real = 0;
    complex = 0;
}

Complex::Complex(double r, double c){
    real = r;
    complex = c;
}

void Complex::PrintComplex(){
    if (complex>0){
        cout<<real<<"+"<<complex<<"i"<<endl;   
    }
    if (complex<0){
        cout<<real<<"-"<<complex*(-1)<<"i"<<endl;
    }
}

void Complex::Conjugate(){
    if (complex>0){
        cout<<real<<"-"<<complex<<"i"<<endl;   
    }
    else if (complex<0){
        cout<<real<<"+"<<complex*(-1)<<"i"<<endl;   
    }
}
