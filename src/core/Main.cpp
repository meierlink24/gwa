#include "headers/Camera.h"
#include "headers/Renderer.h"
#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>

int main() {
   
    Camera camera;
    camera.move(0.0f, 0.0f, 5.0f); // Move the camera back
    camera.rotate(0.0f, 45.0f, 0.0f); // Rotate the camera


    Renderer::beginScene(camera);

    // cube 
    glm::mat4 modelMatrix = glm::mat4(1.0f);
    modelMatrix = glm::scale(modelMatrix, glm::vec3(1.0f, 1.0f, 1.0f));
    Renderer::renderObject(modelMatrix);

   
    Renderer::endScene();

    return 0;
}
