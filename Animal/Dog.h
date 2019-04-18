//
// Created by User on 19.04.2019.
//

#ifndef LAB6_DOG_H
#define LAB6_DOG_H

#include "Animal_t.h"

class Dog : public Animal_t
{
private:
    int long_tale;
    std::string color;
public:
    Dog();
    Dog(std::string name, std::string type, int size,int long_tale , std::string color);
    void bark();
};
#endif //LAB6_DOG_H
