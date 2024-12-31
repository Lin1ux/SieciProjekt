#include "game.hpp"
#include <SFML/Graphics.hpp>
#include <iostream>

//Tworzy i zwraca okno gry
int GameLoop(sf::RenderWindow* Window)
{
    sf::Event Event;
    while(Window->pollEvent(Event))
    {
        //Zamknięcie okna
        if(Event.type == sf::Event::Closed)
        {
            Window->close();
        }

        if(Event.type == sf::Event::KeyPressed)
        {
            if(Event.key.code == sf::Keyboard::Return || Event.key.code == sf::Keyboard::E)
            {
                std::cout<<"Wciśnięto Enter\n";
            }
            if(Event.key.code == sf::Keyboard::Up || Event.key.code == sf::Keyboard::W)
            {
                std::cout<<"Wciśnięto góra\n";
            }
            if(Event.key.code == sf::Keyboard::Down || Event.key.code == sf::Keyboard::S)
            {
                std::cout<<"Wciśnięto dół\n";
            }
            if(Event.key.code == sf::Keyboard::Left || Event.key.code == sf::Keyboard::A)
            {
                std::cout<<"Wciśnięto Lewy\n";
            }
            if(Event.key.code == sf::Keyboard::Right || Event.key.code == sf::Keyboard::D)
            {
                std::cout<<"Wciśnięto Prawy\n";
            }
        }
    }
    return 0;
}