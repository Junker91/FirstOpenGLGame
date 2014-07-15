#ifndef GAMEWINDOW_H
#define GAMEWINDOW_H

#include <iostream>

#include <GL/glew.h>
#include <GLFW/glfw3.h>

class GameWindow
{
private:
    GLFWwindow* window;
    bool _running;
    GLfloat _width;
    GLfloat _height;

    void coordSettings();

public:
    GameWindow(int width, int height, const char* title);

    void setRunning();
    bool getRunning();

    void render();
    void update();
};

#endif // GAMEWINDOW_H
