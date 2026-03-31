#pragma once
#include <glm/glm.hpp>

class Player {
public:
	glm::vec2 position;

	void Update(float dt);
};