#include "Core/Application.h"
#include <glad/glad.h>

void Application::Run()
{
    window.Init(800, 600, "RPG Framework");

    while (!window.ShouldClose()) {

        // Clear
        glClearColor(0.1f, 0.1f, 0.1f, 1.0f);
        glClear(GL_COLOR_BUFFER_BIT);

        // Scene Ã³¸®
        if (currentScene)
        {
            currentScene->Update(0.016f);
            currentScene->Render();
        }

        window.Update();
    }
}