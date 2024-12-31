#include<iostream>
#include <SFML/Network.hpp>
#include<SFML/Graphics.hpp>
#include "window.hpp"
#include "game.hpp"



int main()
{
    sf::RenderWindow* Window = createWindow();

    while(Window->isOpen())
    {
        GameLoop(Window);
        Window->clear(sf::Color::Black); //Wyczyszczenie ekraniu
        Window->display();               //Wrzucenie zmian do okna
    }

    delete Window; 
    std::cout<<"Działa\n";
    return 0;
}