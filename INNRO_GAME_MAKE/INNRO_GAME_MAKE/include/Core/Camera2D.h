#pragma once
#pragma once
#include <glad/glad.h>
#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>

class Camera2D {
public:
    Camera2D(float width, float height);

    void SetPosition(const glm::vec2& pos);
    void Move(const glm::vec2& delta);

    glm::mat4 GetViewMatrix();
    glm::mat4 GetProjectionMatrix();

private:
    glm::vec2 position;
    float width, height;
};