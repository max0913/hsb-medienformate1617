#ifndef POINT_H
#define POINT_H


class point
{

public:
    float x,y;
    /** Default constructor */
    point();
    /** Default destructor */
    virtual ~point();
    // anderer Konstruktor
    point(float a, float b);

};



#endif // POINT_H
