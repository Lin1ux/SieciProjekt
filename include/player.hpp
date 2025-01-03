#ifndef PLAYER_H
#define PLAYER_H

#include <SFML/Graphics.hpp>
#include <SFML/System/Vector2.hpp>
#include <iostream>
#include <string>
#include "boxCollision.hpp"

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

        void SetName(std::string newName);

        void SetId(int id);

        void ResetStats();

        void SetPosition(sf::Vector2f newPosition);

        void Respawn(sf::Vector2f newPosition);

        bool IsColliding(BoxCollision objectCollider);

        BoxCollision GetCollider();

        sf::Vector2f GetPosition();

        int GetKills();

        int GetDeaths();

        int GetRocksDestroyed();


    private:
        sf::Texture playerTexture;     // Tekstura gracza
        sf::Sprite playerImage;        // Obraz gracza
        sf::Vector2f position;         // Pozycja gracza

        BoxCollision collider;         // Hitbox gracza
        
        float speed;                   // Prędkość gracza
        int direction;                 // Kierunek ruchu

        std::string playerName;                // Nazwa gracza
        int playerId;                  // id gracza
        int kills;                     // Ile punktów (zabójstw) ma gracz
        int deaths;                    // How many times player was killed
        int rockDestroyed;             // Ile kamieni gracz zniszczył
    };

#endif // PLAYER_HPP
