#ifndef PLAYER_H
#define PLAYER_H

#include <SFML/Graphics.hpp>
#include <SFML/System/Vector2.hpp>
#include <iostream>

#pragma once

class Player
{
    public:
        // Konstruktor domyślny
        Player();

        // Funkcja do poruszania gracza
        void Move(sf::Vector2f moveVector, sf::Time deltaTime);

        // Funkcja do rysowania gracza na oknie
        void DrawPlayer(sf::RenderWindow* Window);

    private:
        sf::Texture playerTexture;     // Tekstura gracza
        sf::Sprite playerImage;        // Obraz gracza
        sf::Vector2f position;         // Pozycja gracza
        
        float speed;                   // Prędkość gracza
        int direction;                 // Kierunek ruchu
    };

#endif // PLAYER_HPP
