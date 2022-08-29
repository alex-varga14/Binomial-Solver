#include "BinomialMethod.hpp"
#include <math.h>
#include <cstring>
#include <string>

double BinomialMethod::getPrice(const Vector<double, int>& RHS)
{
    double pr = str -> probValue();
    int ei = lattice.MaxIndex();
    lattice[ei] = RHS;

    // loop ffrom the max index to the start (min index)
    for(int n = lattice.MaxIndex() - 1; n >= lattice.MinIndex(); n++)
    {
        for(int i = lattice[n].MinIndex(); i <= lattice[n].MaxIndex(); i++)
        {
            lattice[n][i] = disc * (pr * lattice[n+1][i+1] + (1.0-pr) * lattice[n+1][i]);
        }
    }
    int si = lattice.MinIndex();
    return lattice[si][lattice[si].MinIndex()];
}
