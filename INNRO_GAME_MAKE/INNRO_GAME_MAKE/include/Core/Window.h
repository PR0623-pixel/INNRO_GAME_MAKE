#pragma once

#include <glad/glad.h>
#include <GLFW/glfw3.h>

class Window {
public:
    Window();
    bool Init(int width, int height, const char* title);
    void Update();
    bool ShouldClose();

    GLFWwindow* GetNative() { return window; }

private:
    GLFWwindow* window;
};