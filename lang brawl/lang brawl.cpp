/////////////////////////////
// INCLUDES
/////////////////////////////

#include <iostream>
#include <SFML/Graphics.hpp>

int main(){
    system("dir");
    sf::RenderWindow window(sf::VideoMode(800, 600), "SFML Image");

    sf::Texture texture;

    if (!texture.loadFromFile("assets/bmp.bmp")) {
        std::cout << "fuck you bitch";
    }

    sf::Sprite sprite;

    sprite.setTexture(texture);
    sprite.setTextureRect(sf::IntRect(0,0,64,64));

    while (window.isOpen()){
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }
        window.clear();
        window.draw(sprite);
        window.display();
    }
}