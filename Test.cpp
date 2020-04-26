#include "solver.hpp"
#include "doctest.h"
#include <iostream>
#include <stdexcept>
using namespace std;
using namespace solver;


TEST_CASE("Real Numbers")
{
    RealVariable x;
    CHECK( solver::solve(2*x == 10) == 5 );
    CHECK( solver::solve(5*x == 10) == 2);
    CHECK( solver::solve(2*x+8 == 10) == 1);
    CHECK( solver::solve(2+x-3 == 10) == 11);
    CHECK( solver::solve(3*x*2+6 == 12) == 1 );
    CHECK( solver::solve(6*x/6 == -1) == -1 );
    CHECK( solver::solve(3*x-8 == x-3) == 2.5 );
    CHECK( solver::solve(3*x-3 == 10*x/5) == 3 );
    CHECK( solver::solve(2*x-4 == 10) == 7 );
    CHECK( solver::solve(2*x-6 == 10) == 8 );
    CHECK( solver::solve(3*x-8 == 10) == 6 );
    CHECK( solver::solve(3*x-3 == 10) == 4.3333 );
    CHECK( solver::solve(((x^2) + 2*x + 4.0 == 20 + 6.0*x/2 - x ) == 4) ||((x^2) + 2*x + 4.0 == 20 + 6.0*x/2 - x ) == -4) ;
    CHECK( solver::solve(((x^2) == 16) == 4) || (((x^2) == 16) == -4));
    CHECK( solver::solve(((x^2) == 36) == 6) || (((x^2) == 36) == -6));
    CHECK( solver::solve(((x^2) == 64) == 6) || (((x^2) == 64) == -8));
    CHECK( solver::solve(((x^2) == 49) == 6) || (((x^2) == 49) == -7));
    CHECK( solver::solve((x^2 == 1) == 1 )||(x^2 == 1) == -1 );
    CHECK( solver::solve(2*x^2 == 10) == 2.2360);
    CHECK( solver::solve(x^2 == 11) == 3.31 );
    CHECK( solver::solve(x^2 == 1000) == 31.6227 );
    CHECK( solver::solve(2*x == -10) == -5 );
    CHECK( solver::solve(2*x == -1230.4) == -615.2 );
    CHECK( solver::solve(2*x^2==0) == 0 );
    CHECK( solver::solve(2*x == -1) == -0.5 );
    CHECK_THROWS ( solver:: solve((x^2) == -81));
    CHECK_THROWS ( solver:: solve((x^2) == -16));
    CHECK_THROWS ( solver:: solve((x^2) == -10));
    CHECK_THROWS ( solver:: solve((x^2) == -87));
    CHECK_THROWS ( solver:: solve((x^2) == -96));
    CHECK_THROWS ( solver:: solve((x^2) == -100082));
    CHECK_THROWS ( solver:: solve((x^2) == -43537));
    CHECK_THROWS ( solver:: solve((x^2) == -564.752));
    CHECK_THROWS ( solver:: solve((x^2) == -1445));
    CHECK_THROWS ( solver:: solve((x^2) == -19));
    CHECK_THROWS ( solver:: solve((x^2) == -17));
    CHECK_THROWS ( solver:: solve((x^2) == -12000));
    CHECK_THROWS ( solver:: solve((x^2) == -16.98));
    CHECK_THROWS( solver::solve(x^2 ==-5) );
    CHECK_THROWS( solver::solve(x^2 ==-5));
    CHECK_THROWS( solver::solve(x^2==-9)  );
    CHECK_THROWS( solver::solve(x^2 ==-98) );
    CHECK_THROWS( solver::solve(x^2 ==-1000)  );
    CHECK_THROWS( solver::solve(((x^2)+x+1 ==0) ));
    CHECK_THROWS( solver::solve(((2*x^2)+3*x+2 ==0) ));
    CHECK_THROWS( solver::solve(((12*x^2)+63*x==-5) ));
    CHECK_THROWS ( solver:: solve((x^2) == -17));
    CHECK_THROWS ( solver:: solve((x^2) == -1999));
    CHECK_THROWS ( solver:: solve((x^2) == -7867));
    CHECK_THROWS ( solver:: solve((x^2) == -6776));
    CHECK_THROWS ( solver:: solve((x^2) == -100.0082));
    CHECK_THROWS ( solver:: solve((x^2) == -4333.0537));
    CHECK_THROWS ( solver:: solve((x^2) == -56124.7502));
    CHECK_THROWS ( solver:: solve((x^2) == -144455));
    CHECK_THROWS ( solver:: solve((x^2) == -1119));
    CHECK_THROWS ( solver:: solve((x^2) == -1743));
    CHECK_THROWS ( solver:: solve((x^2) == -120500));
    CHECK_THROWS ( solver:: solve((x^2) == -16.1198));
    CHECK_THROWS( solver::solve(x^2 ==-522) );
    CHECK_THROWS( solver::solve(x^2 ==-533));
    CHECK_THROWS( solver::solve(x^2==-954)  );
    CHECK_THROWS( solver::solve(x^2 ==-9867) );
    CHECK_THROWS( solver::solve(x^2 ==-1030)  );
    CHECK_THROWS( solver::solve(((x^2)+x ==-1) ));
    CHECK_THROWS( solver::solve(((2*x^2)+3*x ==-2) ));
    CHECK_THROWS( solver::solve(((12*x^2)+70*x==-5+7) ));
}

TEST_CASE("Complex Numbers")
{
ComplexVariable y;
    CHECK( solver::solve((y^2 ==-2009) == 44.8218i) || (y^2 ==-2009) == -44.8218i) ;
    CHECK( solver::solve((y^2 +19863==-1) == 140.9397i) || (y^2 +19863==-1) == -140.9397i) ;
    CHECK( solver::solve((y^2 +10==-98) ==10.3923i) || (y^2 +10==-98) == -10.3923i) ;
    CHECK( solver::solve((5*y-10.5==0) ==2.1+0i) ) ;
    CHECK( solver::solve(((2*y^2)+7*y+9==0) ==-1.75 +1.1989i) || ((2*y^2)+7*y+9) ==-1.75 -1.1989i) ;
    CHECK( solver::solve(((9*y^2)+8*y+5 ==0) -0.4444+0.5983i) || ((9*y^2)+8*y+5 ==0)== -0.4444-0.5983i) ;
    CHECK( solver::solve(((87*y^2)+5*y+3 ==0) -0.0287+0.1834i) || ((87*y^2)+5*y+3 ==0)== -0.0287-0.1834i) ;
    CHECK( solver::solve(((95*y^2)+85*y==-777) -0.4473+2.8246i) || ((95*y^2)+85*y==-777)== -0.4473-2.8246i) ;
    CHECK( solver::solve(((9*y^2)+17*y ==-253) -0.9444+5.2171i) || ((9*y^2)+17*y ==-253)== -0.9444-5.2171i) ;
    CHECK( solver::solve((y^2 ==-5) == 2.2360i) || (y^2 ==-5) == -2.2360i) ;
    CHECK( solver::solve((y^2 ==-20) == 4.4721i) || (y^2 ==-20) == -4.4721i) ;
    CHECK( solver::solve((y^2 ==-500) == 22.3603i) || (y^2 ==-500) == -22.3603i) ;
    CHECK( solver::solve((y^2 ==-5.89) == 2.4269i) || (y^2 ==-5.89) == -2.4269i) ;
    CHECK( solver::solve((y^2 ==-1.005) == 1.0024i) || (y^2 ==-1.005) == -1.0024i) ;
    CHECK( solver::solve((y^2 ==-209) == 14.4568i) || (y^2 ==-209) == -14.4568i) ;
    CHECK( solver::solve((y^2 +196==0) == 14i) || (y^2 +196==0) == -14i) ;
    CHECK( solver::solve((y^2 +14==-5) == 2.2360i) || (y^2 +14==-5) == -2.2360i) ;
    CHECK( solver::solve((y^2 +14==-190) == 14.2828i) || (y^2 +14==-190) == -14.2828i) ;
    CHECK( solver::solve((y^2 +154.9==0) == 12.4458i) || (y^2 +154.9==0) == -12.4458i) ;
    CHECK( solver::solve((y^2 +122.89==-10) == 11.5277i) || (y^2 +196==0) == -11.5277i) ;
    CHECK( solver::solve((y^2==-9) == 3i) || (y^2==-9) == -3i) ;
    CHECK( solver::solve((y^2 ==-98) == 9.8994i) || (y^2 ==-98) == -9.8994i) ;
    CHECK( solver::solve((y^2 ==-1000) == 31.6227i) || (y^2 ==-1000) == -31.6227i) ;
    CHECK( solver::solve((y^2==-9.9990) == 3.1621i) || (y^2==-9.9990) == -3.1621i) ;
    CHECK( solver::solve((y^2 +196==-12345.678) == 111.9896i) || (y^2 +196==-12345.678) == -111.9896i) ;
    CHECK( solver::solve((y^2 +1==0) == 1i) || (y^2 +196==0) == -1i) ;
    CHECK( solver::solve((y^2 +0.5==0) == 0.7071i) || (y^2 +0.5==0) == -0.7071i) ;
    CHECK( solver::solve((y^2 +1997==0) == 44.6878i) || (y^2 +1997==0) == -44.6878i) ;
    CHECK( solver::solve(((y^2)+y+1 ==0) == -0.5+0.8660i ) || (((y^2)+y+1 ==0) == -0.5-0.8660i));
    CHECK( solver::solve(((2*y^2)+3*y+2 ==0) == -0.75-0.6614i ) || (((2*y^2)+3*y+1 ==0) == -0.75+0.6614i));
    CHECK( solver::solve(((12*y^2)+63*y ==-5) == -0.0806+0i ) || (((12*y^2)+63*y ==-5) == -5.1693+0i));
    CHECK( solver::solve(y^2==4) == 2.5+0i );
    CHECK( solver::solve(3*y-8 == y-3) == 2.5+0i );
    CHECK( solver::solve(4*y-7.5 == y-3) == 1.5+0i );
    CHECK( solver::solve(3*y-6 == y-3) == 1.5+0i );
    CHECK( solver::solve(3*y-18 == y-3) == 7.5+0i );
    CHECK( solver::solve(3*y== y-3) == -1.5+0i );
    CHECK( solver::solve(((y^2)+y ==-1) == -0.5+0.8660i ) || (((y^2)+y ==-1) == -0.5-0.8660i));
    CHECK( solver::solve(((2*y^2)+y ==-2*y-1) == -0.75-0.6614i ) || (((2*y^2)+y ==-2*y-1) == -0.75+0.6614i));
    CHECK( solver::solve(((12*y^2)+70*y ==-5+7*y) == -0.0806+0i ) || (((12*y^2)+70*y ==-5+7*y) == -5.1693+0i));
    CHECK( solver::solve(((3*y^2)-8 == y-3) == 1.46837+0i ) || ((3*y^2)-8 == y-3) == -1.1350+0i );
    CHECK( solver::solve(((8*y^2)+9*y+5==0) -0.5625+0.5555i ) || ((8*y^2)+9*y+5==0) -0.5625-0.5555i);
}