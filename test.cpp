#include <SFML/Graphics.hpp>
#include <iostream>
using namespace std;

int main()
{
    sf::RenderWindow window(sf::VideoMode(300, 300), "SFML works!");
    sf::CircleShape circle = sf::CircleShape(100.f);
    sf::CircleShape squares[4];
    for(int ii = 0; ii < 4; ii++) {
        squares[ii] = sf::CircleShape(75.f, 4);
    }
    squares[0].setPosition(75.f,-75.f);
    squares[0].setFillColor(sf::Color(0xff, 0x00, 0x00));
    squares[0].setRotation(45.f);
    squares[1].setPosition(150.f,0.f);
    squares[1].setRotation(45.f);
    squares[1].setFillColor(sf::Color(0x00, 0xff, 0x00));
    squares[2].setPosition(150.f,150.f);
    squares[2].setRotation(45.f);
    squares[2].setFillColor(sf::Color(0x00, 0x00, 0xff));
    squares[3].setPosition(0.f,150.f);
    squares[3].setFillColor(sf::Color(0xff, 0xff, 0xff));
    squares[3].setRotation(45.f);
    circle.setFillColor(sf::Color::Green);
    int i = 0;
    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }
        circle.setPosition(50.f, 50.f);
        window.clear();

        window.draw(circle);
        for(int ii = 0; ii < 4; ii++) {
            window.draw(squares[ii]);
        }
        window.display();
        i = (i+255*255) | 255;
        circle.setFillColor(sf::Color(i));
    }
    // cout << "Hello, World!";
    return 0;
}