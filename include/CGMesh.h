#ifndef CGMESH_H
#define CHMESH_H

#include "Macros.h"
#include <iostream>

class triMesh
{
    public:
    // ******************************** //
    // Constructors for triMesh         //
    // ******************************** //

    // default constructor
    triMesh();

    // rectangle subdivision constructor
    triMesh(double x, double y, int n);

    int getNumNodes() { return nNodes; }
    int getNumElmts() { return nElmts; }

    friend std::ostream &operator<<(std::ostream &strm, triMesh);



    // ******************************** //
    // Data members for triMesh         //
    // ******************************** //
    protected:

    int nNodes, nElmts; // number of nodes and elements
    double (*nodes)[2]; // x,y coordinates of node i
    int (*elmts)[3]; // indices for the 3 nodes that describe element i
    bool *elmtOnBdry; // indicator for when element i is on the boundary
};

#endif // CGMESH_H
