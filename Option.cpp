#ifndef OPTION_HPP
#define OPTION_HPP

#include <iostream>
#include <cstring>
#include <string>

using namespace std;

class Option 
{
    public:
        double r; //interest rate
        double sig; //volatility
        double K; //strike price
        double T; //expiry date
        int type; //1 call, 2 put

        double payoff(double S) const
        {
            if(type == 1)
            {
                if(S > K)
                    return (S - K);
                return 0.0;
            }
            else
            {
                if(S < K)
                    return -(S - K);
                return 0.0;
            }
        }
};