#include <cstdlib>
#include <cstdio>

#include "Adder/adder.hpp"
#include <GLFW/glfw3.h>

using namespace std;

int main(int argc, char **argv)
{

  float f = add(2.2f, 3.3f);

  printf("%s - %f\n", "S1impleProject", f);

  GLFWwindow *window;
  int width, height;

  if (!glfwInit())
  {
    fprintf(stderr, "Failed to initialize GLFW\n");
    exit(EXIT_FAILURE);
  }

  glfwWindowHint(GLFW_DEPTH_BITS, 16);
  glfwWindowHint(GLFW_TRANSPARENT_FRAMEBUFFER, GLFW_TRUE);

  window = glfwCreateWindow(300, 300, "Gears", NULL, NULL);
  if (!window)
  {
    fprintf(stderr, "Failed to open GLFW window\n");
    glfwTerminate();
    exit(EXIT_FAILURE);
  }

  while (!glfwWindowShouldClose(window))
  {


    // Swap buffers
    glfwSwapBuffers(window);
    glfwPollEvents();
  }

  // Terminate GLFW
  glfwTerminate();

  return EXIT_SUCCESS;
}
