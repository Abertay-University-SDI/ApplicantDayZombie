#pragma once
#include "Framework/GameObject.h"
#include "Framework/Animation.h"

class Zombie : public GameObject
{
public:
	Zombie();

	// Virtual update function. Base function does nothing (for static objects). Inheritted version will most likely override this function.
	void handleInput(float dt) override;
	//void update(float dt) override;
private:
	Animation walk;
	sf::Texture zombieImage;
};