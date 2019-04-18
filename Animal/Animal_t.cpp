//
// Created by User on 19.04.2019.
//

#include "Animal_t.h"

Animal_t::Animal_t() {
    this->size = 0;
    this->type = "";
    this->name = "";
}

Animal_t::Animal_t(std::string name, std::string type, int size) {
    this->size = size;
    this->name = name;
    this->type = type;
}

void Animal_t::move() {
    std::cout << "It moved" << std::endl;
}

void Animal_t::makeChild() {
    std::cout << "It got chile" << std::endl;
}