#ifndef WINDOW_H
#define WINDOW_H

#include <GLFW/glfw3.h>

int Window_init(int width, int height, char* title);

// IMPLEMENTATION

int Window_init(int width, int height, char* title){
  if (!glfwInit()){
    //False
  }
}

#endif // WINDOW_H
