#include "gamewindow.h"

int main() {

    GLfloat proportions = 720.0f;
    GameWindow *gameWindow = new GameWindow(proportions * 16 / 9, proportions, "FirstOpenGLGame");

    /* Loop until the user closes the window */
    while (gameWindow->getRunning()) {
        /* Render here */

        gameWindow->render();
        gameWindow->update();

        gameWindow->setRunning();
    }

    delete gameWindow;

    glfwTerminate();
    return 0;
}

