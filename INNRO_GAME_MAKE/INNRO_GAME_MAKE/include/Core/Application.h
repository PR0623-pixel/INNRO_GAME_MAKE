#pragma once
#include "Core/Window.h"
#include "Core/Scene.h"
#include "Graphics/Shader.h"
#include "Game/Player.h"
#include "Core/Camera2D.h"

class Application {
public:
    Application();
    void Run();

private:
    Window window;
    Scene* currentScene = nullptr;

    Shader shader;
    Camera2D camera;
    Player player;
};