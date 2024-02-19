#pragma once
#include "Vector3D.h"
class Plane 
{
    public:
    Plane();
    ~Plane();

    Plane(Vector3D inNormal , double inX ,double inY ,double inZ);


    void sNormal(Vector3D normal);
    void sX(double x);
    void sY(double y);
    void sZ(double Z);


    Vector3D getNormal();
    double getX()const;
    double getY()const;
    double getZ()const;

    

    private:
    Vector3D mNormal;
    double mX;
    double mY;
    double mZ;


    
};