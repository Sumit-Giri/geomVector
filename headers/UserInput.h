#include "Vector3D.h"
#include <string>

class Input
{
public:
    Input() = default;
    ~Input() = default;

    Vector3D inputPoint(const std::string &prompt);

private:
};