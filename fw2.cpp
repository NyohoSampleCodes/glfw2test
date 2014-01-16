#include <GL/glew.h>
#define GLFW_INCLUDE_GLU
#include <GL/glfw.h>
#import <OpenGL/OpenGL.h>

#include <iostream>

using namespace std;

int main()
{
	if (!glfwInit())
	{
		cout<<"Failed to init GLFW"<<endl;
		return -1;
	}
	
	glfwOpenWindowHint(GLFW_FSAA_SAMPLES, 4); //4x antialiasing
	glfwOpenWindowHint(GLFW_OPENGL_VERSION_MAJOR, 3); //OpenGL version
	glfwOpenWindowHint(GLFW_OPENGL_VERSION_MINOR, 2);
	glfwOpenWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE); //Don't want old OpenGL
 
	//Open a window and create its OpenGL context
	if( !glfwOpenWindow( 1920, 1080, 0,0,0,0, 32,0, GLFW_WINDOW ) )
	{
		cout<<"Failed to open GLFW window"<<endl;
		glfwTerminate();
		return -1;
	}
    printf("shader lang: %s\n",glGetString(GL_SHADING_LANGUAGE_VERSION));
	
	return 0;
}
