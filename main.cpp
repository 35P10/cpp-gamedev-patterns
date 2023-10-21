#include <glad/glad.h>
#include <GLFW/glfw3.h>

#include <iostream>
#include "src/ServicesConfig.h"

void framebuffer_size_callback(GLFWwindow* window, int width, int height);
void processInput(GLFWwindow *window);

// settings
const unsigned int SCR_WIDTH = 800;
const unsigned int SCR_HEIGHT = 600;

int main()
{  
    ServicesConfig _services;

    GameController* A = _services._gameController;

    while (A->checkInput())
    {
        A->snakeEntity();
    }
    
    
    return 0;
}

void processInput(GLFWwindow *window)
{
    if(glfwGetKey(window, GLFW_KEY_ESCAPE) == GLFW_PRESS)
        glfwSetWindowShouldClose(window, true);
}

void framebuffer_size_callback(GLFWwindow* window, int width, int height)
{
    glViewport(0, 0, width, height);
}