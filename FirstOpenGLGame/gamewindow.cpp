#include "gamewindow.h"

GameWindow::GameWindow(int width, int height, const char* title) : _running(true), _width(width), _height(height) {
    /* Initialize the library */
    if(!glfwInit()){
        glfwTerminate();
        exit(EXIT_FAILURE);
    }

    /* Create a windowed mode window and its OpenGL context */
    window = glfwCreateWindow(width, height, title, NULL, NULL);
    if(!window) {
        glfwTerminate();
        exit(0);
    }

    /* Make the window's context current */
    glfwMakeContextCurrent(window);


    glClearColor(1.0f, 1.0f, 1.0f, 1.0f);

    coordSettings();
}

void GameWindow::setRunning() {
    _running = !glfwWindowShouldClose(window);
}

bool GameWindow::getRunning() {
    return _running;
}

void GameWindow::render() {

    GLfloat vertices[8] = {0.0f, 0.0f,
                           256.0f, 0.0f,
                           256.0f, 256.0f,
                           0.0f, 256.0f};

    glClear(GL_COLOR_BUFFER_BIT);

    glColor3f(1.0f, 0.0f, 1.0f);
    glEnableClientState(GL_VERTEX_ARRAY);
    glVertexPointer(2, GL_FLOAT, 0, vertices);

    glDrawArrays(GL_QUADS, 0, 8);

    glDisableClientState(GL_VERTEX_ARRAY);

    glfwSwapBuffers(window);

    /* Poll for and process events */
    glfwPollEvents();
}

void GameWindow::update() {

}

void GameWindow::coordSettings() {
    glViewport( 0, 0, _width, _height );
    glMatrixMode(GL_PROJECTION);
    glOrtho(0.0, _width, _height, 0.0f, 1.0, -1.0);
    glMatrixMode(GL_MODELVIEW);
}
