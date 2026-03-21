#include "Core/Window.h"
#include <iostream>

bool Window::Init(int width, int height, const char* title)
{
    if (!glfwInit()) {
        std::cout << "GLFW Init Failed\n";
        return false;
    }

    window = glfwCreateWindow(width, height, title, nullptr, nullptr);
    if (!window) {
        std::cout << "Window Creation Failed\n";
        glfwTerminate();
        return false;
    }

    glfwMakeContextCurrent(window);

    if (!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress)) {
        std::cout << "GLAD Init Failed\n";
        return false;
    }

    glViewport(0, 0, width, height);

    return true;
}

void Window::Update()
{
    glfwSwapBuffers(window);
    glfwPollEvents();
}

bool Window::ShouldClose()
{
    return glfwWindowShouldClose(window);
}