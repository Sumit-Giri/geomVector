#pragma once
class Vector3D
{
public:
    Vector3D();

    Vector3D(double x, double y, double z);

    ~Vector3D();

    void sX(double x);
    void sY(double Y);
    void sZ(double z);

    double x();
    double y();
    double z();

private:
    double mI;
    double mJ;
    double mK;
};