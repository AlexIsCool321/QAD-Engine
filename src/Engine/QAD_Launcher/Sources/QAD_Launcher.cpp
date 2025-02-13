#include <QAD_Render.h>

using namespace QAD;
using namespace QAD_Render;

int main()
{
	QAD_Render_Init();

	QAD_Window window = QAD_Window(800, 600, "QAD");
	
	float vertices[] = {
	-0.5f, -0.5f, 0.0f,
	 0.5f, -0.5f, 0.0f,
	 0.0f,  0.5f, 0.0f
	};

	while (!window.Should_Close())
	{
		window.Update();
	}
	
	window.Close();

	return 0;
}