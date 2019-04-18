//
// Created by User on 15.04.2019.
//
#include "headman.h"

Headman::Headman(std::string name, std::string last_name, int age, int course, double avg_grade, bool isOut,bool hasJournal, int rating)
    :Student(name , last_name , age , course , avg_grade , isOut) {
    this->hasJournal = hasJournal;
    this->rating = rating ;

}

void Headman::move() {
    std::cout << "I have come" << std::endl;
}

void Headman::out() {
    std::cout << "I went out" << std::endl;
}
