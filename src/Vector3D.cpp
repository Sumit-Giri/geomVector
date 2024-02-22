#include <iostream>
#include "../headers/Vector3D.h"
using namespace std;

Vector3D :: Vector3D ()
{
    
}
Vector3D ::Vector3D(double x, double y, double z)
{
    mI = x;
    mJ = y;
    mK = z;
}

Vector3D ::~Vector3D()
{
}

void Vector3D::setX(double x)
{
    mI = x;
}
void Vector3D::setY(double y)
{
    mJ = y;
}
void Vector3D ::setZ(double z)
{
    mK = z;
}

double Vector3D :: x() const
{
    return mI;
}
double Vector3D :: y() const
{
    return mJ;
}
double Vector3D :: z() const
{
    return mK;
}
 