#include <QAD_Render.h>

namespace QAD
{
	namespace QAD_Render
	{
		QAD_Shader::QAD_Shader(const char* vertex_shader_path, const char* fragment_shader_path)
		{

		}

		QAD_Shader::~QAD_Shader()
		{
			delete this->vertex_shader;
			delete this->fragment_shader;
		}


		void QAD_Shader::Set_Up_Shader()
		{

		}

		void QAD_Shader::Use()
		{

		}
	}
}