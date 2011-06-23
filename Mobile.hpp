#ifndef _MOBILE_HPP
#define _MOBILE_HPP

#include "Ent.hpp"
#include "Triple.hpp"

class Mobile : public virtual Ent {
        public:
                Triple vel;
                double vrot;

                Mobile(
                                string name = "",
                                Triple pos = Triple(), double  ang = 0,
                                Triple vel = Triple(), double vrot = 0
                      );
};

tuple<Triple, Triple> points(Ent    *e1, Mobile *e2);
tuple<Triple, Triple> points(Mobile *e1, Ent    *e2);
tuple<Triple, Triple> points(Mobile *e1, Mobile *e2);

#endif
