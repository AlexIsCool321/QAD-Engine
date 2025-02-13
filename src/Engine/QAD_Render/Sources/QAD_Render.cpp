#include <QAD_Render.h>

bool init = false;

namespace QAD
{
	namespace QAD_Render
	{
		void QAD_Render_Init()
		{
			// GLFW Init
			if (!glfwInit())
			{
				std::cout << "FAILED TO INIT GLFW" << std::endl;
				assert("FAILED TO INIT GLFW");
				return;
			}
			glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
			glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
			glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

#ifdef __APPLE__
			glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, GL_TRUE);
#endif

			// GLAD Init
			GLFWwindow* glad_init_window = glfwCreateWindow(1, 1, "GLAD INIT", NULL, NULL);
			if (!glad_init_window)
			{
				std::cout << "FAILED TO INIT GLAD" << std::endl;
				assert("FAILED TO INIT GLAD");
				glfwTerminate();
				return;
			}
			glfwMakeContextCurrent(glad_init_window);

			if (!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress))
			{
				std::cout << "FAILED TO INIT GLAD" << std::endl;
				assert("FAILED TO INIT GLAD");
				return;
			}
			glfwDestroyWindow(glad_init_window);

			init = true;

			std::cout << "QAD_RENDER INTI SUCSESFULLY!" << std::endl;
		}

		bool Has_Init()
		{
			return init;
		}
	}
}