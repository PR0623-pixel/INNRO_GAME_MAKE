#pragma once
#include "Core/Window.h"
#include "Core/Scene.h"

class Application {
public:
    void Run();

private:
    Window window;
    Scene* currentScene = nullptr;
};