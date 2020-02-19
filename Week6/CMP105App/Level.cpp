#include "Level.h"

Level::Level(sf::RenderWindow* hwnd, Input* in)
{
	window = hwnd;
	input = in;

	// initialise game objects
	beachBall.loadFromFile("gfx/Beach_Ball.png");
	ballDude.setTexture(&beachBall);
	ballDude.setSize(sf::Vector2f(100, 100));
	ballDude.setPosition(500, 100);
	ballDude.setVelocity(500.0, 500.0);
	ballDude.setInput(input);
	speedx = 500;
	speedy = 500;
}

Level::~Level()
{

}

// handle user input
void Level::handleInput(float dt)
{
	// Input dt stuff
	ballDude.handleInput(dt);
}

// Update game objects
void Level::update(float dt)
{
	ballDude.update(dt);		// Updates ballDude, each game loop

}

// Render level
void Level::render()
{
	beginDraw();
	window->draw(ballDude);
	endDraw();
}

// Begins rendering to the back buffer. Background colour set to light blue.
void Level::beginDraw()
{
	window->clear(sf::Color(100, 149, 237));
}

// Ends rendering to the back buffer, and swaps buffer to the screen.
void Level::endDraw()
{
	window->display();
}