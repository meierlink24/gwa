#ifndef CAMERA_H
#define CAMERA_H

#include <iostream>
#include <vector>
#include <cmath>
#include <string>



class Camera{
    public: 
    Camera() : position{0.0f, 0.0f, 0.0f}, rotation{0.0f, 0.0f, 0.0f} {}
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

    
   void update(std::vector<string>& updaterefr);
   const std::vector<float>& getPosition() const {
    return position;
   }

   const std::vector<float> getRotation() const  {
    return rotation;
   }
   
   private:

   std::vector<float> rotation;
   std::vector<float> position;

   void normalizeRotation(){
    // if rotation angles exit the scope of 0 - 360 ?
    for (auto& angle : rotation){
        if(angle > 360.0f) angle -= 360.0f;
        if(angle < 360.0f) angle -= 360.0f;
    }
   }




 



};



#endif 