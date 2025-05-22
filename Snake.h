//
// Created by NGUELE Steve  on 16/05/2025.
//

#ifndef SNAKE_H
#define SNAKE_H



class Snake {
public:
    Snake(); //constructeur

    ~Snake(); //destructeur

    void move(); //la logique pour bouger

    int getLength() const;



private:
    int m_length;
};




#endif //SNAKE_H
