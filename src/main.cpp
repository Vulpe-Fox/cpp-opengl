#include "config.h"

int main(){
    GLFWwindow* window;

    if(!glfwInit()){
        std::cout << "Could not initialize GLFW" << std::endl;
        return -1;
    }

    window = glfwCreateWindow(1024, 526, "OpenGL Thing", glfwGetPrimaryMonitor(), NULL);
    glfwMakeContextCurrent(window);

    if(!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress)){
        glfwTerminate();
        std::cout << "Could not load GL via glad" << std::endl;
        return -1;
    }

    glClearColor(0.5f, 0.5f, 0.5f, 1.0f);

    while(!glfwWindowShouldClose(window)){
        // loop events here
        glfwPollEvents();
        glfwSwapBuffers();
    }

    glfwTerminate();
    std::cout << "Program completed successfully" << std::endl;
}