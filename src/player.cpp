#include "player.hpp"
#include <SFML/Graphics.hpp>
#include <SFML/System/Vector2.hpp>
#include <iostream>

Player::Player()
{
    //Pobranie tekstury z pliku
    if(!playerTexture.loadFromFile("assets/player.png"))
    {
        std::cout<<"Nie udało się wczytać tekstury gracza\n";
    }
    //Ustawienie tekstury
    playerImage.setTexture(playerTexture);   //Ustawia teksturę gracza
    //Ustawienie pozycji startowej
    position = sf::Vector2f(0,0);
    speed = 200;
}
void Player::Move(sf::Vector2f moveVector, sf::Time deltaTime)
{
    moveVector.x *= deltaTime.asSeconds() * speed;
    moveVector.y *= deltaTime.asSeconds() * speed;
    playerImage.move(moveVector);
}
void Player::DrawPlayer(sf::RenderWindow* Window)
{
    Window->draw(playerImage);
}