#include "Camera.h"
#include "glm/glm.hpp"

void Camera::SetView(const glm::vec3& eye, const glm::vec3& target, const glm::vec3& up) {
	this->eye = eye;

	// create camera axis
	this->forward = glm::normalize(target - eye);
		
	//normalized vector from the cross product of the forward and up vector
	this->right = glm::normalize(glm::cross(this->forward, up)); 

	//normalized vector from the cross product of the right and forward vector
	this->up = glm::normalize(glm::cross(this->right, this->forward));

	CalculateViewPlane();
}

ray_t Camera::GetRay(const glm::vec2& uv) const {
	ray_t ray;

	ray.origin = eye;
	// lower left position + horizontal vector * uv.x + vertical vector * uv.y - camera eye;
	ray.direction = (lowerLeft + (horizontal * uv.x) + (vertical * uv.y)) - eye;

	return ray;
}

void Camera::CalculateViewPlane() {
	//convert fov (degrees) to radians
	float theta = glm::radians(fov);

	//trig function that is opposite over adjacent, use half theta as parameter
	float halfHeight = tan(theta * 0.5f);
	// scale halfHeight by aspect ratio
	float halfWidth = halfHeight * aspectRatio;

	// right vector * width (how do you get full width from half width?)
	horizontal = right * (halfWidth * 2);
	// up vector * height (how do you get full height from half height?)
	vertical = up * (halfHeight * 2);

	// eye - (half horizontal) - (half vertical) + forward;
	lowerLeft = eye - (horizontal * 0.5f) - (vertical * 0.5f) + forward;
}

