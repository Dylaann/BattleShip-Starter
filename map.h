#pragma once
#include <SFML\Graphics.hpp>

class map
{
public:
	map();

	void render();
	void update();

private:
	sf::Texture texture;
};
