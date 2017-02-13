#pragma once
#include <SFML\Graphics.hpp>

class ships
{
public:
	ships(sf::Vector2f pos);

private:
	float rotation;
	sf::Vector2f position;
	sf::Color color;
};