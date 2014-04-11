#include "renderer.hpp"

//! \brief
//! - Default constructor.
Renderer::Renderer(GLfloat const R, GLfloat const G, GLfloat const B, GLfloat const alpha)
  : _R(R), _G(G), _B(B), _alpha(alpha)
  {

  }

//! \brief
//! - Overloaded function call operator.
//! - It draws loaded VBOs.
void 
Renderer::operator()() const
  {
  glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
  glClearColor(_R, _G, _B, _alpha);
  // TODO:: Draw VBOs, IBOs etc (i.e., main render loop)
  glFlush();  
  }

//! \brief
//! - Overloaded function call operator.
//! - Loads a vertex buffer object (VBO) to Renderer
//!   object for drawing.
void 
Renderer::operator()(VBO const *v)
  {
  // TODO:: Insert VBO to VBOs' containter.
  }
