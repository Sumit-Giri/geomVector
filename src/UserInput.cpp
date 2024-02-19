
#include "../headers/UserInput.h"
#include <iostream>
#include "../headers/Vector3D.h"
using namespace std;
  Vector3D Input:: inputPoint(const std::string &prompt)
{
    double x, y, z;
    cout << prompt << endl;
    cout << "Enter x coordinate: ";
    cin >> x;
    cout << "Enter y coordinate: ";
    cin >> y;
    cout << "Enter z coordinate: ";
    cin >> z;
    return Vector3D(x, y, z);
}