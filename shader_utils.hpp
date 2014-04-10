#ifndef _SHADER_UTILS_HPP_
#define _SHADER_UTILS_HPP_

#include "glew.h"

//! \class
//! - Class Shader represents the notion of an OpenGL shader.
class Shader
  {
  public:
    //!< Returns handle of OpenGL shader associated object.
    virtual GLuint getHandle() const = 0;
    //!< Returns type of OpenGL shader associated object.
    virtual GLenum getType()   const = 0;
  };

//! \class
//! - Class VertexShader represents the notion of an OpenGL fragment shader.
class VertexShader : public Shader
  {
  public:
    //!< Default constructor for VertexShader object.
    VertexShader();
    //!< Destructor for VertexShader object.
    virtual ~VertexShader();
    //!< Returns handle of OpenGL vertex shader associated object.
    GLuint getHandle() const;
    //!< Returns always GL_VERTEX_SHADER.
    GLuint getType() const;
  private:
    //!< OpenGL shader's handle.
    GLuint _handle;
  };

//! \class
//! - Class TesselationControlShader represents the notion of an OpenGL
//!   tesselation control shader.
class TesselationControlShader : public Shader
  {
  public:
    //!< Default constructor for TesselationControlShader object.
    TesselationControlShader();
    //!< Destructor for TesselationControlShader object.
    virtual ~TesselationControlShader();
    //!< Returns handle of OpenGL tesselation control shader associated object.
    GLuint getHandle() const;
    //!< Returns always GL_TESS_CONTROL_SHADER.
    GLuint getType() const;
  private:
    //!< OpenGL shader's handle.
    GLuint _handle;
  };

//! \class
//! - Class TesselationEvaluationShader represents the notion of an OpenGL
//!   tesselation evaluation shader.
class TesselationEvaluationShader : public Shader
  {
  public:
    //!< Default constructor for TesselationEvaluationShader object.
    TesselationEvaluationShader();
    //!< Destructor for TesselationEvaluationShader object.
    virtual ~TesselationEvaluationShader();
    //!< Returns handle of OpenGL tesselation evaluation shader associated object.
    GLuint getHandle() const;
    //!< Returns always GL_TESS_EVALUATION_SHADER.
    GLuint getType() const;
  private:
    //!< OpenGL shader's handle.
    GLuint _handle;
  };

//! \class
//! - Class GeometryShader represents the notion of an OpenGL geometry
//!   shader.
class GeometryShader : public Shader
  {
  public:
    //!< Default constructor for GeometryShader object.
    GeometryShader();
    //!< Destructor for GeometryShader object.
    virtual ~GeometryShader();
    //!< Returns handle of OpenGL geometry shader associated object.
    GLuint getHandle() const;
    //!< Returns always GL_GEOMETRY_SHADER.
    GLuint getType() const;
  private:
    //!< OpenGL shader's handle.
    GLuint _handle;
  };

//! \class
//! - Class FragmentShader represents the notion of an OpenGL fragment
//!   shader.
class FragmentShader : public Shader
  {
  public:
    //!< Default constructor for FragmentShader object.
    FragmentShader();
    //!< Destructor for FragmentShader object.
    virtual ~FragmentShader();
    //!< Returns handle of OpenGL vertex shader associated object.
    GLuint getHandle() const;
    //!< Returns always GL_FRAGMENT_SHADER.
    GLuint getType() const;
  private:
    //!< OpenGL shader's handle.
    GLuint _handle;
  };

//! \class
//! - Class ComputeShader represents the notion of an OpenGL compute
//!   shader.
class ComputeShader : public Shader
  {
  public:
    //!< Default constructor for ComputeShader object.
    ComputeShader();
    //!< Destructor for ComputeShader object.
    virtual ~ComputeShader();
    //!< Returns handle of OpenGL vertex shader associated object.
    GLuint getHandle() const;
    //!< Returns always GL_COMPUTE_SHADER.
    GLuint getType() const;
  private:
    //!< OpenGL shader's handle.
    GLuint _handle;
  };

//! \class
//! - Class OpenGLProgram represents the notion of an OpenGL program.
class OpenGLProgram
  {
  public:
    //!< Default constructor, construct an empty OpenGLProgram object.
    OpenGLProgram();
    //!< Destructor.
    ~OpenGLProgram();
    //!< Returns handle of OpenGL program associated object.
    GLuint getHandle() const;
    //!< Attaches a shader into OpenGLProgram object.
    void attachShader(Shader const *shader);
    //!< Detaches an associated Shader object from OpenGLProgram object.
    void detachShader(Shader const *shader);
  private:
    //!< OpenGLProgram object's handle.
    GLuint _handle;
  };

#endif