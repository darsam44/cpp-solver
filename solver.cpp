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
    double ans=0;
    double dis = x._b*x._b-4*x._a*x._c;
    if (dis < 0 ){
        throw runtime_error("There is no real solution");
    }
    else {
     dis = sqrt(dis);
     ans =(-1*x._b + dis)/(2*x._a);   
    }
    return ans;
}

///// '*' //////
RealVariable &solver::operator* (double n , RealVariable &x){
     x._b = n;
     return x;
 }
RealVariable &solver::operator* (RealVariable &x , double n){
     x._b = n;
     return x;
 }

///// '/' //////
 RealVariable &solver::operator/ (RealVariable &x_1 , RealVariable &x_2){
     // x^2/3x^2
     if (x_1._a != 0 && x_2._a != 0){
        double temp= x_1._a/ x_2._a;
        x_1._a=0;
        x_1._c+=temp;
     }

     return x_1;
 }

 RealVariable &solver::operator/ (RealVariable &x , double n){
    if (x._a != 0){
        x._a= x._a/n;
    }
    if (x._b != 0 ){
        x._b= x._b/n;
    }
    if (x._c != 0 ){
        x._c= x._c/n;
    }
     return x;
 }
 RealVariable &solver::operator/ ( double n ,RealVariable &x){
    if (x._a != 0){
    x._a= x._a/n;
    }
    if (x._b != 0 ){
        x._b= x._b/n;
    }
    if (x._c != 0 ){
        x._c= x._c/n;
    }
     return x;
 }

///// '+' /////
 RealVariable &solver::operator+ (RealVariable &x_1 , RealVariable &x_2){
    x_1._c= x_1._c+x_2._c;
    return x_1;
 }

 RealVariable &solver::operator+ (RealVariable &x , double n){
        x._c= x._c+n;
     return x;
 }
 RealVariable &solver::operator+ ( double n ,RealVariable &x){
     x._c= x._c+n;
     return x;
 }

///// '-' //////
 RealVariable &solver::operator- (RealVariable &x_1 , RealVariable &x_2){
     x_1._c= x_1._c-x_2._c;
     return x_1;
 }
RealVariable &solver::operator- (RealVariable &x , double n){
    x._c= x._c-n;
     return x;
 }
 RealVariable &solver::operator- ( double n ,RealVariable &x){
     x._c= x._c+n;
     return x;
 }

///// '^' //////
 RealVariable &solver::operator^ (RealVariable &x , int n){
    x._a =x._a+n;  
     return x;
 }

///// '==' //////
 RealVariable &solver::operator== (RealVariable &x_1 , RealVariable &x_2){
     if (x_2._a != 0){
        if (x_2._a < 0){
         x_1._a +=x_2._a;
        }
        else {
            x_1._a -=x_2._a;
        } 
     }
    if (x_2._b != 0){
         if (x_2._b < 0){
         x_1._b+=x_2._b;
        }
        else {
            x_1._b -=x_2._b;
        } 
     }
     if (x_2._c != 0){
          if (x_2._c < 0){
         x_1._c +=x_2._c;
        }
        else {
            x_1._c -=x_2._c;
        }  
     }
     return x_1;
 }
 RealVariable &solver::operator== (RealVariable &x , double n){
     if(n!=0){
         if(n>0){
             x._c-=n;
         }
         else{
             x._c+=n;
         }
     }
     return x;
 }
 RealVariable &solver::operator== ( double n ,RealVariable &x){
     if(n!=0){
         if(n>0){
             x._c-=n;
         }
         else{
             x._c+=n;
         }
     }
     return x;
 }


////// Complex ///////

///// '*' //////
 ComplexVariable &solver::operator* (ComplexVariable &y , std::complex<double> n){
     return y;
 }
 ComplexVariable &solver::operator* ( std::complex<double> n ,ComplexVariable &y){
     return y;
 }
 ComplexVariable &solver::operator* (ComplexVariable &y , double n){
     return y;
 }
 ComplexVariable &solver::operator* ( double n ,ComplexVariable &y){
     return y;
 }


///// '/' //////
 ComplexVariable &solver::operator/ (ComplexVariable &y_1 , ComplexVariable &y_2){
     return y_1;
 }
 ComplexVariable &solver::operator/ (ComplexVariable &y , std::complex<double> n){
     return y;
 }
 ComplexVariable &solver::operator/ ( std::complex<double> n ,ComplexVariable &y){
     return y;
 }
 ComplexVariable &solver::operator/ (ComplexVariable &y , double n){
     return y;
 }
 ComplexVariable &solver::operator/ ( double n ,ComplexVariable &y){return y;}

///// '+' //////
 ComplexVariable &solver::operator+ (ComplexVariable &y_1 , ComplexVariable &y_2){return y_1;}
 ComplexVariable &solver::operator+ (ComplexVariable &y , std::complex<double> n){return y;}
 ComplexVariable &solver::operator+ ( std::complex<double> n ,ComplexVariable &y){return y;}
 ComplexVariable &solver::operator+ (ComplexVariable &y , double n){return y;}
 ComplexVariable &solver::operator+ ( double n ,ComplexVariable &y){return y;}

///// '-' //////
 ComplexVariable &solver::operator- (ComplexVariable &y_1 , ComplexVariable &y_2){return y_1;}
 ComplexVariable &solver::operator- (ComplexVariable &y , std::complex<double> n){return y;}
 ComplexVariable &solver::operator- ( std::complex<double> n ,ComplexVariable &y){return y;}
 ComplexVariable &solver::operator- (ComplexVariable &y , double n){return y;}
 ComplexVariable &solver::operator- ( double n ,ComplexVariable &y){return y;}

///// '^' //////
 ComplexVariable &solver::operator^ (ComplexVariable &y , int n){return y;}

///// '==' //////
 ComplexVariable &solver::operator== (ComplexVariable &y_1 , ComplexVariable &y_2){return y_1;}
 ComplexVariable &solver::operator== (ComplexVariable &y , std::complex<double> n){return y;}
 ComplexVariable &solver::operator== ( std::complex<double> n ,ComplexVariable &y){return y;}
 ComplexVariable &solver::operator== (ComplexVariable &y , double n){return y;}
 ComplexVariable &solver::operator== ( double n ,ComplexVariable &y){return y;}

