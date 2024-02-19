#pragma once
#include "Vector3D.h"
#include "Plane.h"
#include "Matrix.h"

class GeomVector
{
public:
    GeomVector ();
    GeomVector(Vector3D v1, Vector3D v2);
    ~GeomVector();

    void print(Vector3D a);

    void sVectoV1(Vector3D v1);

    void sVectoV2(Vector3D v2);

    void sVectoV3(Vector3D v3);

    void sVectoV4(Vector3D v4);

    Vector3D vector1() const;
    
    

    double dotProduct(Vector3D v1, Vector3D v2);

    Vector3D crossProduct(Vector3D v1, Vector3D v2);

    Vector3D vectorAddition(Vector3D v1, Vector3D v2);

    double vectorMagnitude(Vector3D v1);

    Vector3D vectorNormalized(Vector3D v1);

    bool isEqual(Vector3D v1, Vector3D v2);

    Vector3D addScalar(Vector3D v1 , double scalar);

    Vector3D vectorScalarMultiplication(Vector3D v1, double scalar);

    double angleBetweenVectors(Vector3D v1, Vector3D v2);

    double distanceBetweenVectors(Vector3D v1, Vector3D v2);

    Vector3D subtractScalar(Vector3D v1  , double scalar);

    Vector3D vectorScalarDivision(Vector3D v1, double scalar);

    double angleBetweenPlaneandVector(Plane normal ,Vector3D v1 );

    void directionCosines(Vector3D v1);

    double setLength(Vector3D v1 , double lenght);

    Vector3D multiplyMatrix(Matrix matrix , Vector3D v1);

    Vector3D projectiononVector(Vector3D v1 , Vector3D v2);

    Vector3D projectionPlane(Vector3D v1 , Vector3D Normal);

    Vector3D vectorSubtraction(Vector3D v1, Vector3D v2);

    
 


private:
    Vector3D mV1;
   
};