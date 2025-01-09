#ifndef RENDERER_H
#define RENDERER_H

#include "Camera.h"
#include <glm/glm.hpp>
#include <iostream>
#include <vector>

class Renderer {
public:
    static void beginScene(const Camera& camera) {
        currentViewMatrix = camera.getViewMatrix();
        currentProjectionMatrix = camera.getProjectionMatrix();
        std::cout << "scene started with updated view and projection matrices\n";
    }

    static void endScene() {
        // This can involve swapping buffers, clearing states, etc.
        std::cout << "Scene ended.\n";
    }

    static void renderObject(const glm::mat4& modelMatrix) {
        glm::mat4 mvp = currentProjectionMatrix * currentViewMatrix * modelMatrix;
        // Here, you'd send the MVP matrix to the shader.
        std::cout << "Rendering object with MVP matrix.\n";
    }

private:
    inline static glm::mat4 currentViewMatrix;
    inline static glm::mat4 currentProjectionMatrix;
};

#endif
