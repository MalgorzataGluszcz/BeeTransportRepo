#include <iostream>
#include <SFML/Graphics.hpp>
#include "framework/Application.hpp"

int main()
{
	bt::Application* app = new bt::Application();
	app->Run();

	delete app;

	return 0;
}