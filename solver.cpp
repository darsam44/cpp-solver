#include "solver.hpp"
#include <iostream>
#include <string.h>
#include <complex>

using namespace std;
using namespace solver;
 
 /* solve the equation for the real number ,
 by : (-b +- sqrt( b^2 -4*a*c ))/2*a */
double solver:: solve (RealVariable x) {
    double ans=0; 
    double dis = (x._b*x._b)-(4*x._a*x._c); //discrimnation
    if( x._a == 0 && x._b ==0  && x._c != 0){
         throw runtime_error("There is no real solution");
    }
    if ( x._a == 0 ){// like 2x+2=0
        ans = (-1*x._c)/x._b; 
    }
    else{
        if (dis < 0 ){
            throw runtime_error("There is no real solution");
        }
        else {
        dis = sqrt(dis);
        ans =(-1*x._b + dis)/(2*x._a);   
        }
    }
     double rounded = (int)(ans * 10000.0)/10000.0; //to round the number 
    return rounded;
}


/* solve the euation for the complex number
 by : (-b +- sqrt( b^2 -4*a*c ))/2*a */
complex<double> solver:: solve (ComplexVariable y) {
    complex<double> dis=(y._b*y._b)-(complex<double> (4,0)*y._a*y._c);//( b^2 -4*a*c )
    complex<double> ans=0;
    if(y._a==complex<double> (0,0)){// like 2x+2=0
        ans=(-y._c)/y._b;
    }
    else{
        dis=sqrt(dis);
        ans=((complex<double> (-1)*y._b)+dis)/(complex<double> (2,0)*y._a);
    }
    return ans;

}

///// '*' //////
RealVariable solver::operator* (const double n , const RealVariable& x){
     return RealVariable(x._a*n , x._b*n , x._c*n);
}

RealVariable solver::operator* (const RealVariable& x , const double n){
     return RealVariable(x._a*n , x._b*n , x._c*n );
}

///// '/' //////
 RealVariable solver::operator/ (const RealVariable& x_1 , const RealVariable& x_2){
     RealVariable v_1;
     v_1._a= x_1._a;
     v_1._b= x_1._b;
     v_1._c= x_1._c;
     if (x_1._a != 0 && x_2._a != 0 ){// 2x^2/4x^2= 2/4
         v_1._a =0;
         v_1._c+= x_1._a/x_2._a;
     }
     if (v_1._a != 0 && x_2._b != 0 ){ //sx^2/4x= 2x/4
         v_1._a =0;
         v_1._b+= x_1._a/x_2._b;   
     }
     if (x_1._b != 0 && x_2._b != 0){ //2x/4x=2/4
         v_1._c+= v_1._b/x_2._b;
         v_1._b =0;
     }
     return v_1;
 }


 RealVariable solver::operator/ (const RealVariable& x , const double n){//(2x^2+4x+6)/2
    if ( n == 0 ){
         throw runtime_error("There is no real solution");
    }
    RealVariable v;
     v._a= x._a;
     v._b= x._b;
     v._c= x._c;
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

 RealVariable solver::operator/ ( const double n ,const RealVariable& x){ // 4/(2x^2+4x+5)
    RealVariable v;
     v._a= x._a;
     v._b= x._b;
     v._c= x._c;
    if (x._a != 0){
        v._a= n/x._a;
    }
    if (x._b != 0 ){
        v._b= n/x._b;
    }
    if (x._c != 0 ){
        v._c= n/x._c;
    }
     return v;
 }

///// '+' /////
 RealVariable solver::operator+ (const RealVariable& x_1 , const RealVariable& x_2){ //2x^2+3x+5 + 2x^2
    return RealVariable(x_1._a+x_2._a , x_1._b+x_2._b ,x_1._c+x_2._c);
 }

 RealVariable solver::operator+ (const RealVariable& x , const double n){//2x^2+3x+5 + 3
     return RealVariable(x._a , x._b , x._c+n);
 }
 RealVariable solver::operator+ ( const double n ,const RealVariable& x){//3+ 2x^2+3x+5 
     return RealVariable(x._a , x._b , x._c+n);
 }

///// '-' //////
 RealVariable solver::operator- (const RealVariable& x_1 , const RealVariable& x_2){//2x^2+3x+5 - 2x^2
    return RealVariable(x_1._a-x_2._a , x_1._b-x_2._b ,x_1._c-x_2._c);
 }
RealVariable solver::operator- (const RealVariable& x , const double n){//2x^2+3x+5 - 3
    return RealVariable(x._a , x._b , x._c-n);
 }
 RealVariable solver::operator- ( const double n ,const RealVariable& x){ //3- (2x^2+3x+5)
     return RealVariable(-x._a , -x._b , n-x._c);
 }

///// '^'//////
 RealVariable solver::operator^ (const RealVariable& x , int n){ 
     if (n==2){
     return RealVariable (x._a+x._b , 0 ,x._c);
     }
     else {//isn't allow more that 2
        throw runtime_error("The pow is bigger then 2");
     }
 }

///// '==' //////
 RealVariable solver::operator== (const RealVariable& x_1 , const RealVariable& x_2){//x^2+3x+4==x^2-4x+3
     RealVariable v_1;
     v_1._a= x_1._a;
     v_1._b= x_1._b;
     v_1._c= x_1._c;
     if (x_2._a != 0){
            v_1._a =x_1._a+ (-1*x_2._a);
     }
    if (x_2._b != 0){
         v_1._b =x_1._b+ (-1*x_2._b);
     }
     if (x_2._c != 0){
         v_1._c =x_1._c+ (-1*x_2._c);  
     }
     return v_1;
 }

 RealVariable solver::operator== (const RealVariable& x , const double n){//x^2+3x+4==3
     RealVariable v;
     v._a= x._a;
     v._b= x._b;
     v._c= x._c;
     v._c= x._c + (-1*n);
    
     return v;
 }
 RealVariable solver::operator== ( const double n ,const RealVariable& x){//4==x^2-4x+3
      RealVariable v;
      v._a= x._a;
     v._b= x._b;
     v._c= x._c;
     v._c= x._c + (-1*n);
     return v;
 }

////// Complex ///////
/*just the same but in complex*/

///// '*' //////
 ComplexVariable solver::operator* (const ComplexVariable &y , std::complex<double> n){//[(2i+3)x^2+(3i+1)x+5]*(3i+1)
        return ComplexVariable(y._a*n, y._b*n,y._c*n);  
 }

 ComplexVariable solver::operator* ( std::complex<double> n ,const ComplexVariable &y){//(3i+1)*[(2i+3)x^2+(3i+1)x+5]
     return (y*n); //calling the one above(^)
 }

 ComplexVariable solver::operator* (const ComplexVariable &y , double n){//3*[(2i+3)x^2+(3i+1)x+5]
     return ComplexVariable(y._a*n, y._b*n,y._c*n); 
 }

 ComplexVariable solver::operator* ( double n ,const ComplexVariable &y){//[(2i+3)x^2+(3i+1)x+5]*3
     return (y*n); //calling the one above(^)
 }


///// '/' //////
 ComplexVariable solver::operator/ (const ComplexVariable &y_1 , const ComplexVariable &y_2){//[(2i+3)x^2+(3i+1)x+5]/[(3i+1)x^2+4
      ComplexVariable v_1;
     v_1._a= y_1._a;
     v_1._b= y_1._b;
     v_1._c= y_1._c;
     if (y_1._a != std::complex<double> (0) &&y_2._a != std::complex<double> (0) ){
         v_1._a =0;
         v_1._c+= y_1._a/y_2._a;
     }
     if (v_1._a != std::complex<double> (0) && y_2._b != std::complex<double> (0) ){
         v_1._a =0;
         v_1._b+= y_1._a/y_2._b;   
     }
     if (y_1._b != std::complex<double> (0) && y_2._b != std::complex<double> (0)){
         v_1._c+= v_1._b/y_2._b;
         v_1._b =0;
     }
     return v_1;
 }

 ComplexVariable solver::operator/ (const ComplexVariable &y , std::complex<double> n){//[(2i+3)x^2+(3i+1)x+5]/(4+i)
     return ComplexVariable(y._a/n, y._b/n,y._c/n);
 }
 ComplexVariable solver::operator/ ( std::complex<double> n ,const ComplexVariable &y){//(4+i)/[(2i+3)x^2+(3i+1)x+5]
     return ComplexVariable(n/y._a, n/y._b,n/y._c);
 }
 ComplexVariable solver::operator/ (const ComplexVariable &y , double n){//[(2i+3)x^2+(3i+1)x+5]/4
     return  ComplexVariable(y._a/n, y._b/n,y._c/n);
 }
 ComplexVariable solver::operator/ ( double n ,const ComplexVariable &y){//4/[(2i+3)x^2+(3i+1)x+5]
     return (y/n); //calling the one above(^)
     }

///// '+' //////
 ComplexVariable solver::operator+ (const ComplexVariable &y_1 , const ComplexVariable &y_2){//[(2i+3)x^2+(3i+1)x+5]+[(3i+1)x^2+4x]
     return ComplexVariable(y_1._a+y_2._a , y_1._b+y_2._b ,y_1._c+y_2._c);
     }
 ComplexVariable solver::operator+ (const ComplexVariable &y , std::complex<double> n){ //[(2i+3)x^2+(3i+1)x+5]+(3i+1)
     return  ComplexVariable(y._a, y._b,y._c+n);
     }
 ComplexVariable solver::operator+ ( std::complex<double> n ,const ComplexVariable &y){//(3i+1)+[(2i+3)x^2+(3i+1)x+5]
     return (y+n); //calling the one above(^)
     }
 ComplexVariable solver::operator+ (const ComplexVariable &y , double n){//[(2i+3)x^2+(3i+1)x+5]+3
     return  ComplexVariable(y._a, y._b,y._c+n);
     }
 ComplexVariable solver::operator+ ( double n ,const ComplexVariable &y){//3+[(2i+3)x^2+(3i+1)x+5]
     return (y+n); //calling the one above(^)
     }

///// '-' //////
 ComplexVariable solver::operator- (const ComplexVariable &y_1 , const ComplexVariable &y_2){//[(2i+3)x^2+(3i+1)x+5]-[(3i+1)x^2+4x]
     return ComplexVariable(y_1._a-y_2._a , y_1._b-y_2._b ,y_1._c-y_2._c);
     }
 ComplexVariable solver::operator- (const ComplexVariable &y , std::complex<double> n){//[(2i+3)x^2+(3i+1)x+5]-(3i+1)
     return  ComplexVariable(y._a, y._b,y._c-n);
     }
 ComplexVariable solver::operator- ( std::complex<double> n ,const ComplexVariable &y){//(3i+1)-[(2i+3)x^2+(3i+1)x+5]
     return ComplexVariable(y._a, y._b,n-y._c);
     }
 ComplexVariable solver::operator- (const ComplexVariable &y , double n){//[(2i+3)x^2+(3i+1)x+5]-3
     return  ComplexVariable(y._a, y._b,y._c-n);
     }
 ComplexVariable solver::operator- ( double n ,const ComplexVariable &y){//3-[(2i+3)x^2+(3i+1)x+5]
     return ComplexVariable(y._a, y._b,n-y._c);
     }

///// '^' //////
 ComplexVariable solver::operator^ (const ComplexVariable &y , int n){//[(2i+3)x+5]^2
     if (n==2){
     return ComplexVariable (y._a+y._b , 0 ,y._c);
     }
     else { //allow only ^2
        throw runtime_error("The pow is bigger then 2");
     }
 }

///// '==' //////
//[(2i+3)x^2+(3i+1)x+5]==[(3i+1)x^2+4x]
 ComplexVariable solver::operator== (const ComplexVariable &y_1 , const ComplexVariable &y_2){
      ComplexVariable v_1;
     v_1._a= y_1._a;
     v_1._b= y_1._b;
     v_1._c= y_1._c;
     if (y_2._a != std::complex<double> (0)){
         v_1._a =y_1._a+(std::complex<double> (-1)*y_2._a);
     }
    if (y_2._b != std::complex<double> (0)){
            v_1._b =y_1._b + (std::complex<double> (-1)*y_2._b);
     }
     if (y_2._c != std::complex<double> (0)){
         v_1._c =y_1._c+(std::complex<double> (-1)*y_2._c);  
     }
     return v_1;
     }

     //[(2i+3)x^2+(3i+1)x+5]==[(3i+1)]
 ComplexVariable solver::operator== (const ComplexVariable &y , std::complex<double> n){
       ComplexVariable v;
      v._a= y._a;
     v._b= y._b;
     v._c= y._c;
     v._c= y._c + (std::complex<double> (-1)*n);
     return v;
     }

     //[(3i+1)]==[(2i+3)x^2+(3i+1)x+5]
 ComplexVariable solver::operator== ( std::complex<double> n ,const ComplexVariable &y){
       ComplexVariable v;
      v._a= y._a;
     v._b= y._b;
     v._c= y._c;
     v._c= y._c + (std::complex<double> (-1)*n);
     return v;
     }
     
     //[(2i+3)x^2+(3i+1)x+5]==5
 ComplexVariable solver::operator== (const ComplexVariable &y , double n){
      ComplexVariable v;
      v._a= y._a;
     v._b= y._b;
     v._c= y._c;
     v._c= y._c + (-1*n);
     return v;
     }

     //5==[(2i+3)x^2+(3i+1)x+5]
 ComplexVariable solver::operator== ( double n ,const ComplexVariable &y){
       ComplexVariable v;
      v._a= y._a;
     v._b= y._b;
     v._c= y._c;
     v._c= y._c + (-1*n);
     return v;
     }



