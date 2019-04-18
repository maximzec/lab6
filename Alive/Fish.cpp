//
// Created by User on 18.04.2019.
//

#include "Fish.h"

Fish::Fish() : Alive(){
    this->length = 0;
    this->type = "Unknown";
}

Fish::Fish(int age, bool isAlive, std::string type, int length) : Alive (age , isAlive) {
    this->length = length;
    this->type = type;
}

void Fish::swim() {
    std::cout << "I swim!" << std::endl;
}

void Fish::getBigger() {
    this->length++;
}
