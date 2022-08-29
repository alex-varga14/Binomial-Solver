#ifndef EQPSTRATEGY_HPP
#define EQPSTRATEGY_HPP

#include <iostream>
#include <cstring>
#include <string>

using namespace std;

class EQPStrategy : public BinomialLatticeStrategy
{
    public:
        EQPStrategy(double vol, double interest, double delta);

};