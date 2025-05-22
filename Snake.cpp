#include "Snake.h"

Snake::Snake(): m_length(2) {}

Snake::~Snake() {
    this->m_length = 0;
}

int Snake::getLength() const {
    return this->m_length;
}

