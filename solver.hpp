#pragma once
#include <stdlib.h>
#include <iostream>
#include <string.h>
#include <complex>

using namespace std;
namespace solver{

    class RealVariable{
    public:
        double _a;
        double _b,_c;

    RealVariable(){
        this->_a=0;
        this->_c=0;
        this->_b=1;
    }

    RealVariable(double a , double b ,double c){
        this->_a=a;
        this->_b=b;
        this->_c=c;
    }

    ///// '*' //////
    friend RealVariable operator* (const double n ,const RealVariable& x);
    friend RealVariable operator* (const RealVariable& x , const double n);

    ///// '/' //////
    friend RealVariable operator/ (const RealVariable& x_1 ,const RealVariable& x_2);
    friend RealVariable operator/ (const RealVariable& x , const double n);
    friend RealVariable operator/ ( const double n ,const RealVariable& x);

    ///// '+' //////
    friend RealVariable operator+ (const RealVariable& x_1 , const RealVariable& x_2);
    friend RealVariable operator+ (const RealVariable& x , const double n);
    friend RealVariable operator+ ( const double n ,const RealVariable& x);

    ///// '-' //////
    friend RealVariable operator- (const RealVariable& x_1 , const RealVariable& x_2);
    friend RealVariable operator- (const RealVariable& x , const double n);
    friend RealVariable operator- ( const double n ,const RealVariable& x);

    ///// '^' //////
    friend RealVariable operator^ (const RealVariable& x , int n);

    ///// '==' //////
    friend RealVariable operator== (const RealVariable& x_1 , const RealVariable& x_2);
    friend RealVariable operator== (const RealVariable& x , const double n);
    friend RealVariable operator== ( const double n ,const RealVariable& x);
    };

    class ComplexVariable{
    public:
    complex<double> _a;
    complex<double> _b, _c;

    ComplexVariable(){
        _a=0;
        _b=1; 
        _c=0;
    }

    ComplexVariable(complex<double> a,complex<double> b , complex<double> c){
        _a=a;
        _b=b;
        _c =c;
    }

    ///// '*' //////
    friend ComplexVariable operator* (const ComplexVariable &y , std::complex<double> n);
    friend ComplexVariable operator* ( std::complex<double> n ,const ComplexVariable &y);
    friend ComplexVariable operator* (const ComplexVariable &y , double n);
    friend ComplexVariable operator* ( double n ,const ComplexVariable &y);


    ///// '/' //////
    friend ComplexVariable operator/ (const ComplexVariable &y_1 , const ComplexVariable &y_2);
    friend ComplexVariable operator/ (const ComplexVariable &y , std::complex<double> n);
    friend ComplexVariable operator/ ( std::complex<double> n ,const ComplexVariable &y);
    friend ComplexVariable operator/ (const ComplexVariable &y , double n);
    friend ComplexVariable operator/ ( double n ,const ComplexVariable &y);

    ///// '+' //////
    friend ComplexVariable operator+ (const ComplexVariable &y_1 , const ComplexVariable &y_2);
    friend ComplexVariable operator+ (const ComplexVariable &y , std::complex<double> n);
    friend ComplexVariable operator+ ( std::complex<double> n ,const ComplexVariable &y);
    friend ComplexVariable operator+ (const ComplexVariable &y , double n);
    friend ComplexVariable operator+ ( double n ,const ComplexVariable &y);

    ///// '-' //////
    friend ComplexVariable operator- (const ComplexVariable &y_1 , const ComplexVariable &y_2);
    friend ComplexVariable operator- (const ComplexVariable &y , std::complex<double> n);
    friend ComplexVariable operator- ( std::complex<double> n ,const ComplexVariable &y);
    friend ComplexVariable operator- (const ComplexVariable &y , double n);
    friend ComplexVariable operator- ( double n ,const ComplexVariable &y);

    ///// '^' //////
    friend ComplexVariable operator^ (const ComplexVariable &y , int n);

    ///// '==' //////
    friend ComplexVariable operator== (const ComplexVariable &y_1 ,const  ComplexVariable &y_2);
    friend ComplexVariable operator== (const ComplexVariable &y , std::complex<double> n);
    friend ComplexVariable operator== ( std::complex<double> n ,const ComplexVariable &y);
    friend ComplexVariable operator== (const ComplexVariable &y , double n);
    friend ComplexVariable operator== ( double n ,const ComplexVariable &y);


    };

/* solve the equation for the real number */
double solve (RealVariable x);

/* solve the euation for the complex number*/
complex<double> solve (ComplexVariable y);

}
