#include <glad/glad.h>
#include <GLFW/glfw3.h>

#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>

#include <assert.h>

#include <iostream>

namespace QAD
{
	namespace QAD_Render 
	{
		void QAD_Render_Init();

		bool Has_Init();

		class QAD_Window
		{
		private:
			GLFWwindow* window;
		public:

			QAD_Window();
			QAD_Window(int width, int height, const char* title);

			void Rename(const char* title);

			void Resize(int width, int height);


			void Push_Context();


			void Update();


			bool Should_Close();

			void Close();

			~QAD_Window();

		};

		class QAD_Shader
		{
		private:
			unsigned int ID;

		public:
			const char* vertex_shader;
			const char* fragment_shader;

			QAD_Shader(const char* vertex_shader_path, const char* fragment_shader_path);
			
			~QAD_Shader();


			void Set_Up_Shader();

			void Use();
		};

		struct QAD_Material
		{
			
		};

		class QAD_Mesh
		{
		private:

		public:
		};

		class QAD_Camera
		{
		private:

		public:

		};
	}
}