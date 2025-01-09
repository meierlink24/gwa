#ifndef CAMERA_H
#define CAMERA_H

#include <iostream>
#include <vector>
#include <cmath>
#include <string>
#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>



class Camera{
    public: 
    Camera() : position{0.0f, 0.0f, 0.0f}, rotation{0.0f, 0.0f, 0.0f}, fov(45.0f), aspectRatio(4.0f / 3.0f), nearPlane(0.1f), farPlane(100.0f) {}
    // starting postion 0, 0, 0 - yeah, idk what i am doin

    void rotate(float pitch, float yaw, float roll){
        rotation[0] += pitch;
        rotation[1] += yaw;
        rotation[2] += roll;

        normalizeRotation();

    }

    void move( float dx, float dy, float dz){
        position[0] += dx;
        position[1] += dy;
        position[2] += dz;
        
    }

    // view matrix
    glm::mat4 getViewMatrix() const {
     
     glm::mat4 view = glm::mat4(1.0f);
         
        view = glm::rotate(view, glm::radians(rotation[0]), glm::vec3(1.0f, 0.0f, 0.0f));
        view = glm::rotate(view, glm::radians(rotation[1]), glm::vec3(0.0f, 1.0f, 0.0f));
        view = glm::rotate(view, glm::radians(rotation[2]), glm::vec3(0.0f, 0.0f, 1.0f));
        view = glm::translate(view, -glm::vec3(position[0], position[1], position[2]));
        return view;

    }
    
    //cprojection matrix
    glm::mat4 getProjectionMatrix() const {
        return glm::perspective(glm::radians(fov), aspectRatio, nearPlane, farPlane);
    }

   const std::vector<float>& getPosition() const {
    return position;
   }

   const std::vector<float>& getRotation() const  {
    return rotation;
   }
   
   void setAspectRatio(float ratio) { aspectRatio = ratio; }
   void setProjectionParams(float fovDegrees, float near, float far) {
        fov = fovDegrees;
        nearPlane = near;
        farPlane = far;
    }


   private:

   std::vector<float> rotation;
   std::vector<float> position;

    float fov;
    float aspectRatio;
    float nearPlane;
    float farPlane;


   void normalizeRotation(){
    // if rotation angles exit the scope of 0 - 360 ?
    for (auto& angle : rotation){
        if(angle > 360.0f) angle -= 360.0f;
        if(angle < 0.0f) angle += 360.0f;
    }
   }




 



};



#endif 