//
// Created by NGUELE Steve  on 22/05/2025.
//

#include "Game.h"

//pour initialiser la fenetre
void Game::initWindow() {
    width = 640; height = 360;
    title = "Snake";
    vm = sf::VideoMode( {width, height });
    win = new sf::RenderWindow(vm, title);
    win->setFramerateLimit(60);
}

void Game::pollEvents() {
    while (const std::optional event = win->pollEvent()) {
        if (event->is<sf::Event::Closed>()) {
            win->close();
        }else if (const auto *keyPressed = event->getIf<sf::Event::KeyPressed>()) {
            if (keyPressed->scancode == sf::Keyboard::Scancode::Escape) {
                win->close();
            }
        }
    }
}

void Game::rendering() {
    win->clear();

    //rechargement de la page effectue
    win->display();
}


void Game::updating() {
    //les evenements
    pollEvents();
}

//constructeur
Game::Game() {
    //on initialise la fenetre
    initWindow();
}

//destructeur
Game::~Game() {
    delete win;
}

//le fonctionnement du jeu
void Game::running() {
    while (win->isOpen()) {
        //mise a jour automatique de la fenetre
        updating();
        rendering();
    }
}




