#include <stdlib.h>
#include <iostream>
#include <string.h>
#include <complex>

using namespace std;
namespace solver{

class RealVariable{
public:
    int _a;
    double _b,_c;

RealVariable(){
    _a=_b=_c=0;
}


///// '*' //////
friend RealVariable &operator* (double n , RealVariable &x);
friend RealVariable &operator* (RealVariable &x , double n);

///// '/' //////
friend RealVariable &operator/ (RealVariable &x_1 , RealVariable &x_2);
friend RealVariable &operator/ (RealVariable &x , double n);
friend RealVariable &operator/ ( double n ,RealVariable &x);

///// '+' //////
friend RealVariable &operator+ (RealVariable &x_1 , RealVariable &x_2);
friend RealVariable &operator+ (RealVariable &x , double n);
friend RealVariable &operator+ ( double n ,RealVariable &x);

///// '-' //////
friend RealVariable &operator- (RealVariable &x_1 , RealVariable &x_2);
friend RealVariable &operator- (RealVariable &x , double n);
friend RealVariable &operator- ( double n ,RealVariable &x);

///// '^' //////
friend RealVariable &operator^ (RealVariable &x , int n);

///// '==' //////
friend RealVariable &operator== (RealVariable &x_1 , RealVariable &x_2);
friend RealVariable &operator== (RealVariable &x , double n);
friend RealVariable &operator== ( double n ,RealVariable &x);
};

class ComplexVariable{
public:
double _rel, _img;

ComplexVariable(){
    _rel=_img=0;
}

///// '*' //////
friend ComplexVariable &operator* (ComplexVariable &y , std::complex<double> n);
friend ComplexVariable &operator* ( std::complex<double> n ,ComplexVariable &y);
friend ComplexVariable &operator* (ComplexVariable &y , double n);
friend ComplexVariable &operator* ( double n ,ComplexVariable &y);


///// '/' //////
friend ComplexVariable &operator/ (ComplexVariable &y_1 , ComplexVariable &y_2);
friend ComplexVariable &operator/ (ComplexVariable &y , std::complex<double> n);
friend ComplexVariable &operator/ ( std::complex<double> n ,ComplexVariable &y);
friend ComplexVariable &operator/ (ComplexVariable &y , double n);
friend ComplexVariable &operator/ ( double n ,ComplexVariable &y);

///// '+' //////
friend ComplexVariable &operator+ (ComplexVariable &y_1 , ComplexVariable &y_2);
friend ComplexVariable &operator+ (ComplexVariable &y , std::complex<double> n);
friend ComplexVariable &operator+ ( std::complex<double> n ,ComplexVariable &y);
friend ComplexVariable &operator+ (ComplexVariable &y , double n);
friend ComplexVariable &operator+ ( double n ,ComplexVariable &y);

///// '-' //////
friend ComplexVariable &operator- (ComplexVariable &y_1 , ComplexVariable &y_2);
friend ComplexVariable &operator- (ComplexVariable &y , std::complex<double> n);
friend ComplexVariable &operator- ( std::complex<double> n ,ComplexVariable &y);
friend ComplexVariable &operator- (ComplexVariable &y , double n);
friend ComplexVariable &operator- ( double n ,ComplexVariable &y);

///// '^' //////
friend ComplexVariable &operator^ (ComplexVariable &y , int n);

///// '==' //////
friend ComplexVariable &operator== (ComplexVariable &y_1 , ComplexVariable &y_2);
friend ComplexVariable &operator== (ComplexVariable &y , std::complex<double> n);
friend ComplexVariable &operator== ( std::complex<double> n ,ComplexVariable &y);
friend ComplexVariable &operator== (ComplexVariable &y , double n);
friend ComplexVariable &operator== ( double n ,ComplexVariable &y);


};
double solve (RealVariable x);
double solve (ComplexVariable y);

};
