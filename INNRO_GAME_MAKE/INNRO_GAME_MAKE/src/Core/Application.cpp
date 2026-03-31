#include "Core/Application.h"
#include <glad/glad.h>
#include <GLFW/glfw3.h>

const unsigned int WindowX = 1200;
const unsigned int WindowY = 1000;
int ScreenCenter[2] = { WindowX / 2, WindowY / 2 };

Application::Application()
    :camera(WindowX, WindowY),
    shader("shader/VertexShader.vs", "shader/FragmentShader.fs"),
    player()
{

}


void Application::Run()
{


    window.Init(WindowX, WindowY, "INNRO_GAME_Make");

    shader = Shader("shader/VertexShader.vs", "shader/FragmentShader.fs");

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
        auto view = camera.GetViewMatrix();
        auto proj = camera.GetProjectionMatrix();
        camera.SetPosition(player.position - glm::vec2(ScreenCenter[0], ScreenCenter[1]));
        window.Update();
    }
    glfwTerminate();
}