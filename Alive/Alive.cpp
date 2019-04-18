//
// Created by User on 18.04.2019.
//

#include "Alive.h"

Alive::Alive() {
    this->age = 1;
    this->isAlive = true;
}

Alive::Alive(int age, bool isAlive) {
    this->age = age;
    this->isAlive = isAlive;
}

void Alive::move() {
    std::cout << "I moved" << std::endl;
}

void Alive::grow() {
    this->age++;
}