#include <iostream>
#include <SFML/Graphics.hpp>

int main() {
    sf::RenderWindow window(sf::VideoMode(900, 600), "Lang Brawl");

    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) { 
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();
        window.display();
    }
}