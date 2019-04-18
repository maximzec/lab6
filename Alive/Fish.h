//
// Created by User on 18.04.2019.
//

#ifndef LAB6_FISH_H
#define LAB6_FISH_H

#include "Alive.h"

class Fish : public Alive
{
private:
    std::string type;
    int length;
public:
    Fish();
    Fish(int age, bool isAlive , std::string type , int length);
    void swim();
    void getBigger();
};

#endif //LAB6_FISH_H
