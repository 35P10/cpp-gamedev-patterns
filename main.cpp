#include <glad/glad.h>
#include <GLFW/glfw3.h>

#include <iostream>
#include "src/entities/game/builder/GameBuilder.h"

void framebuffer_size_callback(GLFWwindow* window, int width, int height);
void processInput(GLFWwindow *window);

// settings
const unsigned int SCR_WIDTH = 800;
const unsigned int SCR_HEIGHT = 600;

int main()
{  
    GameBuilder _services;

    Game* A = _services._gameController;

    while (A->checkInput())
    {
        A->snakeEntity();
        A->render();
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