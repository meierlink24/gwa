# GWA: Lightweight and Scalable Game Engine

GWA is a game engine designed to facilitate the creation of 3D open-world multiplayer games. The engine emphasizes performance, aiming to deliver a high-quality experience on high-end systems while maintaining playability on low-end PCs. 

---

## Features
- **Rendering:** Efficient rendering pipeline with support for modern OpenGL.
- **Physics:** Built-in physics engine for real-time simulation.
- **Camera Control:** Advanced camera manipulation features.
- **Mathematics:** Utility classes for vector and matrix operations using GLM.
- **Cross-Platform:** Powered by GLFW for cross-platform compatibility.

---

## Goals
1. **Lightweight Performance:** Optimized for low-end systems to maintain accessibility.
2. **AAA Graphics:** Supports advanced graphics and animations for high-end machines.
3. **Multiplayer Support:** Built with networked gameplay in mind.

---

## Project Structure
```
gwa/
├── src/
│   ├── core/
│   │   └── Main.cpp                  # Entry point of the engine
│   ├── renderer/
│   │   ├── Camera.cpp                # Handles camera transformations
│   │   └── Renderer.cpp              # Responsible for rendering objects
│   ├── physics/
│   │   └── Physics.cpp               # Physics simulation logic
│   └── math/
│       └── Math.cpp                  # Math utilities for the engine
├── include/
│   ├── headers/
│   │   ├── Camera.h                  # Declaration for Camera class
│   │   ├── Engine.h                  # Core engine class/interface
│   │   ├── Renderer.h                # Renderer class declarations
│   │   ├── Physics.h                 # Physics class declarations
│   │   └── Math.h                    # Math utility declarations
│   └── tests/
│       ├── to do/                    # Directory for unimplemented tests
│       ├── successful/               # Directory for passing tests
│       └── failed/                   # Directory for failing tests
├── external/
│   ├── glm/                          # Contains the GLM library (header-only)
│   │   ├── glm/
│   │   └── cmake/
│   └── glfw/                         # Contains the GLFW library
│       ├── include/
│       ├── src/
│       ├── CMake/
│       └── ...
├── CMakeLists.txt                     # Main CMake configuration file
└── README.md                          # Documentation about the project
```

---

## Getting Started
1. **Clone the Repository:**
   ```bash
   git clone <repository-url>
   cd gwa
   ```

2. **Build the Engine:**
   ```bash
   mkdir build
   cd build
   cmake ..
   make
   ```

3. **Run the Demo:**
   ```bash
   ./gwa
   ```

---

## Future Roadmap
- Add support for skeletal animations and advanced shaders.
- Improve physics engine with collision detection and rigid body dynamics.
- Integrate networking for real-time multiplayer support.

---

## Contributions
Contributions are welcome! If you have suggestions or feature requests, feel free to open an issue or submit a pull request.

---


