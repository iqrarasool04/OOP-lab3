#ifndef TASK1.H
#define TASK1.H

using namespace std;

class Complex{
    private:
    double real;
    double complex;

    public:
    Complex();
    Complex(double r, double i);
    void PrintComplex();
    void Conjugate();    
}

#endif TASK1.H


