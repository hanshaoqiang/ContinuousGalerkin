#include <iostream>

#include "Macros.h"
#include "CGMesh.h"


int main()
{
    triMesh mesh(1,1,5000);

    //GH_Assert(1==2,"1 is not equal to 2!");
    GH_Print("Mesh constructed", &mesh)

    return 0;
}
