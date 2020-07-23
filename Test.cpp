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
}


TEST_CASE("Complex Numbers")
{
ComplexVariable y;


    CHECK( ( solve ( (y^2) == -2009) == std::complex<double> (0,44.8219) || solve ( (y^2) ==-2009) == std::complex<double> (0,-44.8219) ) ) ;
    CHECK( ( solve ( (y^2) +19863 == -1) == std::complex<double> (0,140.9397) || solve ( (y^2) +19863 == -1) == std::complex<double> (0,140.9397) ) ) ;
    CHECK( ( solve( (y^2) +10 == -98) == std::complex<double> (10.3923,0)  || solve ( (y^2) +10 == -98) == std::complex<double> (10.3923,0) ) ) ;
    CHECK( ( solve ( (2*y^2)+7*y+9 == 0 ) == std::complex<double> (1.1989,-1.75) || solve ( (2*y^2)+7*y+9 == 0) ==std::complex<double> (-1.1989,-1.75) ) );
    CHECK( ( solve ( (9*y^2)+8*y+5 == 0) == std::complex<double> (-0.4444,0.5983) || solve ( (9*y^2)+8*y+5 == 0)== std::complex<double> (-0.4444,-0.5983) ) ) ;
    CHECK( ( solve ( (87*y^2)+5*y+3 == 0) == std::complex<double> (-0.0287,0.1834)  || solve ( (87*y^2)+5*y+3 == 0) == std::complex<double> (-0.0287,-0.1834) ) ) ;
    CHECK( ( solve ( (95*y^2)+85*y == -777) == std::complex<double> (-0.4473,2.8246) || solve( (95*y^2)+85*y==-777) == std::complex<double> (-0.4473,-2.8246) ) );
    CHECK( ( solve ( (9*y^2)+17*y == -253) == std::complex<double> (-0.9444,5.2171) || solve ( (9*y^2)+17*y == -253) == std::complex<double> (-0.9444,-5.2171) ) ) ;
    CHECK( ( solve ( (y^2) == -5) == std::complex<double> (0, 2.2360)  || solve ( (y^2) == -5) == std::complex<double> (0,-2.2360) ) ) ;
    CHECK( ( solve ( (y^2) == -20) == std::complex<double> (0, 4.4721)  || solve ( (y^2) ==-20) == std::complex<double> (0,-4.4721) ) );
    CHECK( ( solve ( (y^2) == -500) == std::complex<double> (0, 22.3603)  || solve ( (y^2) == -500) == std::complex<double> (0,-22.3603) ) );
    CHECK( ( solve ( (y^2) ==-5.89) == std::complex<double> (0,2.4269) || solve ( (y^2) == -5.89) == std::complex<double> (0,-2.4269) ) ) ;
    CHECK( ( solve ( (y^2) ==-1.005) ==  std::complex<double> (0,1.0024) || solve ( (y^2) == -1.005) == std::complex<double> (0,-1.0024) ) ) ;
    CHECK( ( solve ( (y^2) ==-209) == std::complex<double> (0,14.4568) || solve ( (y^2) == -209) == std::complex<double> (0,-14.4568) ) );  
    CHECK( ( solve ( (y^2) +196 == 0) == std::complex<double> (0,14) || solve ( (y^2) +196 == 0) == std::complex<double> (0,-14) ) ) ;
    CHECK( ( solve ( (y^2) +196 == 0) == std::complex<double> (0,14) || solve ( (y^2) +196 == 0) == std::complex<double> (0,-14) ) ) ;

  
    CHECK( ( solve ( (y^2) +14 == -5) == std::complex<double> (0,2.2360) || solve ( (y^2) +14 == -5) == std::complex<double> (0,-2.2360) ) ) ;
    CHECK( ( solve ( (y^2) +14 == -190) == std::complex<double> (0,14.2828) || solve ( (y^2) +14 == -190) == std::complex<double> (0,-14.2828) ) ) ;
    CHECK( ( solve ( ( y^2) +154.9 == 0) == std::complex<double> (0,12.4458) || solve ( (y^2) +154.9 == 0) == std::complex<double> (0,-12.4458) ) );
    CHECK( ( solve ( (y^2) +122.89 == -10) == std::complex<double> (0,11.5277) || solve ( (y^2) +196 == 0) == std::complex<double> (0,-11.5277) ) );
    CHECK( ( solve ( (y^2) == -9) == std::complex<double> (0,3) || solve ( (y^2)== -9) == std::complex<double> (0,-3)  )  );
    CHECK( ( solve ( (y^2) == -98) == std::complex<double> (0,9.8994) || solve ( (y^2) == -98) == std::complex<double> (0,-9.8994) ) ) ;
    CHECK( ( solve ( (y^2) == -1000) == std::complex<double> (0,31.6227) || solve ( (y^2) == -1000) == std::complex<double> (0,-31.6227) ) ) ;
    CHECK( ( solve ( (y^2) == -9.9990) == std::complex<double> (0,3.1621) || solve ( (y^2)== -9.9990) ==std::complex<double> (0,-3.1621) ) );
    CHECK( ( solve ( (y^2) +196 == -12345.678) ==  std::complex<double> (0,111.9896) || solve ( (y^2) +196 == -12345.678) == std::complex<double> (0,-111.9896) ) );
    CHECK( ( solve ( (y^2) +0.5 == 0) == std::complex<double> (0,0.7071) || solve ( (y^2) +0.5 == 0) == std::complex<double> (0,-0.7071) ) );
    CHECK( ( solve ( (y^2) +1997 == 0) == std::complex<double> (0,44.6878) || solve ( (y^2) +1997 == 0) == std::complex<double> (0,-44.6878) ) ) ;
    CHECK( ( solve ( (y^2)+y+1 == 0) == std::complex<double> (-0.5,0.8660) || solve ( (y^2)+y+1 == 0) == std::complex<double> (-0.5,-0.8660) ) ) ;
    CHECK( ( solve ( (2*y^2)+3*y+2 == 0) == std::complex<double> (-0.75,-0.6614) || solve ( (2*y^2)+3*y+1 == 0) == std::complex<double> (-0.75,0.6614) ) );
    CHECK( ( solve ( (12*y^2)+63*y == -5) == std::complex<double> (-0.0806,0)  || solve ( (12*y^2)+63*y == -5) == std::complex<double> (-5.1693,0) ) );
    CHECK( ( solve (3*y-8 == y-3) == std::complex<double> (2.5,0) ) );
    CHECK( ( solve (4*y-7.5 == y-3) ==  std::complex<double> (1.5,0) ) );
    CHECK( ( solve (3*y-6 == y-3) == std::complex<double> (1.5,0 ) ) );
    CHECK( ( solve (3*y-18 == y-3) == std::complex<double> (7.5,0) ) );
    CHECK( ( solve ( 3*y == y-3) == std::complex<double> (-1.5,0) ) );
    CHECK( ( solve ( (y^2)+y == -1) ==  std::complex<double> (-0.5,0.8660) || solve ( (y^2)+y == -1) == std::complex<double> (-0.5,-0.8660) ) );
    CHECK( ( solve ( (2*y^2)+y == -2*y-1) == std::complex<double> (-0.75,-0.6614)  || solve ( (2*y^2)+y == -2*y-1) == std::complex<double> (-0.75,0.6614 ) ) );
    CHECK( ( solve ( (12*y^2)+70*y == -5+7*y) == std::complex<double> (-0.0806,0) || solve ( (12*y^2)+70*y == -5+7*y) == std::complex<double> (-5.1693,0) ) );
    CHECK( ( solve (  (3*y^2)-8 == y-3) ==  std::complex<double> (1.46837,0) || solve ( (3*y^2)-8 == y-3) == std::complex<double> (-1.1350,0) ) );
    CHECK( ( solve(  (8*y^2)+9*y+5 == 0) == std::complex<double> (-0.5625,0.5555) || solve ( (8*y^2)+9*y+5==0) == std::complex<double> (-0.5625,-0.5555) ) );
}