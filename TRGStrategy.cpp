#include "TRGStrategy.hpp"
#include <math.h>
#include <cstring>
#include <string>

TRGStrategy::TRGStrategy(double vol, double interest, double delta) : BinomialLatticeStrategy(vol, interest, delta) 
{
    bType = Additive;

    double nu = r - 0.5 * s * s;

    double nudt = nu * k;

    //TRG params
    u = ::sqrt(s * s * k + nudt * nudt);
    d = -u;
    p = 0.5 * (1.0 + (nudt/u));
}