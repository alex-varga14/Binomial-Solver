#ifndef BINOMIALLATTICESTRATEGY_HPP
#define BINOMIALLATTICESTRATEGY_HPP

#include <iostream>
#include <cstring>
#include <string>

using namespace std;

class BinomialLatticeStrategy
{
    protected:
        double u;  // the up variable
        double d;  // the down variable
        double p;  // the prob of an up movement
        double s;
        double r;
        double k;
        BinomialType bType; // multiplicative or arithmetic
    public:
        double downValue() const { return d;}
        double upValue() const { return u;}
        double probValue() const {return p;}
        BinomialType binomialType() const { return bType;}

        virtual void updateLattice(Lattice<double, int, 2>& source, double rootValue) const;

};