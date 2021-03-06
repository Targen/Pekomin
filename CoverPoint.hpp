#ifndef COVERPOINT_HPP
#define COVERPOINT_HPP

#include "Actor.hpp"
#include "Triple.hpp"

class CoverPoint : public virtual Actor {
        public:

                CoverPoint(
                                std::string name = "",
                                Triple pos = Triple(), double ang  = 0,
                                Triple vel = Triple(), double vrot = 0
                );

                virtual void draw() const;
};

#endif
