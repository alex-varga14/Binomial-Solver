#ifndef JRSTRATEGY_HPP
#define JRSTRATEGY_HPP

#include <iostream>
#include <cstring>
#include <string>

using namespace std;

class JRStrategy : public BinomialLatticeStrategy
{
    public:
        JRStrategy(double vol, double interest, double delta);
};