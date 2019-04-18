//
// Created by User on 18.04.2019.
//

#include "Animal.h"

Animal::Animal() : Alive(){
    this->animal_k = "";
    this->type = "";
    this->size = "";
}

Animal::Animal(int age, bool isAlive, std::string type, std::string animal_k, std::string size) : Alive(age , isAlive) {
    this->size = size;
    this->type = type;
    this->animal_k = animal_k;
}

void Animal::showAnimal() {
    std :: cout << this->animal_k <<" " << this->type << " " << this->size << std::endl;
}

void Animal::changeType(std::string type) {
    this->type = type;
}

