#pragma once
#include <SFML/Graphics.hpp>

namespace bt
{
	class Application
	{
	public:
		Application();

		void Run();

	private:
		void BaseTick(float deltaTime);
		void BaseRenderer();

		virtual void Tick(float deltaTime);
		virtual void Render();

	private:
		sf::RenderWindow m_window;
		float m_targetFrameRate;
		sf::Clock m_tickClock;
	};
}