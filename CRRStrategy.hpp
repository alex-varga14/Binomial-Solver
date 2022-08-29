#ifndef CRRSTRATEGY_HPP
#define CRRSTRATEGY_HPP

#include <iostream>
#include <cstring>
#include <string>

using namespace std;

class CRRStrategy : public BinomialLatticeStrategy
{
    public:
        CRRStrategy(double vol, double interest, double delta);

};