#ifndef CUBICBEZIER_H
#define CUBICBEZIER_H



// forward declaration?
// class point ; // Forward Declaration und die Art, wie Sie die Point-Klasse in Zeile 31 nutzen,
//vertragen sich hier nicht. Binden Sie point einfach oben per #include “point.h“ ein,
// dann sollte es schon besser aussehen.
// Also:
#include "point.h"





class CubicBezier
{
public:
    // Seltsam erscheinen mir aber auch die Zeilen 13 und 14. Sie erzeugen hier Zeiger,obwohl Sie doch eigentlich nur ein Feld wollen.
    // Ok Sternchen weg:
    point  punkt [4]  ; //(float x, float y);
    //point bezierPunktArray [4]; // Fehler:
    // error: field ‘bezierPunktArray’ has incomplete type|

    point *bezierPunktArray;
//    bezierPunktArray = new point[4];
    //
     float p1x, p1y, p2x, p2y, p3x, p3y, p4x, p4y;

    // t ist das Teilungsverhältnis der Bezierkurve
    float t;

    //CubicBezier *CubicBezier;

    // segment 1 und 2 sind die beiden Segmente, die übrig bleiben, wenn man den Teilungsalgorithmus für die Bezierkurve durchgeführt hat
    CubicBezier *segment1;
    CubicBezier *segment2;

    /** Default constructor */
    CubicBezier();

    // fkt nicht
    //CubicBezier(point bezierPunktArray [4]={ point ( 0.0,  0.0), point ( 0.0,  0.0), point ( 0.0,  0.0), point ( 0.0,  0.0)});

    // Default Konstruktor mit Vorbelegung

    //CubicBezier(point bezierPunktArray [4]= { point(0.0,0.0),point(0.0,0.0),point(0.0,0.0),point(0.0,0.0)}); // fkt nicht

    // Vorschlag von Hr. Mielebach:
    CubicBezier( point p1 = point(0,0), point p2 = point(0,0), point p3 = point(0,0), point p4 = point(0,0) );

    // ein anderer Versuch:
    CubicBezier(float,float,float,float,float,float,float,float);

    CubicBezier(point,point,point,point,point,point,point,point);

    /** Default destructor */
    virtual ~CubicBezier();

    // fkt auch nicht richtig
    //CubicBezier(float p1x,float p1y,float p2x,float p2y,float p3x,float p3y,float p4x,float p4y);

    // Methodendeklarationen
    //subdivide( float t, CubicBezier *segment1, CubicBezier *segment2);
    void subdivide( float t, CubicBezier *segment1, CubicBezier *segment2);
    void setValues(float a,float b,float c,float d,float e,float f,float g,float h);
    void setValues1(float a,float b,float c,float d,float e,float f,float g,float h);
    //setValues(float,float,float,float,float,float,float,float);

protected:
private:
};
#endif
