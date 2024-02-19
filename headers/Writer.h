#include <fstream>
#include <ostream>

#include "Vector3D.h"
using namespace std;
class Writer
{
public:
    Writer() = default;
    Writer(Vector3D ans);
    ~Writer() = default;

    Writer(Vector3D v1, Vector3D v2, Vector3D ans);

private:
};