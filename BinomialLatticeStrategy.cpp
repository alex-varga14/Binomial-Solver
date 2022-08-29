#include "BinomialLatticeStrategy.hpp"
#include <math.h>
#include <cstring>
#include <string>

void BinomialLatticeStrategy::updateLattice(Lattice<double, int, 2>& source, double rootValue) const
{
    // Find depth of lattice
    int si = source.MinIndex();
    source[si][source[si].MinIndex()] = rootValue;
    
    // Loop from the min index to the end index
    for(int n = source.MinIndex() + 1; n <= source.MaxIndex(); n++ )
    {
        for(int i = source[n].MinIndex(); i < source[n].MaxIndex(); i++)
        {
            source[n][i] = d * source[n-1][i];
            source[n][i+1] = u * source[n-1][i];
        }
    }
}