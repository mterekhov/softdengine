#include "sdoomengine.h"
#include "sopenglapi.h"

namespace spcDoom
{
    
//==============================================================================

SDoomEngine::SDoomEngine() : drawAPI(new SOpenGLAPI())
{
}

//==============================================================================

SDoomEngine::~SDoomEngine()
{
    delete drawAPI;
}

//==============================================================================

void SDoomEngine::updateScreenSize(const SFloat screenWidth, const SFloat screenHeight)
{
    drawAPI->setupViewport(screenWidth, screenHeight);
}

//==============================================================================

void SDoomEngine::processGameCycle()
{
    drawAPI->clearScreen();
    
    const SFloat scale = 10.0f;
    const SFloat rowsNumber = 50.0f;
    const SFloat columnsNumber = 50.0f;
    //    for (SFloat i = -rowsNumber; i < rowsNumber; i+= 1.0f)
    //    {
    //        const SFloat pointsList[] = {-rowsNumber * scale, i * scale, rowsNumber * scale, i * scale};
    //        drawPoints(pointsList, 2);
    //    }

    for (SFloat i = -rowsNumber; i < rowsNumber; i+= 1.0f)
    {
        drawAPI->drawLine(-rowsNumber * scale, i * scale, rowsNumber * scale, i * scale);
    }
    for (SFloat i = -columnsNumber; i < columnsNumber; i+= 1.0f)
    {
        drawAPI->drawLine(i * scale, -columnsNumber * scale, i * scale, columnsNumber * scale);
    }
}

//==============================================================================

void SDoomEngine::processKeyboardEvent(const SUInt buttonCode)
{
}

//==============================================================================

void SDoomEngine::processMouseEvent(const SFloat x, const SFloat y)
{
}

//==============================================================================

}
