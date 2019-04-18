//
// Created by User on 18.04.2019.
//

#include "Bird.h"

Bird::Bird():Alive() {
    this->name = "";
    this->wingspan = 0;
}

Bird::Bird(int age, bool isAlive, std::string name, int wingspan): Alive(age , isAlive) {
    this->name = name ;
    this->wingspan = wingspan;
}

void Bird::fly() {
    std::cout << "I fly" << std::endl;
}

void Bird::cutWings() {
    this->wingspan--;
}