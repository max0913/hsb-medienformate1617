#ifndef CUBICBEZIER_H
#define CUBICBEZIER_H




// forward declaration?
class point ;

class CubicBezier
{


public:
    point*  punkt [4]  ;//(float x, float y);
    point bezierPunktArray [4];
    int width, height;
    float p1x, p1y, p2x, p2y, p3x, p3y, p4x, p4y;
    float t;
    //CubicBezier *CubicBezier;
    CubicBezier *segment1;
    CubicBezier *segment2;

    /** Default constructor */
    //CubicBezier();
    //CubicBezier(point bezierPunktArray [4]={ point ( 0.0,  0.0), point ( 0.0,  0.0), point ( 0.0,  0.0), point ( 0.0,  0.0)});
    CubicBezier(point bezierPunktArray [4]={ point,point,point,point);
    /** Default destructor */
    virtual ~CubicBezier();
    //CubicBezier(float p1x,float p1y,float p2x,float p2y,float p3x,float p3y,float p4x,float p4y);
    //subdivide( float t, CubicBezier *segment1, CubicBezier *segment2);
    void subdivide( float t, CubicBezier *segment1, CubicBezier *segment2);
    void setValues(float a,float b,float c,float d,float e,float f,float g,float h);
    void setValues1(float a,float b,float c,float d,float e,float f,float g,float h);
    //setValues(float,float,float,float,float,float,float,float);
    CubicBezier(float,float,float,float,float,float,float,float);

protected:
private:
};
#endif
