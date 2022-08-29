#include "EQPStrategy.hpp"
#include <math.h>
#include <cstring>
#include <string>

EQPStrategy::EQPStrategy(double vol, double interest, double delta) : BinomialLatticeStrategy(vol, interest, delta) 
{
    bType = Additive;

    double nu = r - 0.5 * s * s;

    double a = nu * k;
    double b = 0.5 * ::sqrt( (4.0 * s * s * k) - (3.0 * nu * nu * k *k));

    //EQP params
    u = 0.5 * a + b;
    d = 1.5 * a - b;
    p = 0.5;
}