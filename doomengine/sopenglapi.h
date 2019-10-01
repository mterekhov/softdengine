#ifndef SPCDOOM_SOPENGLAPI_H
#define SPCDOOM_SOPENGLAPI_H

//=============================================================================

#include "sdrawapi.h"

//=============================================================================

namespace spcDoom
{

//==============================================================================

class SOpenGLAPI : public SDrawAPI
{
public:
    SOpenGLAPI();
    virtual ~SOpenGLAPI();
    
    virtual void setupViewport(const SFloat width, const SFloat height);
    virtual void clearScreen();
    virtual void drawPoints(const SFloat *points, const SInt pointsCount);
    virtual void drawLine(const SFloat x1, const SFloat y1, const SFloat x2, const SFloat y2);
};

//=============================================================================

}   //  namespace spcDoom

//==============================================================================

#endif  //  SPCDOOM_SOPENGLAPI_H
