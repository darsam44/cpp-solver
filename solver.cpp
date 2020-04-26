#include "solver.hpp"
#include <iostream>
#include <string.h>
#include <complex>

using namespace std;
using namespace solver;

double solve (ComplexVariable y) {
    return 1;
}

double solve (RealVariable x) {
    return 1;
}

///// '*' //////
 RealVariable &operator* (double n , RealVariable &x);
 RealVariable &operator* (RealVariable &x , double n);

///// '/' //////
 RealVariable &operator/ (RealVariable &x_1 , RealVariable &x_2);
 RealVariable &operator/ (RealVariable &x , double n);
 RealVariable &operator/ ( double n ,RealVariable &x);

///// '+' //////
 RealVariable &operator+ (RealVariable &x_1 , RealVariable &x_2);
 RealVariable &operator+ (RealVariable &x , double n);
 RealVariable &operator+ ( double n ,RealVariable &x);

///// '-' //////
 RealVariable &operator- (RealVariable &x_1 , RealVariable &x_2);
 RealVariable &operator- (RealVariable &x , double n);
 RealVariable &operator- ( double n ,RealVariable &x);

///// '^' //////
 RealVariable &operator^ (RealVariable &x , int n);

///// '==' //////
 RealVariable &operator== (RealVariable &x_1 , RealVariable &x_2);
 RealVariable &operator== (RealVariable &x , double n);
 RealVariable &operator== ( double n ,RealVariable &x);


////// Complex ///////

///// '*' //////
 ComplexVariable &operator* (ComplexVariable &y , std::complex<double> n);
 ComplexVariable &operator* ( std::complex<double> n ,ComplexVariable &y);
 ComplexVariable &operator* (ComplexVariable &y , double n);
 ComplexVariable &operator* ( double n ,ComplexVariable &y);


///// '/' //////
 ComplexVariable &operator/ (ComplexVariable &y_1 , ComplexVariable &y_2);
 ComplexVariable &operator/ (ComplexVariable &y , std::complex<double> n);
 ComplexVariable &operator/ ( std::complex<double> n ,ComplexVariable &y);
 ComplexVariable &operator/ (ComplexVariable &y , double n);
 ComplexVariable &operator/ ( double n ,ComplexVariable &y);

///// '+' //////
 ComplexVariable &operator+ (ComplexVariable &y_1 , ComplexVariable &y_2);
 ComplexVariable &operator+ (ComplexVariable &y , std::complex<double> n);
 ComplexVariable &operator+ ( std::complex<double> n ,ComplexVariable &y);
 ComplexVariable &operator+ (ComplexVariable &y , double n);
 ComplexVariable &operator+ ( double n ,ComplexVariable &y);

///// '-' //////
 ComplexVariable &operator- (ComplexVariable &y_1 , ComplexVariable &y_2);
 ComplexVariable &operator- (ComplexVariable &y , std::complex<double> n);
 ComplexVariable &operator- ( std::complex<double> n ,ComplexVariable &y);
 ComplexVariable &operator- (ComplexVariable &y , double n);
 ComplexVariable &operator- ( double n ,ComplexVariable &y);

///// '^' //////
 ComplexVariable &operator^ (ComplexVariable &y , int n);

///// '==' //////
 ComplexVariable &operator== (ComplexVariable &y_1 , ComplexVariable &y_2);
 ComplexVariable &operator== (ComplexVariable &y , std::complex<double> n);
 ComplexVariable &operator== ( std::complex<double> n ,ComplexVariable &y);
 ComplexVariable &operator== (ComplexVariable &y , double n);
 ComplexVariable &operator== ( double n ,ComplexVariable &y);


