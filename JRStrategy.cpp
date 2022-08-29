#include "JRStrategy.hpp"
#include <math.h>
#include <cstring>
#include <string>

JRStrategy::JRStrategy(double vol, double interest, double delta) : BinomialLatticeStrategy(vol, interest, delta) 
{
    double k2 = ::sqrt(k);
    u = ::exp(s * k);
    d = 1.0/u;

    p = 0.5 * ((r - 0.5 * s * s) * k2 * 0.5) / s;
}