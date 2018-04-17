#include <glad\glad.h>
#include <GLFW\glfw3.h>

#include <iostream>

int main(int argc, char** args) {

	glfwInit();
	
	glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
    glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, GL_TRUE);
	
	GLFWwindow* window = glfwCreateWindow(600, 600, "OpenGL", nullptr, nullptr);
    if (window == nullptr) {
        std::cout << "Failed to create window.";
        return -1;
    }
	
	glfwMakeContextCurrent(window);
    gladLoadGL();
	
	while (!glfwWindowShouldClose(window)) {
        if (glfwGetKey(window, GLFW_KEY_ESCAPE) == GLFW_PRESS)
            glfwSetWindowShouldClose(window, true);

        glClearColor(0.3f, 0.3f, 0.3f, 1.0f);
        glClear(GL_COLOR_BUFFER_BIT);

        glfwSwapBuffers(window);
        glfwPollEvents();
    }
	
	glfwTerminate();	
	return 0;
}