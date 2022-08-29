#ifndef TRGSTRATEGY_HPP
#define TRGSTRATEGY_HPP

#include <iostream>
#include <cstring>
#include <string>

using namespace std;

class TRGStrategy : public BinomialLatticeStrategy
{
    public:
        TRGStrategy(double vol, double interest, double delta);

};