#ifndef COLLISION_H
#define COLLISION_H


#include "matrices.h"
#include <iostream>

#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <ctime>

// Headers abaixo s�o espec�ficos de C++
#include <map>
#include <stack>
#include <string>
#include <vector>
#include <limits>
#include <fstream>
#include <sstream>
#include <stdexcept>
#include <algorithm>
#include <chrono>
#include <iostream>


// Headers das bibliotecas OpenGL
#include <glad/glad.h>   // Cria��o de contexto OpenGL 3.3
#include <GLFW/glfw3.h>  // Cria��o de janelas do sistema operacional

// Headers da biblioteca GLM: cria��o de matrizes e vetores.
#include <glm/mat4x4.hpp>
#include <glm/vec4.hpp>
#include <glm/gtc/type_ptr.hpp>

// Headers da biblioteca para carregar modelos obj
#include <tiny_obj_loader.h>

#include <stb_image.h>


// COLISSION_H
//Defini�oes

void collisionHandler(glm::vec4 bbox_min, glm::vec4 bbox_max, int object_id);


#endif
