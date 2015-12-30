#include "Map.h"

Map::Map()
	: tileWidth(30)
	, tileHeight(30)
{
	// Load the texture which contains the tiles
	if (!tileSheet.loadFromFile("Assets/Map/tiles.png"))
	{
		std::cout << "Could not load \"tiles.png\"!" << std::endl;
	}

	// Set the tiles
	tile.setTexture(tileSheet);

	// Assign the tiles to the IntRect
	initIntRect();
}

void Map::draw(sf::RenderWindow &window)
{
	// This is the map (20x20 tiles)
	const int mapRows = 20;
	const int mapColumns = 20;

	/*
		-	0	=	pink path
		-	1	=	stone wall
		-	2	=	wooden box
		-	3	=	grass
	*/

	int map[mapRows][mapColumns] =
	{
		{ 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 }, // row 1
		{ 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1 }, // row 2
		{ 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1 }, // row 3
		{ 1, 0, 0, 2, 2, 2, 2, 2, 2, 0, 0, 2, 2, 2, 2, 2, 2, 0, 0, 1 }, // row 4
		{ 1, 0, 0, 2, 3, 3, 3, 3, 2, 0, 0, 2, 3, 3, 3, 3, 2, 0, 0, 1 }, // row 5
		{ 1, 0, 0, 2, 3, 2, 2, 2, 2, 0, 0, 2, 2, 2, 2, 3, 2, 0, 0, 1 }, // row 6
		{ 1, 0, 0, 2, 3, 2, 0, 0, 0, 0, 0, 0, 0, 0, 2, 3, 2, 0, 0, 1 }, // row 7
		{ 1, 0, 0, 2, 3, 2, 0, 0, 0, 0, 0, 0, 0, 0, 2, 3, 2, 0, 0, 1 }, // row 8
		{ 1, 0, 0, 2, 2, 2, 0, 0, 2, 2, 2, 2, 0, 0, 2, 2, 2, 0, 0, 1 }, // row 9
		{ 1, 0, 0, 0, 0, 0, 0, 0, 2, 3, 3, 2, 0, 0, 0, 0, 0, 0, 0, 1 }, // row 10
		{ 1, 0, 0, 0, 0, 0, 0, 0, 2, 3, 3, 2, 0, 0, 0, 0, 0, 0, 0, 1 }, // row 11
		{ 1, 0, 0, 2, 2, 2, 0, 0, 2, 2, 2, 2, 0, 0, 2, 2, 2, 0, 0, 1 }, // row 12
		{ 1, 0, 0, 2, 3, 2, 0, 0, 0, 0, 0, 0, 0, 0, 2, 3, 2, 0, 0, 1 }, // row 13
		{ 1, 0, 0, 2, 3, 2, 0, 0, 0, 0, 0, 0, 0, 0, 2, 3, 2, 0, 0, 1 }, // row 14
		{ 1, 0, 0, 2, 3, 2, 2, 2, 2, 0, 0, 2, 2, 2, 2, 3, 2, 0, 0, 1 }, // row 15
		{ 1, 0, 0, 2, 3, 3, 3, 3, 2, 0, 0, 2, 3, 3, 3, 3, 2, 0, 0, 1 }, // row 16
		{ 1, 0, 0, 2, 2, 2, 2, 2, 2, 0, 0, 2, 2, 2, 2, 2, 2, 0, 0, 1 }, // row 17
		{ 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1 }, // row 18
		{ 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1 }, // row 19
		{ 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 }, // row 20
	};

	// IntRect placeholder
	sf::IntRect placeHolder;

	// Loop through the rows
	for (int row = 0; row < mapRows; row++)
	{
		// Loop through the columns
		for (int column = 0; column < mapColumns; column++)
		{
			switch (map[row][column])
			{
			case 0:
				placeHolder = pinkPath;
				break;
			case 1:
				placeHolder = stoneWall;
				break;
			case 2:
				placeHolder = woodenBox;
				break;
			case 3:
				placeHolder = grass;
				break;
			}

			// Set the correct part of the spritesheet
			tile.setTextureRect(placeHolder);

			// Set the position
			tile.setPosition((row * tileWidth), (column * tileHeight));

			// Draw the sprite to the screen
			window.draw(tile);
		}
	}
}

void Map::initIntRect()
{
	grass.left = 0;
	grass.top = 0;
	grass.width = tileWidth;
	grass.height = tileHeight;

	pinkPath.left = 30;
	pinkPath.top = 0;
	pinkPath.width = tileWidth;
	pinkPath.height = tileHeight;

	stoneWall.left = 0;
	stoneWall.top = 30;
	stoneWall.width = tileWidth;
	stoneWall.height = tileHeight;

	woodenBox.left = 30;
	woodenBox.top = 30;
	woodenBox.width = tileWidth;
	woodenBox.height = tileHeight;
}
