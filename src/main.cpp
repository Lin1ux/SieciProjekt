#include<iostream>
#include <SFML/Network.hpp>
#include<SFML/Graphics.hpp>
#include "window.hpp"
#include "game.hpp"



int main()
{
    sf::RenderWindow* Window = createWindow();  //Utworzenie okna

    sf::Texture pTexture;
    sf::Sprite playerImage;

    if(!pTexture.loadFromFile("assets/player.png"))
    {
        std::cout<<"Nie udało się wczytać tekstury gracza\n";
    }

    playerImage.setTexture(pTexture);   //Ustawia teksturę gracza

    //Sprawdzenie czy okno zostało otwarte
    while(Window->isOpen())
    {
        //Pętla gry
        GameLoop(Window);
        Window->clear(sf::Color::Black); //Wyczyszczenie ekraniu
        
        playerImage.setPosition(300,100);   //Ustawia pozycję gracza
        Window->draw(playerImage);
        Window->display();               //Wrzucenie zmian do okna
    }

    delete Window; 
    std::cout<<"Działa\n";
    return 0;
}