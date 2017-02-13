#include <SFML\Graphics.hpp>
#include <iostream>
#include "Level.h"
#include "map.h"
#include "ships.h"
#include "square.h"

using namespace std;

/// <summary>
/// Game class
/// </summary>
class Game
{
public:

	Game();
	void init();
	void run();
	void options();

private:
	void processInput();
	void update(sf::Time);
	void render();
	bool game_On;

	sf::RenderWindow m_window;
	int highScore;
	int difficulty;
	

};
