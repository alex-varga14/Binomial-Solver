#include "Lattice.hpp"
#include <math.h>


template <class V, class I, int NumberNodes>
Lattice<V, I, NumberNodes>::Lattice(const I& Nrows, const V& val)
{
    nrows = Nrows;
    typ = NumberNodes;
    // start index == 1
    tree = Array<Vector<V, I>, I> (nrows + 1, 1); 

    I currentBranch = 1; //there is always one single root

    // init tree vectors
    for(int i = tree.MinIndex(); i <= tree.MaxIndex(); i++){
        //create right vector
        tree[i] = Vector<V, I>(currentBranch, 1, val);

        //calculate the next number of columns
        currentBranch += (typ - 1);
    }
}