
#include "../headers/Vector3D.h"
#include <iostream>

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

void Vector3D::sX(double x)
{
    mI = x;
}
void Vector3D::sY(double y)
{
    mJ = y;
}
void Vector3D ::sZ(double z)
{
    mK = z;
}

double Vector3D :: x()
{
    return mI;
}
double Vector3D :: y()
{
    return mJ;
}
double Vector3D :: z()
{
    return mK;
}
 