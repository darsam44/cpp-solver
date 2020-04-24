#include <stdlib.h>
#include <iostream>
#include <string.h>
#include <complex>

using namespace std;
namespace solver{

//4*x
class solve{

private:
  static double _a,_b,_c;
  solve(){
      _a=0;
      _b=0;
      _c=0;
  }

public:
    solve operator* (double b){
    solve::_b=b;
    }

//4*x^2
     solve operator^ (RealVariable x){
        solve::_a=solve::_b;
        solve::_b=0;
    }



solve operator+ (RealVariable x);
solve operator+ (ComplexVariable y);
solve operator* (ComplexVariable y);
solve operator^ (int n);

};



class RealVariable{
  



};

class ComplexVariable{




};
};
