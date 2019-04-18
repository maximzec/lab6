//
// Created by User on 19.04.2019.
//

#include "Dog.h"

Dog::Dog() : Animal_t(){
    this->color = "";
    this->long_tale = 0;
}

Dog::Dog(std::string name, std::string type, int size, int long_tale, std::string color)
    : Animal_t(name , type , size){
    this->long_tale = long_tale;
    this->color = color;
}

void Dog::bark() {
    std::cout << "BARK!!!" << std::endl;
}
