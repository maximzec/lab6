//
// Created by User on 18.04.2019.
//

#ifndef LAB6_BIRD_H
#define LAB6_BIRD_H

#include "Alive.h"

class Bird : public Alive
{
    private:
        std::string name;
        int wingspan;
    public:
        Bird();
        Bird(int age, bool isAlive, std::string name , int wingspan);
        void fly();
        void cutWings();
};
#endif //LAB6_BIRD_H
