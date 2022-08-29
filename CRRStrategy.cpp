#include "CRRStrategy.hpp"
#include <math.h>
#include <cstring>
#include <string>

CRRStrategy::CRRStrategy(double vol, double interest, double delta) : BinomialLatticeStrategy(vol, interest, delta) 
{
    double R1 = (r - 0.5 * s * s) * k;
    double R2 = s * ::sqrt(k);

    u = ::exp(R1 + R2);
    d = ::exp(R1 - R2);

    double discounting = ::exp(- r*k);
    p = 0.5;
}