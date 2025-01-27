#include <iostream>
#include "framework/Application.hpp"

namespace bt
{
	Application::Application()
		: m_window(sf::VideoMode({ 1280, 768 }), "Bee Transport"), 
		m_targetFrameRate{ 60.0f },
		m_tickClock{}
	{
		m_window.setVerticalSyncEnabled(true);
	}

	void Application::Run()
	{
		m_tickClock.restart();
		float accumulatedTime = 0.0f;
		float targetDeltaTime = 1.0f / m_targetFrameRate;

		while (m_window.isOpen())
		{
			while (const std::optional ev = m_window.pollEvent())
			{
				if (ev->is<sf::Event::Closed>())
					m_window.close();
			}

			float deltaTime = m_tickClock.restart().asSeconds();
			// Return the amount of time that has elapsed
			accumulatedTime += deltaTime;

			// If it's true we have to update our game
			if (accumulatedTime > targetDeltaTime)
			{
				accumulatedTime -= targetDeltaTime;
				BaseTick(targetDeltaTime);
				BaseRenderer();
			}

			std::cout << "Ticking at framerate: " << 1.0f / deltaTime << std::endl;
		}
	}

	void Application::BaseTick(float deltaTime)
	{
		Tick(deltaTime);
	}

	void Application::BaseRenderer()
	{
		m_window.clear(sf::Color(0, 0, 0));
		Render();
		m_window.display();
	}

	void Application::Tick(float deltaTime)
	{

	}

	void Application::Render()
	{
		sf::CircleShape circle{50};
		circle.setOrigin(sf::Vector2f( 50, 50 ));
		circle.setFillColor(sf::Color(255, 0, 0));
		circle.setPosition(sf::Vector2f(m_window.getSize().x / 2.0f, m_window.getSize().y / 2.0f));
		m_window.draw(circle);
	}
}