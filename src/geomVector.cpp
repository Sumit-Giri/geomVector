
#include <cmath>
#include <iostream>
#include "../headers/GeomVector.h"
#include "../headers/Vector3D.h"


GeomVector::GeomVector(Vector3D v1, Vector3D v2)
{
    this->mV1 = v1;
    
}

GeomVector ::~GeomVector()
{
}

void GeomVector::sVectoV1(Vector3D v1)
{
    mV1 = v1;
}




Vector3D GeomVector::vector1() const
{
    return mV1;
}


void GeomVector ::print(Vector3D a)
{
    std::cout << a.x() << " " << a.y() << " " << a.z();
}

GeomVector ::GeomVector()
{
}
// taking coordinates of A and B and then making Vector AB

// Dot product of Two vectors
double GeomVector ::dotProduct(Vector3D v1, Vector3D v2)
{
    double result = v1.x() * v2.x() + v1.y() * v2.y() + v1.z() * v1.z();
    return result;
}

// cross product of Two vectors
Vector3D GeomVector::crossProduct(Vector3D v1, Vector3D v2)
{
    double result_x = v1.y() * v2.z() - v1.z() * v2.y();
    double result_y = v1.z() * v2.x() - v1.x() * v2.z();
    double result_z = v1.x() * v2.y() - v1.y() * v2.x();
    return Vector3D(result_x, result_y, result_z);
}

// Addtion of Two vectors
Vector3D GeomVector::vectorAddition(Vector3D v1, Vector3D v2)
{

    double x = v1.x() + v2.x();
    double y = v1.y() + v2.y();
    double z = v1.z() + v2.z();
    return Vector3D(x, y, z);
}
Vector3D GeomVector::vectorSubtraction(Vector3D v1, Vector3D v2)
{

    double x = v1.x() - v2.x();
    double y = v1.y() - v2.y();
    double z = v1.z() - v2.z();
    return Vector3D(x, y, z);
}
// magnitude of Vector
double GeomVector::vectorMagnitude(Vector3D v1)
{
    double magnitude = sqrt(pow(v1.x(), 2) + pow(v1.y(), 2) + pow(v1.z(), 2));
    return magnitude;
}

// normalized of vector
Vector3D GeomVector::vectorNormalized(Vector3D v1)
{

    double magnitude = vectorMagnitude(v1);

    double nX = v1.x() / magnitude;
    double nY = v1.y() / magnitude;
    double nZ = v1.z() / magnitude;

    return Vector3D(nX, nY, nZ);
}

// check if two vectors are equal or Not
bool GeomVector::isEqual(Vector3D v1, Vector3D v2)
{

    if (v1.x() == v2.x() && v1.y() == v2.y() && v1.z() == v2.z())
    {
        return true;
    }
    else
    {
        return false;
    }
}

// add scalar to vector
Vector3D GeomVector::addScalar(Vector3D v1, double scalar)
{
    double X = v1.x() + scalar;
    double Y = v1.y() + scalar;
    double Z = v1.z() + scalar;

    return Vector3D(X, Y, Z);
}

// vectorScalarMultiplication
Vector3D GeomVector::vectorScalarMultiplication(Vector3D v1, double scalar)
{

    double X = v1.x() * scalar;
    double Y = v1.y() * scalar;
    double Z = v1.z() * scalar;

    return Vector3D(X, Y, Z);
}

// angle between two vectors
double GeomVector::angleBetweenVectors(Vector3D v1, Vector3D v2)
{

    double dot = dotProduct(v1, v2);

    double magnitude1 = vectorMagnitude(v1);

    double magnitude2 = vectorMagnitude(v2);
    double magnitude = magnitude1 * magnitude2;

    return acos(dot / magnitude) * 180.0 / M_PI;
}

// distance between two vectors
double GeomVector::distanceBetweenVectors(Vector3D v1, Vector3D v2)
{

    double d1 = v2.x() - v1.x();
    double d2 = v2.y() - v1.y();
    double d3 = v2.z() - v1.z();

    double formula = d1 * d1 + d2 * d2 + d3 * d3;

    double Distance = sqrt(formula);

    return Distance;
}

// subtract scalar from vector
Vector3D GeomVector ::subtractScalar(Vector3D v1, double scalar)
{
    double X = v1.x() - scalar;
    double Y = v1.y() - scalar;
    double Z = v1.z() - scalar;

    return Vector3D(X, Y, Z);
}

// vectorScalarDivision
Vector3D GeomVector::vectorScalarDivision(Vector3D v1, double scalar)
{
    double X = v1.x() / scalar;
    double Y = v1.y() / scalar;
    double Z = v1.z() / scalar;

    return Vector3D(X, Y, Z);
}

// angle between plane and vector
double GeomVector ::angleBetweenPlaneandVector(Plane normal, Vector3D v1)
{
    double x = normal.X();
    double y = normal.Y();
    double z = normal.Z();
    Vector3D newPlane(x, y, z);

    Vector3D NormalofPlane = vectorNormalized(newPlane);

    double angle = angleBetweenVectors(NormalofPlane, v1);
   
    return angle;
}

// direction cosines of two vector
void GeomVector ::directionCosines(Vector3D v1)
{
    double magnitude1 = vectorMagnitude(v1);

    std ::cout << " Direction Cosine of X is " << v1.x() / magnitude1 << std ::endl;

    std ::cout << " Direction Cosine of Y is " <<v1.y() / magnitude1 << std ::endl;

    std ::cout << " Direction Cosine of Z is " << v1.z() / magnitude1 << std ::endl;
}

// set length of vectors
double GeomVector ::setLength(Vector3D v1, double length)
{
    Vector3D normal = vectorNormalized(v1);

    double magnitude = sqrt(pow(normal.x(), 2) + pow(normal.y(), 2) + pow(normal.z(), 2));

    double newLength = magnitude * length;

    return newLength;
}



Vector3D GeomVector::multiplyMatrix(Matrix matrix,Vector3D v1) 
{
    double resultX =v1. x() * matrix.element(0, 0) + v1.y() * matrix.element(1, 0) + v1.z() * matrix.element(2, 0);
    double resultY = v1.x() * matrix.element(0, 1) + v1.y() * matrix.element(1, 1) + v1.z() * matrix.element(2, 1);
    double resultZ = v1.x() * matrix.element(0, 2) + v1.y() * matrix.element(1, 2) + v1.z() * matrix.element(2, 2);
    return Vector3D(resultX, resultY, resultZ);
}
Vector3D GeomVector :: projectiononVector(Vector3D v1 , Vector3D v2)
{
    double dot =dotProduct(v1,v2);
    double magnitude =vectorMagnitude(v2);
    double result=dot/(magnitude*magnitude);

    Vector3D ans= vectorScalarMultiplication(v2,result);

    return ans;
}

 Vector3D GeomVector :: projectionPlane(Vector3D v1 , Vector3D Normal)
 {
    Vector3D ans= projectionPlane(v1,Normal);

    Vector3D result = vectorSubtraction(ans , v1);

    return result;


 }
 


