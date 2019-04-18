//
// Created by User on 19.04.2019.
//

#ifndef LAB6_CAT_H
#define LAB6_CAT_H

#include "Animal_t.h"

class Cat : public Animal_t
{
private:
    std::string skin_type;
    int long_tale;
public:
    Cat();
    Cat(std::string name, std::string type, int size , std::string skin_type , int long_tale);
    void meow();
};
#endif //LAB6_CAT_H
