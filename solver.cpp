#include "solver.hpp"
#include <iostream>
#include <string.h>
#include <complex>

using namespace std;
using namespace solver;

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


double solver:: solve (ComplexVariable y) {
return 1;
}

///// '*' //////
RealVariable solver::operator* (const double n , const RealVariable& x){
     return RealVariable(x._a , x._b*n , x._c );
 }
RealVariable solver::operator* (const RealVariable& x , const double n){
     return RealVariable(x._a , x._b*n , x._c );
 }

///// '/' //////
 RealVariable solver::operator/ (const RealVariable& x_1 , const RealVariable& x_2){
     // x^2/3x^2
     if (x_1._a != 0 && x_2._a != 0){
         double temp= x_1._a/ x_2._a;
        return RealVariable( 0 , x_1._b , x_1._c+temp);
     }
     return x_1;
 }

 RealVariable solver::operator/ (const RealVariable& x , const double n){
    RealVariable v;
    if (x._a != 0){
        v._a= x._a/n;
    }
    if (x._b != 0 ){
        v._b= x._b/n;
    }
    if (x._c != 0 ){
        v._c= x._c/n;
    }
     return v;
 }
 RealVariable solver::operator/ ( const double n ,const RealVariable& x){
    RealVariable v;
    if (x._a != 0){
        v._a= x._a/n;
    }
    if (x._b != 0 ){
        v._b= x._b/n;
    }
    if (x._c != 0 ){
        v._c= x._c/n;
    }
     return v;
 }

///// '+' /////
 RealVariable solver::operator+ (const RealVariable& x_1 , const RealVariable& x_2){
    return RealVariable(x_1._a+x_2._a , x_1._b+x_2._b ,x_1._c+x_2._c);
 }

 RealVariable solver::operator+ (const RealVariable& x , const double n){
     return RealVariable(x._a , x._b , x._c+n);
 }
 RealVariable solver::operator+ ( const double n ,const RealVariable& x){
     return RealVariable(x._a , x._b , x._c+n);
 }

///// '-' //////
 RealVariable solver::operator- (const RealVariable& x_1 , const RealVariable& x_2){
    return RealVariable(x_1._a-x_2._a , x_1._b-x_2._b ,x_1._c-x_2._c);
 }
RealVariable solver::operator- (const RealVariable& x , const double n){
    return RealVariable(x._a , x._b , x._c-n);
 }
 RealVariable solver::operator- ( const double n ,const RealVariable& x){
     return RealVariable(x._a , x._b , n-x._c);
 }

///// '^' //////
 RealVariable solver::operator^ (const RealVariable& x , int n){ 
     return RealVariable (x._a+x._b , 0 ,x._c);
 }

///// '==' //////
 RealVariable solver::operator== (const RealVariable& x_1 , const RealVariable& x_2){
     RealVariable v_1;
     if (x_2._a != 0){
        if (x_2._a < 0){
         v_1._a =x_1._a+ x_2._a;
        }
        else {
            v_1._a =x_1._a- x_2._a;
        } 
     }
    if (x_2._b != 0){
         if (x_2._b < 0){
         v_1._b =x_1._b+ x_2._b;
        }
        else {
            v_1._b =x_1._b- x_2._b;
        } 
     }
     if (x_2._c != 0){
          if (x_2._c < 0){
         v_1._c =x_1._c+ x_2._c;
        }
        else {
            v_1._c =x_1._c- x_2._c;
        }  
     }
     return v_1;
 }
 RealVariable solver::operator== (const RealVariable& x , const double n){
     RealVariable v;
     if(n!=0){
         if(n>0){
             v._c= x._c -n;
         }
         else{
             v._c= x._c +n;
         }
     }
     return v;
 }
 RealVariable solver::operator== ( const double n ,const RealVariable& x){
      RealVariable v;
     if(n!=0){
         if(n>0){
             v._c = n - x._c;
         }
         else{
             v._c=n +x._c;
         }
     }
     return v;
 }

////// Complex ///////

///// '*' //////
 ComplexVariable solver::operator* (const ComplexVariable &y , std::complex<double> n){
     return y;
 }
 ComplexVariable solver::operator* ( std::complex<double> n ,const ComplexVariable &y){
     return y;
 }
 ComplexVariable solver::operator* (const ComplexVariable &y , double n){
     return y;
 }
 ComplexVariable solver::operator* ( double n ,const ComplexVariable &y){
     return y;
 }


///// '/' //////
 ComplexVariable solver::operator/ (const ComplexVariable &y_1 , const ComplexVariable &y_2){
     return y_1;
 }
 ComplexVariable solver::operator/ (const ComplexVariable &y , std::complex<double> n){
     return y;
 }
 ComplexVariable solver::operator/ ( std::complex<double> n ,const ComplexVariable &y){
     return y;
 }
 ComplexVariable solver::operator/ (const ComplexVariable &y , double n){
     return y;
 }
 ComplexVariable solver::operator/ ( double n ,const ComplexVariable &y){return y;}

///// '+' //////
 ComplexVariable solver::operator+ (const ComplexVariable &y_1 , const ComplexVariable &y_2){return y_1;}
 ComplexVariable solver::operator+ (const ComplexVariable &y , std::complex<double> n){return y;}
 ComplexVariable solver::operator+ ( std::complex<double> n ,const ComplexVariable &y){return y;}
 ComplexVariable solver::operator+ (const ComplexVariable &y , double n){return y;}
 ComplexVariable solver::operator+ ( double n ,const ComplexVariable &y){return y;}

///// '-' //////
 ComplexVariable solver::operator- (const ComplexVariable &y_1 , const ComplexVariable &y_2){return y_1;}
 ComplexVariable solver::operator- (const ComplexVariable &y , std::complex<double> n){return y;}
 ComplexVariable solver::operator- ( std::complex<double> n ,const ComplexVariable &y){return y;}
 ComplexVariable solver::operator- (const ComplexVariable &y , double n){return y;}
 ComplexVariable solver::operator- ( double n ,const ComplexVariable &y){return y;}

///// '^' //////
 ComplexVariable solver::operator^ (const ComplexVariable &y , int n){return y;}

///// '==' //////
 ComplexVariable solver::operator== (const ComplexVariable &y_1 , const ComplexVariable &y_2){return y_1;}
 ComplexVariable solver::operator== (const ComplexVariable &y , std::complex<double> n){return y;}
 ComplexVariable solver::operator== ( std::complex<double> n ,const ComplexVariable &y){return y;}
 ComplexVariable solver::operator== (const ComplexVariable &y , double n){return y;}
 ComplexVariable solver::operator== ( double n ,const ComplexVariable &y){return y;}





