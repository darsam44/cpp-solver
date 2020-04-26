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
 solver::RealVariable &solver::operator* (double n , RealVariable &x){
     return x;
 }
 solver::RealVariable &solver::operator* (RealVariable &x , double n){
     return x;
 }

///// '/' //////
 solver::RealVariable &solver::operator/ (RealVariable &x_1 , RealVariable &x_2){
     return x_1;
 }
 solver::RealVariable &solver::operator/ (RealVariable &x , double n){
     return x;
 }
 solver::RealVariable &solver::operator/ ( double n ,RealVariable &x){
     return x;
 }

///// '+' //////
 solver::RealVariable &solver::operator+ (RealVariable &x_1 , RealVariable &x_2){
     return x_1;
 }
 solver::RealVariable &solver::operator+ (RealVariable &x , double n){
     return x;
 }
 solver::RealVariable &solver::operator+ ( double n ,RealVariable &x){
     return x;
 }

///// '-' //////
 solver::RealVariable &solver::operator- (RealVariable &x_1 , RealVariable &x_2){
     return x_1;
 }
 solver::RealVariable &solver::operator- (RealVariable &x , double n){
     return x;
 }
 solver::RealVariable &solver::operator- ( double n ,RealVariable &x){
     return x;
 }

///// '^' //////
 solver::RealVariable &solver::operator^ (RealVariable &x , int n){
     return x;
 }

///// '==' //////
 solver::RealVariable &solver::operator== (RealVariable &x_1 , RealVariable &x_2){
     return x_1;
 }
 solver::RealVariable &solver::operator== (RealVariable &x , double n){
     return x;
 }
 solver::RealVariable &solver::operator== ( double n ,RealVariable &x){
     return x;
 }


////// Complex ///////

///// '*' //////
 solver::ComplexVariable &solver::operator* (ComplexVariable &y , std::complex<double> n){
     return y;
 }
 solver::ComplexVariable &solver::operator* ( std::complex<double> n ,ComplexVariable &y){
     return y;
 }
 solver::ComplexVariable &solver::operator* (ComplexVariable &y , double n){
     return y;
 }
 solver::ComplexVariable &solver::operator* ( double n ,ComplexVariable &y){
     return y;
 }


///// '/' //////
 solver::ComplexVariable &solver::operator/ (ComplexVariable &y_1 , ComplexVariable &y_2){
     return y_1;
 }
 solver::ComplexVariable &solver::operator/ (ComplexVariable &y , std::complex<double> n){
     return y;
 }
 solver::ComplexVariable &solver::operator/ ( std::complex<double> n ,ComplexVariable &y){
     return y;
 }
 solver::ComplexVariable &solver::operator/ (ComplexVariable &y , double n){
     return y;
 }
 solver::ComplexVariable &solver::operator/ ( double n ,ComplexVariable &y){return y;}

///// '+' //////
 solver::ComplexVariable &solver::operator+ (ComplexVariable &y_1 , ComplexVariable &y_2){return y_1;}
 solver::ComplexVariable &solver::operator+ (ComplexVariable &y , std::complex<double> n){return y;}
 solver::ComplexVariable &solver::operator+ ( std::complex<double> n ,ComplexVariable &y){return y;}
 solver::ComplexVariable &solver::operator+ (ComplexVariable &y , double n){return y;}
 solver::ComplexVariable &solver::operator+ ( double n ,ComplexVariable &y){return y;}

///// '-' //////
 solver::ComplexVariable &solver::operator- (ComplexVariable &y_1 , ComplexVariable &y_2){return y_1;}
 solver::ComplexVariable &solver::operator- (ComplexVariable &y , std::complex<double> n){return y;}
 solver::ComplexVariable &solver::operator- ( std::complex<double> n ,ComplexVariable &y){return y;}
 solver::ComplexVariable &solver::operator- (ComplexVariable &y , double n){return y;}
 solver::ComplexVariable &solver::operator- ( double n ,ComplexVariable &y){return y;}

///// '^' //////
 solver::ComplexVariable &solver::operator^ (ComplexVariable &y , int n){return y;}

///// '==' //////
 solver::ComplexVariable &solver::operator== (ComplexVariable &y_1 , ComplexVariable &y_2){return y_1;}
 solver::ComplexVariable &solver::operator== (ComplexVariable &y , std::complex<double> n){return y;}
 solver::ComplexVariable &solver::operator== ( std::complex<double> n ,ComplexVariable &y){return y;}
 solver::ComplexVariable &solver::operator== (ComplexVariable &y , double n){return y;}
 solver::ComplexVariable &solver::operator== ( double n ,ComplexVariable &y){return y;}


