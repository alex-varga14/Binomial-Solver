#ifndef LATTICE_HPP
#define LATTICE_HPP

#include <iostream>
#include <cstring>
#include <string>

using namespace std;

template <class V, class I, int NumberNodes>
class Lattice
{
    private:
        //Implemented as a full nested vector class
        Array<Vector<V, I>, I> tree;

        // redundant data
        I nrows; //number of rows
        int typ; // type of lattice 
        // const int typeB = 2;     Binomial Lattice 
        // const int typeT = 3;     Trinomial Lattice
        // const int typeP = 5;     Pentagonal Lattice
    
    public:
        //Ctors and dtors
        // Default ctor
        Lattice(); 
        // num of rows and branch factor
        Lattice(const I& Nrows); 
        // value at nodes
        Lattice(const I& Nrows, const V& val);
        // Copy ctor
        Lattice(const Lattice<V, I, NumberNodes>& source);
        virtual ~Lattice();

        //Operators
        Lattice<V, I, NumberNodes>& operator =(const Lattice<V, I, NumberNodes>& source);

        //indexing outer array of the lattice
        Vector<V, I>& operator [] (const I& nLevel);
        const Vector<V, I>& operator [] (const I& nLevel) const;

        //Form lattice at base of pyramid, needed when we use backward induction
        Vector<V, I> BasePyramidVector() const;
        I BasePyramidSize() size; //discrete points at end
        I numberNodes() const;

        // Interaction
        I MinIndex() const; // return min row index
        I MaxIndex() const; // return max row index
        I Depth() const; // return depth (number of rows)
};