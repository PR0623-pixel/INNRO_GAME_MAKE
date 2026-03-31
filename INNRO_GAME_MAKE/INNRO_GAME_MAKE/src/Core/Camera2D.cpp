#include "Core/Camera2D.h"

Camera2D::Camera2D(float w, float h)
	: width(w), height(h), position(0.0f, 0.0f)
{
}

void Camera2D::SetPosition(const glm::vec2& pos) {
	position = pos;
}

void Camera2D::Move(const glm::vec2& delta) {
	position += delta;
}

glm::mat4 Camera2D::GetViewMatrix() {
	return glm::translate(glm::mat4(1.0f), glm::vec3(-position, 0.0f));
}

glm::mat4 Camera2D::GetProjectionMatrix()
{
	return glm::ortho(0.0f, (float)width, (float)height, 0.0f);
}