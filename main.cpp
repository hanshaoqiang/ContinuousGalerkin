#include <iostream>

#include "Macros.h"
#include "CGMesh.h"

int main()
{
    triMesh mesh(3,3,3);
    std::cout << mesh;

    GH_Assert(1==2,"1 is not equal to 2!");

    return 0;
}
