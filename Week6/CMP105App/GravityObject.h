#pragma once
#include "Framework/GameObject.h"
#include "Framework/Animation.h"

class GravityObject: public GameObject
{
public:
	GravityObject();

	// Object orientation
	void update(float dt) override;

	// Object input movement decleration
	void handleInput(float dt);

protected:
	// Animation object decleration
	Animation bounce;
	Animation wait;


	// Animtion pointer 
	Animation* currentAnimation;
};

