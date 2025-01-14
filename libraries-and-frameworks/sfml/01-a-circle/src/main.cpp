#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>
 
int main()
{
    sf::RenderWindow window(sf::VideoMode(800, 600), "SFML window");
 
    // Create a circle with radius 50.
    sf::CircleShape circle(50);
    circle.setPosition(350, 250);
    circle.setFillColor(sf::Color::Green);

    // Start the game loop.
    while (window.isOpen())
    {
        // Process events.
        sf::Event event;
        while (window.pollEvent(event))
        {
            // Close window: exit.
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();

        window.draw(circle);

        window.display();
    }
 
    return EXIT_SUCCESS;
}