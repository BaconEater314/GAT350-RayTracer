#pragma once
#include "glm/glm.hpp"

struct Ray {
	glm::vec3 origin;
	glm::vec3 direction;

	Ray() = default;
	Ray(glm::vec3 origin, glm::vec3 direction)
	{
		origin = this->origin;
		direction = this->direction;
	}

	glm::vec3 at(float t) { return origin + t*direction; }
	//glm::vec3 operator * (float t)
};