#include "CGMesh.h"
#include <iostream>
triMesh::triMesh()
  : nNodes(0)
  , nElmts(0)
  , nodes()
  , elmts()
  , elmtOnBdry()
{

}

// *********************************************** //
// Constructor: divides the square (0,0), (x,y)
// into a grid
// *********************************************** //

triMesh::triMesh(double x, double y, int n)
  : nNodes((n+1)*(n+1))
  , nElmts(2*n*n)
{
    GH_Assert((x!=0 && y!=0),"TriMesh constructor is called for an empty box!");

    nodes = new double[nNodes][2];
    elmts = new int[nElmts][3];
    elmtOnBdry = new bool[nElmts];

    double dx = x/n;
    double dy = y/n;
    int nv = n+1;

    for(int i=0; i<nv; ++i)
    {
        for(int j=0; j<nv; ++j)
        {
            nodes[j+i*nv][1] = dx*j;
            nodes[j+i*nv][2] = dy*i;
        }
    }

    int iElmt = -1;
    for(int i=0; i!=n; ++i)
    {
        for(int j=0; j!=n; ++j)
        {
            ++iElmt;
            elmts[iElmt][1] = j + nv*i;
            elmts[iElmt][2] = j + nv*i + 1;
            elmts[iElmt][3] = j + nv*i + nv;

            ++iElmt;
            elmts[iElmt][1] = j + nv*i + 1 + nv;
            elmts[iElmt][2] = j + nv*i + nv;
            elmts[iElmt][3] = j + nv*i + 1;
        }
    }
}

// Output operator (for testing purposes mainly)
std::ostream &operator<<(std::ostream &strm, triMesh mesh)
{
    strm << "The triMesh has " << mesh.getNumNodes() << " vertices and " << mesh.getNumElmts() << " elements.\n";
    for(int i=0; i<mesh.getNumNodes(); ++i)
    {
        strm << "Node " << i << " is (" << mesh.nodes[i][1] << ", " << mesh.nodes[i][2] << ")\n";
    }
    for(int i=0; i<mesh.getNumElmts(); ++i)
    {
        strm << "Element " << i << " uses nodes " << mesh.elmts[i][1] << ", " << mesh.elmts[i][2] << ", " << mesh.elmts[i][3] << "\n";
    }
}
