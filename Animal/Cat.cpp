//
// Created by User on 19.04.2019.
//

#include "Cat.h"

Cat::Cat() : Animal_t() {
    this->long_tale = 0;
    this->skin_type = "";
}

Cat::Cat(std::string name, std::string type, int size, std::string skin_type, int long_tale)
    :Animal_t(name , type , size){
    this->skin_type = skin_type;
    this->long_tale = long_tale;
}

void Cat::meow() {
    std::cout << "MEOW!!!" << std::endl;
}
