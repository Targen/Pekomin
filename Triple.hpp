#ifndef _TRIPLE_HPP
#define _TRIPLE_HPP

#include <math.h>
#include <stdio.h>

using namespace std;

class Triple {
        public:
                double x, y, z;

                Triple() : x(0), y(0), z(0) {}
                Triple(double K) : x(K), y(K), z(K) {}
                Triple(double X, double Y, double Z) : x(X), y(Y), z(Z) {}
                Triple  operator + (Triple);
                Triple  operator + (double);
                Triple  operator - ();
                Triple  operator - (Triple);
                Triple  operator - (double);
                Triple  operator * (Triple);
                Triple  operator * (double);
                Triple  operator / (double);
                Triple& operator = (double);
                Triple& operator +=(const Triple &);
                Triple& operator +=(double);
                Triple& operator -=(const Triple &);
                Triple& operator -=(double);
                Triple& operator *=(double);
                Triple& operator /=(double);
                Triple& normalize();
                double dot(Triple t);
                Triple cross(Triple t);
                double length();
                double length_2();
                Triple normalized();
                double ang_xy();
                void print();
};

typedef Triple Vector;
typedef Triple Punto;

#endif
