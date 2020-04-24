#include "solver.hpp"
#include <iostream>
#include <string.h>
#include <complex>

using namespace std;
using namespace solver;

class solve{

private:
  static double _a,_b,_c;
  solve(){
      _a=0;
      _b=0;
      _c=0;
  }

public:
    solve operator* (double b, RealVariable x){
    _b=b;
    return *this;
    }

    //4*x^2
     solve operator^ (RealVariable x){
        _a=solve::_b;
        _b=0;
    }

    //x^2+4
    solve operator+ (int c){
    _c=c;
    }



};



