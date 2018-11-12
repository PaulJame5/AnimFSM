#include <iostream>
#include <SFML/Graphics.hpp>
#include <AnimatedSprite.h>
#include <Player.h>
#include <Input.h>
#include <Debug.h>
#include <Windows.h>

using namespace std;

int main()
{
	// Create the main window
	sf::RenderWindow window(sf::VideoMode(800, 600), "SFML window");

	// Load a sprite to display
	sf::Texture texture;
	if (!texture.loadFromFile("assets\\grid.png")) {
		DEBUG_MSG("Failed to load file");
		return EXIT_FAILURE;
	}

	// Setup Players Default Animated Sprite
	AnimatedSprite animated_sprite(texture);

	// Loop through texture and add it to animated_sprite frame
	for (int y = 0; y < 6; y++)
	{
		for (int x = 0; x < 6; x++)
		{
			int xCol = 3 + (85 * x);
			int yCol = 3 + (85 * y);

			animated_sprite.addFrame(sf::IntRect(xCol, yCol, 84, 84));
		}
	}


	// Setup the Player
	Player player(animated_sprite);
	Input input;
	
	// Start the game loop
	while (window.isOpen())
	{
		// Process events
		sf::Event event;
		while (window.pollEvent(event))
		{
			switch (event.type)
			{
			case sf::Event::Closed:
				// Close window : exit
				window.close();
				break;
			case sf::Event::KeyPressed:
				if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
				{
					input.setCurrent(Input::Action::LEFT);
					animated_sprite.initialFrame = 12;
					animated_sprite.lastFrame = 17;
				}
				else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
				{
					input.setCurrent(Input::Action::RIGHT);
					animated_sprite.initialFrame = 6;
					animated_sprite.lastFrame = 11;
				}
				else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up))
				{
					input.setCurrent(Input::Action::UP);
					animated_sprite.initialFrame = 31;
					animated_sprite.lastFrame = 36;
				}
				// Using function keys as other keys dont work?
				else if (sf::Keyboard::isKeyPressed(sf::Keyboard::F1))
				{
					input.setCurrent(Input::Action::F1);
					animated_sprite.initialFrame = 24;
					animated_sprite.lastFrame = 29;
				}
				else if (sf::Keyboard::isKeyPressed(sf::Keyboard::F2))
				{
					input.setCurrent(Input::Action::F2);
					animated_sprite.initialFrame = 18;
					animated_sprite.lastFrame = 23;
				}
				break;
			default:
				input.setCurrent(Input::Action::IDLE);
				animated_sprite.initialFrame = 0;
				animated_sprite.lastFrame = 6;
				break;
			}
		}

		// Handle input to Player
		player.handleInput(input);

		// Update the Player
		player.update();

		// Clear screen
		window.clear();

		// Draw the Players Current Animated Sprite
		window.draw(player.getAnimatedSprite());
		
		// Update the window
		window.display();
	}

	return EXIT_SUCCESS;
};