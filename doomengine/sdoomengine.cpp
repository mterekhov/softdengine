#include "sdoomengine.h"
#include "sopenglapi.h"
#include "awad.h"
#include "aflat.h"
#include <stdio.h>

namespace spcDoom
{
    
//==============================================================================

SDoomEngine::SDoomEngine() : drawAPI(new SOpenGLAPI())
{
    FILE* wadFile = 0;
    wadFile = fopen("/Users/michael/Development/idSoftwareResearch/software/software/doom.wad", "rb");
    fclose(wadFile);

    std::string filePath = "/Users/michael/Development/idSoftwareResearch/software/software/doom.wad";
    spcWAD::AWAD wad(filePath);
    imageData = wad.findFlat("FLOOR5_2").imageData();
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
    drawAPI->drawImage((const char *)imageData.data(), imageData.width(), imageData.height(), imageData.bytesPerPixel());
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
