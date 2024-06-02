#include <QN.h>;

class Sandbox : public QN::Application
{
public:
	Sandbox()
	{

	}

	~Sandbox()
	{

	}

	void Run()
	{
		
	}
};

QN::Application* CreateApplication()
{
	return new Sandbox();
}