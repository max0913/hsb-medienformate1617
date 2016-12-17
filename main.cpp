#include <iostream>
#include "point.h"
#include "CubicBezier.h"


using namespace std;


// int add(int x, int y); // forward declaration using function prototype



int main()
{
    //point p[4];

    CubicBezier cb(0.0,0.0,0.0,1.0,2.0,1.0,2.0,0.0);

    //cb.punkt[1].x = 1.0; // Fehler:
    // error: request for member ‘x’ in ‘cb.CubicBezier::punkt[1]’, which is of pointer type ‘point*’ (maybe you meant to use ‘->’ ?)|
    cb.punkt[0].y


    //cb.setValues1(0,0,0,1,2,1,2,0);


    // cb.setValues(0,0,0,1,2,1,2,0);
    //cb.setValues(1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0);

    return 0;
}
