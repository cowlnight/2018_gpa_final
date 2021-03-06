#pragma once
#include <stdio.h>
#include <string>
#include <vector>
#include <map>

#include <OpenGL/gl3.h>
#include <GLUT/glut.h>
#include <unistd.h>
#include "../Include/GLM/glm/glm.hpp"
#include "../Include/GLM/glm/gtc/matrix_transform.hpp"
#include "../Include/GLM/glm/gtc/type_ptr.hpp"
//#include "../Externals/Include/Include.h"

class Camera{
public:
	Camera();
	~Camera();
	void reshape(int, int);
	void trackballUpdate(int, int, int, int);

	glm::mat4 getView();
	glm::mat4 getProjection();

	void moveFront();
	void moveBack();
	void moveLeft();
	void moveRight();
	void moveUp();
	void moveDown();

	glm::vec3 eye_pos = glm::vec3(-6.533580, 3.576440, 4.185325);//-10.0, -5.0, 0.0
	glm::vec3 eye_front = glm::vec3(1.0f, 0.0f, 0.0f);
	glm::vec3 eye_up = glm::vec3(0.0f, 1.0f, 0.0f);

	float yaw = 90.0f;	// Yaw is initialized to -90.0 degrees since a yaw of 0.0 results in a direction vector pointing to the right (due to how Eular angles work) so we initially rotate a bit to the left.
	float pitch = 0.0f;

private:
	glm::mat4 view;
	glm::mat4 projection;
};

