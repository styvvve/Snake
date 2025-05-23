//
// Created by NGUELE Steve  on 22/05/2025.
//

#pragma once

#include <SFML/System/Time.hpp>
namespace Engine {
    class State {
    public :
        State(){};
        virtual ~State(){};

        virtual void Init() = 0;
        virtual void ProcessInput() = 0;
        virtual void Update(sf::Time deltaTime) = 0; //FPS
        virtual void Draw() = 0;

        virtual void Pause(){};
        virtual void Start(){};
    };
}


