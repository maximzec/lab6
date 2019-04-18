//
// Created by User on 18.04.2019.
//

#ifndef LAB6_ANIMAL_H
#define LAB6_ANIMAL_H

#include "Alive.h"
class Animal : public Alive
{
private:
    std::string type;
    std::string animal_k;
    std::string size;
public:
    Animal();
    Animal(int age, bool isAlive , std::string type , std::string animal_k  ,std::string size);
    void showAnimal();
    void changeType(std::string type);
};
#endif //LAB6_ANIMAL_H
