#include "solver.hpp"
#include "doctest.h"
#include <iostream>
#include <stdexcept>
using namespace std;
using namespace solver;

TEST_CASE("Real Numbers")
{
    RealVariable x;

    CHECK(solve(2*x == 10) == 5 );
    CHECK( solve(5*x == 10) == 2);
    CHECK( solve(2*x+8 == 10) == 1);
    CHECK( solve(2+x-3 == 10) == 11);
    CHECK( solve(3*x*2+6 == 12) == 1 );
    CHECK( solve(6*x/6 == -1) == -1 );
    CHECK( solve(3*x-8 == x-3) == 2.5 );
    CHECK( solve(3*x-3 == 10*x/5) == 3 );
    CHECK( solve(2*x-4 == 10) == 7 );
    CHECK( solve(2*x-6 == 10) == 8 );
    CHECK( solve(3*x-8 == 10) == 6 );
    CHECK( solve(3*x-3 == 10) == 4.3333 );
    CHECK( ( solve (  (x^2) + 2*x + 4.0 == 20 + 6.0*x/2 - x ) == 4  ||  solve ( (x^2) + 2*x + 4.0 == 20 + 6.0*x/2 - x ) == -4 ) )  ;
    CHECK( ( solve (  (x^2)  == 16 ) == 4  ||  solve ( (x^2) == 16 ) == -4 ) )  ;
    CHECK( ( solve (  (x^2)  == 36 ) == 6  ||  solve ( (x^2) == 36 ) == -6 ) )  ; 
    CHECK( ( solve (  (x^2)  == 64 ) == 8  ||  solve ( (x^2) == 64 ) == -8 ) )  ; 
    CHECK( ( solve (  (x^2)  == 49 ) == 7 ||  solve ( (x^2) == 49 ) == -7 ) )  ; 
    CHECK( ( solve (  (x^2)  == 1 ) == 1 ||  solve ( (x^2) == 1 ) == -1 ) )  ; 
    CHECK( ( solve (  (x^2)  == 10 ) == 3.1622 ||  solve ( (x^2) == 10 ) == -3.1622 ) )  ; 
    CHECK( solve ( (x^2) == 11) == 3.3166 );
    CHECK( solve((x^2) == 1000) == 31.6227 );
    CHECK( solve(2*x == -10) == -5 );
    CHECK( solve(2*x == -1230.4) == -615.2 );
    CHECK( solve((2*x^2)==0) == 0 );
    CHECK( solve(2*x == -1) == -0.5 );
      CHECK(((solve((x^2) + 4*x + 4.0 == 40 + 0.0*x/2 - x) ==4 )|| (solve((x^2) + 4*x + 4.0 == 40 + 0.0*x/2 - x) ==-9)));
     CHECK(((solve((x^2) + 5*x + 5.0 == 60 + 0.0*x/2 - x) ==5 )|| (solve((x^2) + 5*x + 5.0 == 60 + 0.0*x/2 - x) ==-11)));
     CHECK(((solve((x^2) + 6*x + 6.0 == 84 + 0.0*x/2 - x) ==6 )|| (solve((x^2) + 6*x + 6.0 == 84 + 0.0*x/2 - x) ==-13)));
     CHECK(((solve((x^2) + 7*x + 7.0 == 112 + 0.0*x/2 - x) ==7 )|| (solve((x^2) + 7*x + 7.0 == 112 + 0.0*x/2 - x) ==-15)));
     CHECK(((solve((x^2) + 8*x + 8.0 == 144 + 0.0*x/2 - x) ==8 )|| (solve((x^2) + 8*x + 8.0 == 144 + 0.0*x/2 - x) ==-17)));
     CHECK(((solve((x^2) + 9*x + 9.0 == 180 + 0.0*x/2 - x) ==9 )|| (solve((x^2) + 9*x + 9.0 == 180 + 0.0*x/2 - x) ==-19)));


    CHECK_THROWS ( solve((x^2) == -81));
    CHECK_THROWS (  solve((x^2) == -16));
    CHECK_THROWS (  solve((x^2) == -10));
    CHECK_THROWS (  solve((x^2) == -87));
    CHECK_THROWS (  solve((x^2) == -96));
    CHECK_THROWS (  solve((x^2) == -100082));
    CHECK_THROWS (  solve((x^2) == -43537));
    CHECK_THROWS (  solve((x^2) == -564.752));
    CHECK_THROWS (  solve((x^2) == -1445));
    CHECK_THROWS ( solve((x^2) == -19));
    CHECK_THROWS (  solve((x^2) == -17));
    CHECK_THROWS ( solve((x^2) == -12000));
    CHECK_THROWS (  solve((x^2) == -16.98));
    CHECK_THROWS( solve( (x^2) ==-5) );
    CHECK_THROWS( solve( (x^2) ==-5 ) ) ;
    CHECK_THROWS(solve((x^2)==-9)  );
    CHECK_THROWS( solve((x^2) ==-98) );
    CHECK_THROWS(solve((x^2) ==-1000)  );
    CHECK_THROWS(solve(((x^2)+x+1 ==0) ));
    CHECK_THROWS( solve(((2*x^2)+3*x+2 ==0) ));
    CHECK_THROWS( solve(((12*x^2)+5*x==-60) ));
    CHECK_THROWS (  solve((x^2) == -17));
    CHECK_THROWS (  solve((x^2) == -1999));
    CHECK_THROWS (  solve((x^2) == -7867));
    CHECK_THROWS (  solve((x^2) == -6776));
    CHECK_THROWS (  solve((x^2) == -100.0082));
    CHECK_THROWS (  solve((x^2) == -4333.0537));
    CHECK_THROWS (  solve((x^2) == -56124.7502));
    CHECK_THROWS (  solve((x^2) == -144455));
    CHECK_THROWS (  solve((x^2) == -1119));
    CHECK_THROWS (  solve((x^2) == -1743));
    CHECK_THROWS (  solve((x^2) == -120500));
    CHECK_THROWS (  solve((x^2) == -16.1198));
    CHECK_THROWS( solve ( (x^2) == -522) );
    CHECK_THROWS( solve( ( x^2) == -533 ) );
    CHECK_THROWS( solve( (x^2) == -954) );
    CHECK_THROWS( solve( (x^2) == -9867 ) );
    CHECK_THROWS( solve( (x^2) == -1030 )  );
    CHECK_THROWS( solve(((x^2)+x ==-1) ));
    CHECK_THROWS( solve(((2*x^2)+3*x ==-2) ));
    CHECK_THROWS( solve(((12*x^2)+4*x==-7) ));
    CHECK_THROWS(solve((x^2)==-100));
    CHECK_THROWS( solve((x^2)==-16));
    CHECK_THROWS( solve((x^2)==-1));
    CHECK_THROWS( solve(2*(x^2)==-16));
    CHECK_THROWS( solve(2*(x^2)==-100));
    CHECK_THROWS(solve((x^2)==-25));
    CHECK_THROWS(solve(2*(x^2)==-50));
    CHECK_THROWS(solve(2*(x^2)==-7));

}


TEST_CASE("Complex Numbers")
{
ComplexVariable y;


    CHECK( ( solve ( (y^2) +196 == 0) == std::complex<double> (0,14) || solve ( (y^2) +196 == 0) == std::complex<double> (0,-14) ) ) ;
    CHECK( ( solve ( (y^2) +196 == 0) == std::complex<double> (0,14) || solve ( (y^2) +196 == 0) == std::complex<double> (0,-14) ) ) ;

    CHECK( ( solve ( (y^2) == -9) == std::complex<double> (0,3) || solve ( (y^2)== -9) == std::complex<double> (0,-3)  )  );
    CHECK( ( solve (3*y-8 == y-3) == std::complex<double> (2.5,0) ) );
    CHECK( ( solve (4*y-7.5 == y-3) ==  std::complex<double> (1.5,0) ) );
    CHECK( ( solve (3*y-6 == y-3) == std::complex<double> (1.5,0 ) ) );
    CHECK( ( solve (3*y-18 == y-3) == std::complex<double> (7.5,0) ) );
    CHECK( ( solve ( 3*y == y-3) == std::complex<double> (-1.5,0) ) );
    CHECK((solve((y^2)==100)==std::complex<double>(10,0)||solve((y^2)==100)==std::complex<double>(-10,0)));
    CHECK((solve((y^2)==-25)==std::complex<double>(0,5)||solve((y^2)==-25)==std::complex<double>(0,-5)));
    CHECK((solve(2*(y^2)==-50)==std::complex<double>(0,5)||solve(2*(y^2)==-50)==std::complex<double>(0,-5)));
    CHECK((solve((y^2)==-9)==std::complex<double>(0,3)||solve((y^2)==-9)==std::complex<double>(0,-3)));
    CHECK((solve((y^2)==-81)==std::complex<double>(0,9)||solve((y^2)==-81)==std::complex<double>(0,-9)));
    CHECK((solve((y^2) + 3*y + 4 == 20 + 6*y/2 )==std::complex<double>(4,0)||solve((y^2) + 3*y + 4 == 20 + 6*y/2 )==std::complex<double>(-4,0))); 
    CHECK((solve((y^2) + 3*y == 16 + 3*y )==std::complex<double>(4,0)||solve((y^2) + 3*y == 16 + 3*y )==std::complex<double>(-4,0))); 
    CHECK((solve((y^2) + 6*y/2 == 16 + 9*y/3 )==std::complex<double>(4,0)||solve((y^2) + 6*y/2 == 16 + 9*y/3 )==std::complex<double>(-4,0))); //(-4,0)
    CHECK((solve((y^2)==9)==std::complex<double>(3,0)||solve((y^2)==9)==std::complex<double>(-3,0)));  
    CHECK((solve((y^2)+5==30)==std::complex<double>(5,0)||solve((y^2)+5==30)==std::complex<double>(-5,0))); 
    CHECK((solve(2*y-2==4)==std::complex<double>(3,0)||solve(2*y-2==4)==std::complex<double>(-3,0)));   
    CHECK((solve((y^2) == 16)==std::complex<double>(4,0)||solve((y^2) == 16)==std::complex<double>(-4,0))); 
    CHECK((solve((y^2)==25)==std::complex<double>(5,0)||solve((y^2)==25)==std::complex<double>(-5,0)));  
    CHECK((solve((y^2)+2==18)==std::complex<double>(4,0)||solve((y^2)+2==18)==std::complex<double>(-4,0)));  


}