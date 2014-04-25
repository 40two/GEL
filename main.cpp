#include <memory>        // shared_ptr

// don't change the order the header files below
#include "glew.h"
#include <GL/freeglut.h>

#include "renderer.hpp"

//!< Global pointer to Renderer object.
auto renderer_ptr = std::make_shared<Renderer>(0.0f, 0.3f, 0.4f, 1.0f);

//! \brief
//! - Display call-back to be fead in glutDisplayFunc().
//! - Simply calls global function object renderer_ptr.
//!
//! \return void.
void
display(void)
  {
  (*renderer_ptr)();
  }

//! \brief
//! - Main function.
//!
//! \param[in] argc : Number of input command arguments.
//! \param[in] argv : Array with input command arguments as strings.
//!
//! \return 0 on succeful termination, 1 otherwise.
int
main(int argc, char *argv[])
{
  glutInit(&argc, argv);
  glutInitDisplayMode(GLUT_RGBA | GLUT_DEPTH);
  glutInitWindowSize(512, 512);
  glutInitContextVersion(4, 2);
  glutInitContextProfile(GLUT_CORE_PROFILE);
  glutCreateWindow(argv[0]);
  glutDisplayFunc(display);
  glutMainLoop();

  return 0;
}
