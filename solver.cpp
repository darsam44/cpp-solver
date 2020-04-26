#include "solver.hpp"
#include <iostream>
#include <string.h>
#include <complex>

using namespace std;
using namespace solver;

double solver:: solve (ComplexVariable y) {
    return 1;
}

double solver:: solve (RealVariable x) {
    return 1;
}

///// '*' //////
 solver::RealVariable &operator* (double n , RealVariable &x);
 solver::RealVariable &operator* (RealVariable &x , double n);

///// '/' //////
 solver::RealVariable &operator/ (RealVariable &x_1 , RealVariable &x_2);
 solver::RealVariable &operator/ (RealVariable &x , double n);
 solver::RealVariable &operator/ ( double n ,RealVariable &x);

///// '+' //////
 solver::RealVariable &operator+ (RealVariable &x_1 , RealVariable &x_2);
 solver::RealVariable &operator+ (RealVariable &x , double n);
 solver::RealVariable &operator+ ( double n ,RealVariable &x);

///// '-' //////
 solver::RealVariable &operator- (RealVariable &x_1 , RealVariable &x_2);
 solver::RealVariable &operator- (RealVariable &x , double n);
 solver::RealVariable &operator- ( double n ,RealVariable &x);

///// '^' //////
 solver::RealVariable &operator^ (RealVariable &x , int n);

///// '==' //////
 solver::RealVariable &operator== (RealVariable &x_1 , RealVariable &x_2);
 solver::RealVariable &operator== (RealVariable &x , double n);
 solver::RealVariable &operator== ( double n ,RealVariable &x);


////// Complex ///////

///// '*' //////
 solver::ComplexVariable &operator* (ComplexVariable &y , std::complex<double> n);
 solver::ComplexVariable &operator* ( std::complex<double> n ,ComplexVariable &y);
 solver::ComplexVariable &operator* (ComplexVariable &y , double n);
 solver::ComplexVariable &operator* ( double n ,ComplexVariable &y);


///// '/' //////
 solver::ComplexVariable &operator/ (ComplexVariable &y_1 , ComplexVariable &y_2);
 solver::ComplexVariable &operator/ (ComplexVariable &y , std::complex<double> n);
 solver::ComplexVariable &operator/ ( std::complex<double> n ,ComplexVariable &y);
 solver::ComplexVariable &operator/ (ComplexVariable &y , double n);
 solver::ComplexVariable &operator/ ( double n ,ComplexVariable &y);

///// '+' //////
 solver::ComplexVariable &operator+ (ComplexVariable &y_1 , ComplexVariable &y_2);
 solver::ComplexVariable &operator+ (ComplexVariable &y , std::complex<double> n);
 solver::ComplexVariable &operator+ ( std::complex<double> n ,ComplexVariable &y);
 solver::ComplexVariable &operator+ (ComplexVariable &y , double n);
 solver::ComplexVariable &operator+ ( double n ,ComplexVariable &y);

///// '-' //////
 solver::ComplexVariable &operator- (ComplexVariable &y_1 , ComplexVariable &y_2);
 solver::ComplexVariable &operator- (ComplexVariable &y , std::complex<double> n);
 solver::ComplexVariable &operator- ( std::complex<double> n ,ComplexVariable &y);
 solver::ComplexVariable &operator- (ComplexVariable &y , double n);
 solver::ComplexVariable &operator- ( double n ,ComplexVariable &y);

///// '^' //////
 solver::ComplexVariable &operator^ (ComplexVariable &y , int n);

///// '==' //////
 solver::ComplexVariable &operator== (ComplexVariable &y_1 , ComplexVariable &y_2);
 solver::ComplexVariable &operator== (ComplexVariable &y , std::complex<double> n);
 solver::ComplexVariable &operator== ( std::complex<double> n ,ComplexVariable &y);
 solver::ComplexVariable &operator== (ComplexVariable &y , double n);
 solver::ComplexVariable &operator== ( double n ,ComplexVariable &y);


