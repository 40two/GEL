#ifndef _VBO_HPP_
#define _VBO_HPP_

class Renderer;

#include "glew.h" // GLuint, GLenum, GLsizei

class VBO
  {
  public:
    //!< Default constructor.
    VBO();
    
    // TODO:: Define other constructor with input arguments.

    //!< Draws Vertex Buffer Object (VBO).
    void draw(Renderer const &renderer) const;
  private:
    GLuint  ID_buffer;
    GLuint  ID_program;
    GLuint  ID_vao;
    GLenum  type;
    GLsizei n_vertices;
  };

#endif