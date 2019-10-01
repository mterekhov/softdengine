#ifndef SPCDOOM_SDRAWAPI_H
#define SPCDOOM_SDRAWAPI_H

//=============================================================================

#include "doomtypes.h"

//=============================================================================

namespace spcDoom
{

//==============================================================================

class SDrawAPI
{
public:
    SDrawAPI();
    virtual ~SDrawAPI();
    
    virtual void setupViewport(const SFloat width, const SFloat height);
    virtual void clearScreen();
    virtual void drawPoints(const SFloat *points, const SInt pointsCount);
    virtual void drawLine(const SFloat x1, const SFloat y1, const SFloat x2, const SFloat y2);
};

//=============================================================================

}   //  namespace spcDoom

//==============================================================================

#endif  //  SPCDOOM_SDRAWAPI_H
