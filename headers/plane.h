#pragma once
#include "Vector3D.h"

class Plane
{
public:
    Plane();
    Plane(Vector3D inNormal, double inX, double inY, double inZ);
    ~Plane();

 

    void sNormal(Vector3D normal);
    void setX(double x);
    void setY(double y);
    void setZ(double Z);

    Vector3D Normal();
    double X() const;
    double Y() const;
    double Z() const;

private:
    Vector3D mNormal;
    double mX;
    double mY;
    double mZ;
};