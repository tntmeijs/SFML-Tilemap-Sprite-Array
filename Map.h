#pragma once
#include "SFML/Graphics.hpp"
#include <iostream>

class Map
{
public:
	Map();
	void draw(sf::RenderWindow &window);

private:
	void initIntRect();

private:
	const int tileWidth;
	const int tileHeight;

	sf::Texture tileSheet;

	sf::Sprite tile;

	sf::IntRect pinkPath;
	sf::IntRect woodenBox;
	sf::IntRect grass;
	sf::IntRect stoneWall;
};
