// This is for trainig of MFEM for myself
// I gonna solve poisson equation by Discontinuous Galerkin method

#include "mfem.hpp"
#include <fstream>
#include <iostream>
#include <algorithm>

using namespace std;
using namespace mfem;

int main(int argc, argv[])
{
    const char *mesh_file = "data/simple"; 
    int order = 1;

    double mat_val = 1.0;
    double neumann_val = 0.0;
    double dileclet_val = 1.0;


    Mesh mesh(mesh_file, 1, 1);
    int dim = mesh.Dimension();

    cout << " dimension is " << dim << endl;


}