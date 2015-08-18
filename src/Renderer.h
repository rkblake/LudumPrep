#ifndef RENDERER_H
#define RENDERER_H

#ifdef __APPLE__
    #include <OpenGL/gl3.h>
#else
    #include <GL/glew.h>
#endif
#include <glm/glm.hpp>

#define CLAMP(A, LOWER, UPPER) (A > LOWER && A < UPPER) ? (A) : (A < LOWER ? (LOWER) : (UPPER))

typedef struct {
    int x, y;
} Camera;

class Renderer {
public:
    Renderer();
    ~Renderer() {}
    void RenderSquare(float x, float y, float width, float height);
private:
    GLuint view_matrix_handle, program;
    glm::mat4 view_matrix;
};

#endif