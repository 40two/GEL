#include "shader_utils.hpp"
#include "glew.h"

//! \brief
//! - Default constructor for OpenGLProgram objects.
//! - Constructs an empty OpenGLprogram object.
OpenGLProgram::OpenGLProgram()
  : _handle(glCreateProgram())
  {

  }

//! \brief
//! - Destructor of OpenGLProgram object.
//! - Deletes OpenGLProgram object's associated OpenGL program object
//!   immediately if not currently in use in any context, or schedules
//!   program for deletion whe the program is no longer in use by any
//!   contexts.
OpenGLProgram::~OpenGLProgram()
  {
  glDeleteProgram(_handle);
  }

//! \brief
//! - Associates the input Shader object, shader, with OpenGLProgram object.
//!
//! \param[in] shader : Input Shader object to be attached.
//!
//! \return void.
void
OpenGLProgram::attachShader(Shader const *shader)
  {
  glAttachShader(_handle, shader->getHandle());
  }

//! \brief
//! - Removes the association of input Shader object, shader, with OpenGLProgram object.
//!
//! \param[in] shader : Input Shader object to detached.
//!
//! \return void.
void 
OpenGLProgram::detachShader(Shader const *shader)
  {
  glDetachShader(_handle, shader->getHandle());
  }

//! \brief
//! - Returns handle of OpenGL program associated object.
//!
//! \return Handle of OpenGL program associated object.
GLuint 
OpenGLProgram::getHandle() const
  {
  return _handle;
  }