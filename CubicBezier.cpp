#include "CubicBezier.h"
//CubicBezier(point bezierPunktArray [4]= { point ( 0.0,  0.0), point ( 0.0,  0.0), point ( 0.0,  0.0), point ( 0.0,  0.0)});

CubicBezier::CubicBezier()
{
    //ctor

    //this.t = 0.5; // führt zu :
    // error: request for member ‘t’ in ‘this’, which is of pointer type ‘CubicBezier* const’ (maybe you meant to use ‘->’ ?)|
}

CubicBezier::~CubicBezier()
{
    //dtor
}

// Constructor
CubicBezier::CubicBezier(float a,float b,float c,float d,float e,float f,float g,float h)
{
    point punkt[4];
    punkt[0].x=a;
    punkt[0].y=b;
    punkt[1].x=c;
    punkt[1].y=d;
    punkt[2].x=e;
    punkt[2].y=f;
    punkt[3].x=g;
    punkt[3].y=h;
}

//CubicBezier::CubicBezier(float )
//{
//    p1.x=p1x;
//    p1.y=p1y;
//    p2.x=p2x;
//    p1.y=p2y;
//    p3.x=p3x;
//    p3.y=p3y;
//    p4.x=p4x;
//    p4.y=p4y;
//}

// subdivide method
void CubicBezier::subdivide( float t, CubicBezier *segment1, CubicBezier *segment2)
{

}

// setter
void CubicBezier::setValues(float a,float b,float c,float d,float e,float f,float g,float h)
{
    p1x=a;
    p1y=b;
    p2x=c;
    p2y=d;
    p3x=e;
    p3y=f;
    p4x=g;
    p4y=h;

}

// setter
void CubicBezier::setValues1(float a,float b,float c,float d,float e,float f,float g,float h)
{
    point p[4];
    p[0].x=a;
    p[0].y=b;
    p[1].x=c;
    p[1].y=d;
    p[2].x=e;
    p[2].y=f;
    p[3].x=g;
    p[3].y=h;


}

// Constructor
CubicBezier::CubicBezier(point,point,point,point,point,point,point,point)
{
 point p1 = point(0,0);
 point p2 = point(0,0);
 point p3 = point(0,0);
 point p4 = point(0,0);
}


