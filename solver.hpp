#include <stdlib.h>
#include <iostream>
#include <string.h>
#include <complex>

using namespace std;
namespace solver{


    class RealVariable{
    public:
    double x;

        RealVariable(){
            x=0;
        }

    };

 
    class ComplexVariable{
        public:
        double _im,_re;

        ComplexVariable(){
            _im=0;
            _re=0;
        }

    };


    class solve{
        public:
        double _a,_b,_c;
        
        
         friend solve operator* (double b,RealVariable x);
         solve operator^ (RealVariable x);
         solve operator+ (int c);
    };
};

//4*x
// class solve{

// private:
//   static double _a,_b,_c;
//   solve(){
//       _a=0;
//       _b=0;
//       _c=0;
//   }

// public:
//     solve operator* (double b){
//     solve::_b=b;
//     }

//     //4*x^2
//      solve operator^ (RealVariable x){
//         solve::_a=solve::_b;
//         solve::_b=0;
//     }

//     //x^2+4
//     solve operator+ (int c){
//     solve::_c=c;
//     }


// solve operator+ (ComplexVariable y);
// solve operator* (ComplexVariable y);
// solve operator^ (int n);

// };



// class RealVariable{
//   double x;

//   RealVariable(){
//       x=0;
//   }



// };

// class ComplexVariable{




// };
// };
