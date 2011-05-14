#ifndef _RUNTIMEPEKOMIN_HPP
#define _RUNTIMEPEKOMIN_HPP

#include "Actor.hpp"

using namespace std;

class RuntimePekomin : public Actor {
        public:
                virtual void draw();

                RuntimePekomin(Triple pos, double ang, Triple vel, Triple vang);
                RuntimePekomin(Triple pos, double ang);
                RuntimePekomin();
                ~RuntimePekomin();

                void addBehavior(Behavior *);
};

#endif