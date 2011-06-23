#ifndef _PLANE_HPP
#define _PLANE_HPP

#include <tuple>

#include "Triple.hpp"
#include "Mobile.hpp"

using namespace std;

class Plane : public virtual Mobile {
        public:
                Triple pp;
                Triple n;

                Plane(
                                string name = "",
                                Triple pos = Triple(), double ang  = 0,
                                Triple vel = Triple(), double vrot = 0,
                                Triple pp = Triple(), Triple n = Triple(0, 0, 1)
                     );

                Triple normal();
                Triple point();
};

#endif
