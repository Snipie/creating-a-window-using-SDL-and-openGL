#include <iostream>
#include "display.h"
#include <GL/glew.h>

int main()
{
    Display display(800, 600, "Hello world");

        while(!display.isClosed())
        {
            glClearColor(0.0f, 0.0f, 3.5f, 0.0f);
            glClear(GL_COLOR_BUFFER_BIT);

            display.Update();
        }

    return 0;
}
