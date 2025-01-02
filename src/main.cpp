#include<iostream>
#include<SFML/Graphics.hpp>
#include <SFML/System/Vector2.hpp>
#include <SFML/Network.hpp>
#include "window.hpp"
#include "game.hpp"
#include "player.hpp"



int main()
{
    sf::RenderWindow* Window = createWindow();  //Utworzenie okna

    Player player1;

    /*sf::Texture pTexture;
    sf::Sprite playerImage;

    if(!pTexture.loadFromFile("assets/player.png"))
    {
        std::cout<<"Nie udało się wczytać tekstury gracza\n";
    }

    playerImage.setTexture(pTexture);   //Ustawia teksturę gracza
    */
    sf::Vector2f moveDirection;
    sf::Clock deltaClock;

    //Sprawdzenie czy okno zostało otwarte
    while(Window->isOpen())
    {

        sf::Time deltaTime = deltaClock.restart();      //Wyliczenie delty time (czas między klatkami)

        //Pętla wydarzeń
        EventLoop(Window);

        moveDirection = sf::Vector2f(0.0f, 0.0f);       //Wektor przemieszczenia 

        if(sf::Keyboard::isKeyPressed(sf::Keyboard::Return) || sf::Keyboard::isKeyPressed(sf::Keyboard::E))
        {
            std::cout<<"Wciśnięto Enter\n";
        }
        if(sf::Keyboard::isKeyPressed(sf::Keyboard::Up) || sf::Keyboard::isKeyPressed(sf::Keyboard::W))
        {
            //playerImage.move(0,-1);
            moveDirection.y -= 1;
        }
        if(sf::Keyboard::isKeyPressed(sf::Keyboard::Down) || sf::Keyboard::isKeyPressed(sf::Keyboard::S))
        {
            //playerImage.move(0,1);
            moveDirection.y += 1;
        }
        if(sf::Keyboard::isKeyPressed(sf::Keyboard::Left) || sf::Keyboard::isKeyPressed(sf::Keyboard::A))
        {
            //playerImage.move(-1,0);
            moveDirection.x -= 1;
        }
        if(sf::Keyboard::isKeyPressed(sf::Keyboard::Right) || sf::Keyboard::isKeyPressed(sf::Keyboard::D))
        {
            moveDirection.x += 1;
            //playerImage.move(1,0);
        }
        player1.Move(moveDirection,deltaTime);
        //moveDirection.x *= deltaTime.asMilliseconds();
        //moveDirection.y *= deltaTime.asMilliseconds();
        //playerImage.move(moveDirection);
        Window->clear(sf::Color::Black); //Wyczyszczenie ekraniu
        
        //playerImage.setPosition(300,100);   //Ustawia pozycję gracza
        //Window->draw(playerImage);
        player1.DrawPlayer(Window);
        Window->display();               //Wrzucenie zmian do okna
    }

    delete Window; 
    std::cout<<"Działa\n";
    return 0;
}