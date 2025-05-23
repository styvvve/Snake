//
// Created by NGUELE Steve  on 22/05/2025.
//

#pragma once

#include <stack>
#include <memory>

#include "State.h"


namespace Engine {
    class StateMan {
    public:
        StateMan();
        ~StateMan();

        void Add(std::unique_ptr<State> toAdd, bool replace = false);
        void PopCurrent();
        void ProcessStateChange();
        std::unique_ptr<State>& GetCurrent();
    private:
        std::stack<std::unique_ptr<State>> m_stateStack;
        std::unique_ptr<State> m_newState;

        bool m_add;
        bool m_replace;
        bool m_remove;
    };
}

