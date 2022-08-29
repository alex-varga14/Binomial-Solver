#include "ModCRRStrategy.hpp"
#include <math.h>
#include <cstring>
#include <string>

ModCRRStrategy::ModCRRStrategy(double vol, double interest, double delta, double S, double K, int N) : BinomialLatticeStrategy(vol, interest, delta) 
{
    // S = volatility, K = step size in time
    double KN = ::log(K/S) / double(N);
    double VN = s * ::sqrt(k);

    u = ::exp(KN + VN);
    d = ::exp(KN - VN);
    p = (::exp(r * k) - d) / (u - d);
}