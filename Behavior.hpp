#ifndef _BEHAVIOR_HPP
#define _BEHAVIOR_HPP

using namespace std;

class Behavior {
        public:
                virtual ~Behavior() = 0;
};

inline Behavior::~Behavior() {}

#endif
