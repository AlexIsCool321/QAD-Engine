#include <QAD_Render.h>

void Resize_Callback(GLFWwindow* window, int width, int height)
{
	glViewport(0, 0, width, height);
}

namespace QAD
{
	namespace QAD_Render
	{
		
		QAD_Window::QAD_Window()
		{
			if (Has_Init())
			{
				assert("QAD_RENDER HAS NOT BEEN INIT!");
			}

			this->window = glfwCreateWindow(600, 600, "QAD Window", NULL, NULL);
			if (!this->window)
			{
				assert("FAILED TO CREATE WINDOW");
				glfwTerminate();
			}
			glfwMakeContextCurrent(this->window);
			glfwSetFramebufferSizeCallback(window, Resize_Callback);
		}

		QAD_Window::QAD_Window(int width, int height, const char* title)
		{
			if (Has_Init())
			{
				assert("QAD_RENDER HAS NOT BEEN INIT!");
			}

			if (width <= 0)
			{
				width = 1;
				std::cout << "WARNING : WIDTH IS LESS THAN 0" << std::endl;
				assert("WIDTH IS LESS THAN 0");
			}
			
			if (height <= 0)
			{
				height = 1;
				std::cout << "WARNING : HEIGHT IS LESS THAN 0" << std::endl;
				assert("HEIGHT IS LESS THAN 0");
			}

			this->window = glfwCreateWindow(width, height, title, NULL, NULL);
			if (!this->window)
			{
				assert("FAILED TO CREATE WINDOW");
				glfwTerminate();
			}
			glfwMakeContextCurrent(this->window);
			glfwSetFramebufferSizeCallback(window, Resize_Callback);
		}


		void QAD_Window::Rename(const char* title)
		{
			glfwSetWindowTitle(this->window, title);
		}

		void QAD_Window::Resize(int width, int height)
		{
			if (width <= 0)
			{
				width = 1;
				std::cout << "WARNING : WIDTH IS LESS THAN 0" << std::endl;
				assert("WIDTH IS LESS THAN 0");
			}
			if (height <= 0)
			{
				height = 1;
				std::cout << "WARNING : HEIGHT IS LESS THAN 0" << std::endl;
				assert("HEIGHT IS LESS THAN 0");
			}
			glfwSetWindowSize(this->window, width, height);
		}


		void QAD_Window::Push_Context()
		{
			glfwMakeContextCurrent(this->window);
		}


		void QAD_Window::Update()
		{
			glClear(GL_COLOR_BUFFER_BIT);
			glfwPollEvents();
			glfwSwapBuffers(this->window);
		}


		bool QAD_Window::Should_Close()
		{
			return glfwWindowShouldClose(this->window);
		}

		void QAD_Window::Close()
		{
			glfwDestroyWindow(this->window);
		}
		

		QAD_Window::~QAD_Window()
		{
			glfwDestroyWindow(this->window);
			delete this->window;
		}
	}
}