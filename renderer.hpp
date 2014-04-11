#ifndef _RENDERER_HPP_
#define _RENDERER_HPP_

#include "vbo.hpp"

class Renderer
  {
  public:
    //!< Default  constructor.
    Renderer(float const R, float const G, float const B, float const alpha);
    //!< Overloaded function call operator
    void operator()() const;
    //!< Overloaded function call operator, loads a VBO object for drawing.
    void operator()(VBO const *v);
  private:
    //!< Background color's red   channel value in [0, 1].
    GLfloat _R;
    //!< Background color's green channel value in [0, 1].
    GLfloat _G;
    //!< Background color's blue  channel value in [0, 1].
    GLfloat _B;
    //!< Background color's alpha value in [0, 1] (0 means total transparent, 1 opaque).
    GLfloat _alpha;
    // TODO:: Choose which containers to use to store VBOs and IBOs.
  };

#endif