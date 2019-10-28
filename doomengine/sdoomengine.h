#ifndef SPCDOOM_SDOOMENGINE_H
#define SPCDOOM_SDOOMENGINE_H

//=============================================================================

#include "doomtypes.h"
#include "sdrawapi.h"
#include "aimagedata.h"

//=============================================================================

namespace spcDoom
{
    
//==============================================================================

class SDoomEngine
{
private:
    SDrawAPI *drawAPI;
    spcWAD::AImageData imageData;
    
public:
    SDoomEngine();
    ~SDoomEngine();

    virtual void updateScreenSize(const SFloat screenWidth, const SFloat screenHeight);
    virtual void processGameCycle();
    virtual void processKeyboardEvent(const SUInt buttonCode);
    virtual void processMouseEvent(const SFloat x, const SFloat y);
};

//=============================================================================

}   //  namespace spcDoom

//==============================================================================

#endif  //  SPCDOOM_SDOOMENGINE_H
