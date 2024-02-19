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
    void  Plane ::sX(double x)
    {
        mX=x;
    }
    void  Plane ::sY(double y)
    {
        mY=y;

    }
    void Plane ::sZ(double z)
    {
        mZ=z;

    }


    Vector3D Plane :: getNormal() 
    {
        return mNormal;
    }
    double Plane :: getX() const
    {
        return mX;

    }
    double Plane :: getY() const
    {
        return mY;
    }
    double Plane :: getZ() const
    {
        return mZ;
    }