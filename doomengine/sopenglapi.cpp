#include <OpenGL/gl.h>

#include "sopenglapi.h"

namespace spcDoom
{

//==============================================================================

SOpenGLAPI::SOpenGLAPI()
{
    glColor4f(1.0f, 1.0f, 1.0f, 1.0f);
    glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
    glEnableClientState(GL_VERTEX_ARRAY);
}
//==============================================================================

SOpenGLAPI::~SOpenGLAPI()
{
    
}

//==============================================================================
    
void SOpenGLAPI::setupViewport(const SFloat width, const SFloat height)
{
    glViewport(0.0f, 0.0f, width, height);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(0.0f, width, 0.0f, height, 1.0f, -1.0f);
    
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
}
    
//==============================================================================

void SOpenGLAPI::clearScreen()
{
    glClear(GL_COLOR_BUFFER_BIT);
}

//==============================================================================
    
void SOpenGLAPI::drawLine(const SFloat x1, const SFloat y1, const SFloat x2, const SFloat y2)
{
    glColor4f(1, 0, 0, 1);
    SFloat line[4] = {0};
    line[0] = x1;
    line[1] = y1;
    line[2] = x2;
    line[3] = y2;
    glVertexPointer(2, GL_FLOAT, 0, line);
    glDrawArrays(GL_LINES, 0, 2);
}

//==============================================================================

void SOpenGLAPI::drawPoints(const SFloat *points, const SInt pointsCount)
{
    glVertexPointer(2, GL_FLOAT, 0, points);
    glDrawArrays(GL_POINTS, 0, pointsCount);
}

//==============================================================================

void SOpenGLAPI::drawImage(const SChar *data, const SInt width, const SInt height, const SInt bytePerPixel)
{
    
}

//==============================================================================

}
