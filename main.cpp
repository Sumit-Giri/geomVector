#include <iostream>
#include <fstream>
#include "headers/GeomVector.h"
#include "headers/UserInput.h"
#include "headers/Vector3D.h"
#include "headers/Writer.h"

using namespace std;

int main()
{
    Input fromUser;
    GeomVector vector3d; // Create an instance of geomVector

    int choice;
    cout << "Enter your choice:" << endl;
    cout << "1. Dot Product" << endl;
    cout << "2. Cross Product" << endl;
    cout << "3. Vector Magnitude" << endl;
    cout << "4. Vector Normalized" << endl;
    cout << "5. Is Equal" << endl;
    cout << "6. Add Scalar" << endl;
    cout << "7. Vector Scalar Multiplication" << endl;
    cout << "8. Angle Between Vectors" << endl;
    cout << "9. Distance Between Vectors" << endl;
    cout << "10. Subtract Scalar" << endl;
    cout << "11. Vector Scalar Division" << endl;
    cout << "12. Angle Between Plane and Vector" << endl;
    cout << "13. Direction Cosines" << endl;
    cout << "14. Vector Addition " << endl;
    cout << "15 . multiply matrix" << endl;
    cout << "16. projection on vector" << endl;
    cout << "17. vector subtraction  " << endl;
    cout << "18.projection  on plane" << endl;
    cout << "19.set Length " << endl;
    cout << "20.exit" << endl;
    

    cin >> choice;

    Vector3D v1, v2;
    Plane normal;

    // Take input for the vector points
    cout << "Enter coordinates for vector 1:" << endl;

    switch (choice)
    {
    case 1:
    {
        v1 = fromUser.inputPoint("Vector 1");
        cout << "Enter coordinates for vector 2:" << endl;
        v2 = fromUser.inputPoint("Vector 2");

        cout << "Dot Product: " << vector3d.dotProduct(v1, v2) << endl;
        break;
    }

    case 2:
    {
        v1 = fromUser.inputPoint("Vector 1");
        cout << "Enter coordinates for vector 2:" << endl;
        v2 = fromUser.inputPoint("Vector 2");

        Vector3D ans = vector3d.crossProduct(v1, v2);
        Writer write(v1, v2, ans);

        break;
    }

    case 3:
    {
        v1 = fromUser.inputPoint("Vector 1");

        cout << "Enter coordinates for vector 2:" << endl;
        v2 = fromUser.inputPoint("Vector 2");

        cout << "Vector Magnitude: " << vector3d.vectorMagnitude(v1) << endl;
        break;
    }

    case 4:
    {
        v1 = fromUser.inputPoint("Vector 1");
        cout << "Enter coordinates for vector 2:" << endl;
        v2 = fromUser.inputPoint("Vector 2");

        Vector3D ans = vector3d.vectorNormalized(v1);
        Writer write(v1, v2, ans);

        break;
    }

    case 5:
    {
        v1 = fromUser.inputPoint("Vector 1");

        cout << "Enter coordinates for vector 2:" << endl;
        v2 = fromUser.inputPoint("Vector 2");
        cout << "Is Equal: " << (vector3d.isEqual(v1, v2) ? "true" : "false") << endl;
        break;
    }

    case 6:
    {
        v1 = fromUser.inputPoint("Vector 1");
        cout << "Enter coordinates for vector 2:" << endl;
        double scalar;
        cin >> scalar;

        Vector3D ans = vector3d.addScalar(v1, scalar);
        Writer write(ans);

        break;
    }

    case 7:
    {
        v1 = fromUser.inputPoint("Vector 1");
        cout << "Enter coordinates for vector 2:" << endl;
        double scalar;
        cin >> scalar;

        Vector3D ans = vector3d.vectorScalarMultiplication(v1, scalar);
        Writer write(ans);
        break;
    }
    case 8:
    {
        v1 = fromUser.inputPoint("Vector 1");

        cout << "Enter coordinates for vector 2:" << endl;
        v2 = fromUser.inputPoint("Vector 2");
        cout << "Angle Between Vectors: " << vector3d.angleBetweenVectors(v1, v2) << endl;
        break;
    }

    case 9:
    {
        v1 = fromUser.inputPoint("Vector 1");

        cout << "Enter coordinates for vector 2:" << endl;
        v2 = fromUser.inputPoint("Vector 2");
        cout << "Distance Between Vectors: " << vector3d.distanceBetweenVectors(v1, v2) << endl;
        break;
    }

    case 10:
    {
        v1 = fromUser.inputPoint("Vector 1");
        cout << "Enter coordinates for vector 2:" << endl;
        double scalar;
        cin >> scalar;

        Vector3D ans = vector3d.subtractScalar(v1, scalar);
        Writer write(ans);
        break;
    }

    case 11:
    {

        v1 = fromUser.inputPoint("Vector 1");
        cout << "Enter coordinates for scalar :" << endl;

        double scalar;
        cin >> scalar;

        Vector3D ans = vector3d.vectorScalarDivision(v1, scalar);
        Writer write(ans);
        break;
    }

    case 12:
    {
        v1 = fromUser.inputPoint("Vector 1");
        v2 = fromUser.inputPoint("Vector 2");
        cout << "Enter coordinates for equation of plane:" << endl;

        double x, y, z;
        cin >> x >> y >> z;

        Plane newnormal(v2, x, y, z);
        //.= inputPoint("Vector 2");

        cout << "Angle Between Plane and Vector: " << vector3d.angleBetweenPlaneandVector(newnormal, v1) << endl;
        break;
    }

    case 13:
    {
        v1 = fromUser.inputPoint("Vector 1");

        vector3d.directionCosines(v1);

        break;
    }
    case 14:
    {
        v1=fromUser.inputPoint("vector 1");
        v2=fromUser.inputPoint("vector 2");
        Vector3D ans = vector3d.vectorAddition(v1, v2);
        Writer write(ans);
        break;

    }
    case 15:
    {
        v1 = fromUser.inputPoint("vector 1");
        double a, b, c, d, e, f, g, h, i;
        cin >> a >> b >> c >> d >> e >> f >> g >> h >> i;

        Matrix matrix(a, b, c, d, e, f, g, h, i);

        Vector3D ans = vector3d.multiplyMatrix(matrix, v1);
        Writer write(ans);

        break;
    }
    case 16:
    {
        v1 = fromUser.inputPoint("vector 1");
        v2 = fromUser.inputPoint("vector 2");

        Vector3D ans = vector3d.projectiononVector(v1, v2);

        Writer write(ans);

        break;
    }
    case 17:
    {
         v1=fromUser.inputPoint("vector 1");
        v2=fromUser.inputPoint("vector 2");
        Vector3D ans = vector3d.vectorSubtraction(v1, v2);
        Writer write(ans);
        break;

        
    }
    case 18:
    {
         v1 = fromUser.inputPoint("vector 1");
        v2 = fromUser.inputPoint("vector 2");

        Vector3D ans = vector3d.projectionPlane(v1, v2);

        Writer write(ans);

        break;

        
    }
    case 19:
    {
         v1 = fromUser.inputPoint("Vector 1");
        cout << "Enter coordinates for scalar :" << endl;

        double scalar;
        cin >> scalar;

         double ans=vector3d.setLength(v1, scalar);
       return ans;
        break;

        break;
    }
    
    case 20:
    {
        cout << "exit" << endl;
        break;
    }

    default:
        cout << "Invalid choice" << endl;
    }

    return 0;
}
