#include "player.hpp"
#include <SFML/Graphics.hpp>
#include <SFML/System/Vector2.hpp>
#include <iostream>
#include <string>

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
    collider = BoxCollision(position,sf::Vector2f(32.0f,32.0f));
    ResetStats();
}
void Player::Move(sf::Vector2f moveVector, sf::Time deltaTime)
{
    moveVector.x *= deltaTime.asSeconds() * speed;
    moveVector.y *= deltaTime.asSeconds() * speed;
    playerImage.move(moveVector);
    collider.UpdateCollision(GetPosition());
}
void Player::DrawPlayer(sf::RenderWindow* Window)
{
    Window->draw(playerImage);
}

void Player::SetName(std::string newName)
{
    playerName = newName;
}

void Player::SetId(int id)
{
    playerId = id;
}

void Player::ResetStats()
{
    kills = 0;                    
    deaths = 0;                    
    rockDestroyed = 0;             
}
//Ustawia pozycję gracza
void Player::SetPosition(sf::Vector2f newPosition)
{
    playerImage.setPosition(newPosition);   
}

void Player::Respawn(sf::Vector2f newPosition)
{
    SetPosition(newPosition);
    deaths+=1;
}

bool Player::IsColliding(BoxCollision objectCollider)
{
    if(collider.IsColliding(objectCollider))
    {
        std::cout<<"Kolizja\n";
    }
    return collider.IsColliding(objectCollider);
}

BoxCollision Player::GetCollider()
{
    return collider;
}

sf::Vector2f Player::GetPosition()
{
    return playerImage.getPosition();
}

int Player::GetKills()
{
    return kills;
}

int Player::GetDeaths()
{
    return deaths;
}

int Player::GetRocksDestroyed()
{
    return rockDestroyed;
}