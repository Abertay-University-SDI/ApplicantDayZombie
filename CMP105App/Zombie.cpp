#include "Zombie.h"

// Initialise and setup zombie player character
Zombie::Zombie()
{
	// setup zombie animation
	// Add each frame of the animation, in order.
	walk.addFrame(sf::IntRect(0, 0, 55, 108));
	walk.addFrame(sf::IntRect(55, 0, 55, 108));
	walk.addFrame(sf::IntRect(110, 0, 55, 108));
	walk.addFrame(sf::IntRect(165, 0, 55, 108));
	walk.addFrame(sf::IntRect(220, 0, 55, 108));
	walk.addFrame(sf::IntRect(275, 0, 55, 108));
	walk.addFrame(sf::IntRect(330, 0, 55, 108));
	walk.addFrame(sf::IntRect(385, 0, 55, 108));

	// Set the animation speed. How fast will the zombie walk animate. Walking Dead or 28 Days Later?
	walk.setFrameSpeed(1.0f / 10.0f);

	// The speed the character will move.
	velocity.x = 100.0f;

	// Setup up the character, size, start position
	setSize(sf::Vector2f(110, 216));
	setPosition(100, 100);
	// Load in animation image
	zombieImage.loadFromFile("gfx/animZombie.png");
	setTexture(&zombieImage);
	// Get the first frame of the animation.
	setTextureRect(walk.getCurrentFrame());
}

// Detect user input and respond. Move and animate the zombie if input is detected.
void Zombie::handleInput(float dt)
{
	// Check if the right arrow is pressed, move the zombie.
	if (input->isKeyDown(sf::Keyboard::Right))
	{
		// Move the zombie
		move(velocity * dt);

		// Animate the zombie

	}
	// If the left arrow is being pressed move and animate the zombie.
	else if (input->isKeyDown(sf::Keyboard::Left))
	{
		// Move the zombie in the left direction.
		move(-velocity * dt);

		// Animate the zombie

	}
	// Select current animation frame.
	setTextureRect(walk.getCurrentFrame());
}