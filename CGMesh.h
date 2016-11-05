class triMesh
{
    public:
    // ******************************** //
    // Constructors for triMesh         //
    // ******************************** //

    // default constructor
    triMesh();

    // rectangle subdivision constructor
    triMesh(double x2, double y2, int n);



    // ******************************** //
    // Data members for triMesh         //
    // ******************************** //
    protected:

    double (*nodes)[3];
    int (*edges)[2];
    int (*elmts)[4];
    bool *elmtOnBdry;
};
