//
// Created by NGUELE Steve  on 22/05/2025.
//

#pragma once

#include <SFML/Graphics.hpp>
#include <string.h>



class Game {
public:
    Game();
    ~Game();

    void running();
private:
    unsigned int width, height;
    std::string title;
    sf::VideoMode vm;
    sf::RenderWindow *win;

    void initWindow();

    void updating();

    void pollEvents();

    void rendering();
};


