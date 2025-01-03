#include "map.hpp"
#include <SFML/Graphics.hpp>
#include <SFML/System/Vector2.hpp>
#include <wall.hpp>
#include <iostream>
#include <string>

GameMap::GameMap() : numberOfTiles(16), tiles(sf::Quads, 16 * 16 * 4)
{
    // Wczytanie tekstury
    if (!tileTexture.loadFromFile("assets/grass.png"))
    {
        std::cout << "Nie udało się wczytać tekstury trawy\n";
        return;
    }

    // Rozmiar kafla
    int tileSize = 32;

    for (int i = 0; i < numberOfTiles; i++)
    {
        for (int j = 0; j < numberOfTiles; j++)
        {
            // Indeks kafla w tablicy wierzchołków
            int index = (i * numberOfTiles + j) * 4;

            // Lewy górny wierzchołek
            tiles[index].position = sf::Vector2f(i * tileSize, j * tileSize);
            tiles[index].texCoords = sf::Vector2f(0, 0); // Początek tekstury

            // Prawy górny wierzchołek
            tiles[index + 1].position = sf::Vector2f((i + 1) * tileSize, j * tileSize);
            tiles[index + 1].texCoords = sf::Vector2f(tileSize, 0); // Koniec tekstury na osi X

            // Prawy dolny wierzchołek
            tiles[index + 2].position = sf::Vector2f((i + 1) * tileSize, (j + 1) * tileSize);
            tiles[index + 2].texCoords = sf::Vector2f(tileSize, tileSize); // Koniec tekstury na osi Y

            // Lewy dolny wierzchołek
            tiles[index + 3].position = sf::Vector2f(i * tileSize, (j + 1) * tileSize);
            tiles[index + 3].texCoords = sf::Vector2f(0, tileSize); // Początek tekstury na osi Y
        }
    }

}

GameMap::GameMap(int tilesNumber) : numberOfTiles(tilesNumber), tiles(sf::Quads, tilesNumber * tilesNumber * 4)
{
    // Wczytanie tekstury
    if (!tileTexture.loadFromFile("assets/grass.png"))
    {
        std::cout << "Nie udało się wczytać tekstury trawy\n";
        return;
    }

    // Rozmiar kafla
    int tileSize = 32;

    for (int i = 0; i < numberOfTiles; i++)
    {
        for (int j = 0; j < numberOfTiles; j++)
        {
            // Indeks kafla w tablicy wierzchołków
            int index = (i * numberOfTiles + j) * 4;

            // Lewy górny wierzchołek
            tiles[index].position = sf::Vector2f(i * tileSize, j * tileSize);
            tiles[index].texCoords = sf::Vector2f(0, 0); // Początek tekstury

            // Prawy górny wierzchołek
            tiles[index + 1].position = sf::Vector2f((i + 1) * tileSize, j * tileSize);
            tiles[index + 1].texCoords = sf::Vector2f(tileSize, 0); // Koniec tekstury na osi X

            // Prawy dolny wierzchołek
            tiles[index + 2].position = sf::Vector2f((i + 1) * tileSize, (j + 1) * tileSize);
            tiles[index + 2].texCoords = sf::Vector2f(tileSize, tileSize); // Koniec tekstury na osi Y

            // Lewy dolny wierzchołek
            tiles[index + 3].position = sf::Vector2f(i * tileSize, (j + 1) * tileSize);
            tiles[index + 3].texCoords = sf::Vector2f(0, tileSize); // Początek tekstury na osi Y
        }
    }

}

void GameMap::AddWall(Wall newWall)
{
    walls.push_back(newWall);
}

bool GameMap::isPlayerColliding(Player player)
{
    for (Wall wall : walls) 
    {
        if(wall.IsColliding(player.GetCollider()))
        {
            return true;
        }
    }
    return false;
}

void GameMap::DrawWalls(sf::RenderWindow* window)
{
    for (Wall wall : walls) 
    {
        wall.Draw(window);
    }
}

void GameMap::DrawMap(sf::RenderWindow* window)
{
    sf::RenderStates states;
    states.texture = &tileTexture;
    window->draw(tiles, states);
}