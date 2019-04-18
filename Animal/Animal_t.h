//
// Created by User on 19.04.2019.
//

#ifndef LAB6_ANIMAL_H
#define LAB6_ANIMAL_H

#include <iostream>

class Animal_t
{
protected:
    std::string name;
    std::string type;
    int size;
public:
    Animal_t();
    Animal_t(std::string name , std::string type , int size);
    void move();
    void makeChild();
};

#endif //LAB6_ANIMAL_H
