#ifndef BINOMIALMETHOD_HPP
#define BINOMIALMETHOD_HPP

#include <iostream>
#include <cstring>
#include <string>

using namespace std;

class BinomialMethod
{
    private:
        Lattice<double, int, 2> lattice; // 2 == binomial
        BinomialLatticeStrategy* str; //Pointer to algo

        double disc;
    public:
        // default ctor
        BinomialMethod();

        //ctor taking discount factor
        BinomialMethod(double discounting, BinomialLatticeStrategy& strategy, int N);

        // init lattice data struct
        void buildLattice(int N);

        //init lattice node values (forward induction)
        void modifyLattice(double U);

        // Calculate derivative price (backward induction)
        double getPrice(const Vector<double, int>& RHS);

        // function to give us the size at expiry date
        Vector<double, int> BasePyramidVector() const;

        //underlying lattice
        const Lattice<double, int, 2>& getLattice() const;
};