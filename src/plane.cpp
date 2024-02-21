#include "../headers/plane.h"


Plane :: Plane()
{

}
   Plane :: ~Plane()
   {

   }

    Plane ::Plane(Vector3D inNormal , double inX ,double inY ,double inZ)
    {
        mNormal=inNormal;
        mX=inX;
        mY=inY;
        mZ=inZ;
    }


    void Plane :: sNormal(Vector3D normal)
    {
        mNormal=normal;
    }
    void  Plane ::setX(double x)
    {
        mX=x;
    }
    void  Plane ::setY(double y)
    {
        mY=y;

    }
    void Plane ::setZ(double z)
    {
        mZ=z;

    }


    Vector3D Plane :: Normal() 
    {
        return mNormal;
    }
    double Plane :: X() const
    {
        return mX;

    }
    double Plane :: Y() const
    {
        return mY;
    }
    double Plane :: Z() const
    {
        return mZ;
    }