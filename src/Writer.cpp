#include <fstream>
#include "../headers/Writer.h"


ofstream out ("output.txt");
 Writer::Writer(Vector3D v1 , Vector3D v2, Vector3D ans)
    {
        out << 0 << " " << 0 << " " << 0 << endl;
        out << v1.x() << " " << v1.y() << " " << v1.z() << endl;
        out << 0 << " " << 0 << " " << 0 << endl;
        out << v2.x() << " " << v2.y() << " " << v2.z() << endl;
        out << 0 << " " << 0 << " " << 0 << endl;
        out << ans.x() << " " << ans.y() << " " << ans.z() << endl;
    }

