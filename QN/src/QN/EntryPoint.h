#pragma once

#include "Application.h"

#ifdef QN_WINDOWS

extern QN::Application* CreateApplication();

int main(int argc, char** argv)
{
	auto app = CreateApplication();
	app->Run();
	delete app;
}

#endif