#ifndef MODCRRSTRATEGY_HPP
#define MODCRRSTRATEGY_HPP

#include <iostream>
#include <cstring>
#include <string>

using namespace std;

class ModCRRStrategy : public BinomialLatticeStrategy
{
    public:
        ModCRRStrategy(double vol, double interest, double delta, double S, double K, int N);

};