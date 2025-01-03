#ifndef MAP_H
#define MAP_H

#include <SFML/Graphics.hpp>
#include <SFML/System/Vector2.hpp>
#include <iostream>
#include <string>
#include <vector>
#include <wall.hpp>
#include <player.hpp>

class GameMap
{
    public:
        GameMap();
        GameMap(int tilesNumber);
        void AddWall(Wall newWall);
        bool isPlayerColliding(Player player);
        void DrawWalls(sf::RenderWindow* window);
        void DrawMap(sf::RenderWindow* window);

    private:
        sf::Texture tileTexture;
        sf::Sprite tile;
        sf::VertexArray tiles;
        int numberOfTiles;
        std::vector<Wall> walls;
};
#endif
