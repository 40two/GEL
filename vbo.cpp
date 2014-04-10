#include "vbo.hpp"
#include "renderer.hpp"

//! \brief
//! - Default constructor.
VBO::VBO()
  {
  // TODO::
  }

//! \brief
//! - Draws VBO object.
//!
//! \return void.
void 
VBO::draw(Renderer const &renderer) const
  {
  glBindVertexArray(ID_vao);
  glDrawArrays(type, 0, n_vertices);
  glBindVertexArray(0);
  }