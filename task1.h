#ifndef TASK1_H
#define TASK1_H

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
};

#endif 


