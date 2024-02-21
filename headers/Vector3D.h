#pragma once

class Vector3D
{
public:
    Vector3D();
    Vector3D(double x, double y, double z);
    ~Vector3D();

    void setX(double x);
    void setY(double Y);
    void setZ(double z);

    double x() const;
    double y() const;
    double z() const;

private:
    double mI;
    double mJ;
    double mK;
};