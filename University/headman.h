//
// Created by User on 15.04.2019.
//
#pragma once
#ifndef HEADMAN_H
#define HEADMAN_H

#include "student.h"
class Headman : public Student
{
private:
    bool hasJournal;
    int rating;
public:
    Headman();
    Headman(std::string name, std::string last_name, int age, int course, double avg_grade, bool isOut, bool hasJournal , int rating);
    void move();
    void out();


};
#endif //LAB6_HEADMAN_H
