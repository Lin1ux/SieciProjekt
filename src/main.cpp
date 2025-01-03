#include<iostream>
#include<SFML/Graphics.hpp>
#include <SFML/System/Vector2.hpp>
#include <SFML/Network.hpp>
#include "window.hpp"
#include "game.hpp"
#include "player.hpp"
#include "map.hpp"
#include "wall.hpp"



int main()
{
    sf::RenderWindow* Window = createWindow();  //Utworzenie okna

    GameMap GameMap(32);

    GameMap.AddWall(Wall(sf::Vector2i(10,10)));
    
    Player player1;

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
        //Window->clear(sf::Color::Black); //Wyczyszczenie ekraniu
        
        GameMap.DrawMap(Window);
        GameMap.DrawWalls(Window);
        if(GameMap.isPlayerColliding(player1))
        {
            std::cout<<"kolizja\n";
        }
        player1.DrawPlayer(Window);
        Window->display();               //Wrzucenie zmian do okna
    }

    delete Window; 
    std::cout<<"Koniec\n";
    return 0;
}