#include <iostream>
#include "University/student.h"
#include "University/headman.h"
#include "Animal/Cat.h"
int main() {

    Headman headman = Headman("Alex" , "Fishman" , 18 , 1 , 3.25 , false , true , 5);
    headman.out();
    return 0;
}