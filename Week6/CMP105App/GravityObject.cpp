#include "GravityObject.h"
#include "Framework/Vector.h"

GravityObject::GravityObject()
{
	//Bounce
	bounce.addFrame(sf::IntRect(0, 0, 1500, 1500));	//TBC single frame used until ball animation found
	//bounce.setFrameSpeed(1.f/ 10.f)

	//wait
	//wait.addFrame(sf::IntRect(0, 0, 300, 300));
	

	currentAnimation = &bounce;
	setTextureRect(currentAnimation->getCurrentFrame());
	
	//I have no clue as to why this is the syntax written in the slide rip life
	//speed = 50.f;


	// Apply gravity force, increasing velocity
	// Move shape by new velocity
	//sf::Vector2f pos = stepVelocity * dt * 0.5f gravity *dt*dt;		// ut + 1 / 2at ^ 2
	//	stepVelocity gravity dt; // v = u + at note the += is not
	//setPosition getPosition() pos
	//	// Check for collision with bottom of window
	//	if
	//		getPosition().y >=
	//	{
	//		setPosition
	//			getPosition().x,
	//			stepVelocity
	//			= Vector2f(0,
	//	}
}


//Vector
//
//void GravityObject::handleInput(float dt)
//{
//	if (input->isKeyDown(sf::Keyboard::Right))
//	{
//		move(sf::Vector2f(velocity.x, 0) * dt);
//	}
//
//	if (input->isKeyDown(sf::Keyboard::Left))
//	{
//		move(sf::Vector2f(-velocity.x, 0) * dt);
//	}
//
//};



void GravityObject::update(float dt)
{
	currentAnimation->animate(dt);
	setTextureRect(currentAnimation->getCurrentFrame());

	if (input->isKeyDown(sf::Keyboard::Right))
	{
		currentAnimation = &bounce;
		//currentAnimation->reset();	//Don't like this function, cannot hold down button to to action
		setTextureRect(currentAnimation->getCurrentFrame());
	}

	// Other animtaitions to be done later
	//else if (input->isKeyDown(sf::Keyboard::Left))
	//{
	//	currentAnimation = &left;
	//	setTextureRect(currentAnimation->getCurrentFrame());
	//}

	//}
	//else
	//{
	//	currentAnimation = &wait;
	//	setTextureRect(currentAnimation->getCurrentFrame());
	//}
}

void handleInput(float dt)
{

}