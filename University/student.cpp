//
// Created by User on 14.04.2019.
//
#include "student.h"

Student::Student() {
    this->name = "";
    this->last_name = "";
    this->age = 18;
    this->course = 1;
    this->avg_grade = 0;
    this->isOut = false;
}

Student::Student(std::string name, std::string last_name, int age, int course, double avg_grade, bool isOut) {
    this->name = name;
    this->last_name = last_name;
    this->age = age;
    this->avg_grade = avg_grade;
    this->course = course;
    this->isOut = false;
}

Student::~Student() = default;

const std::string &Student::getLast_name() const {
    return last_name;
}

void Student::setLast_name(const std::string &last_name) {
    Student::last_name = last_name;
}

int Student::getCourse() const {
    return course;
}

void Student::setCourse(int course) {
    Student::course = course;
}

double Student::getAvg_grade() const {
    return avg_grade;
}

void Student::setAvg_grade(double avg_grade) {
    Student::avg_grade = avg_grade;
}

bool Student::isIsOut() const {
    return isOut;
}

void Student::setIsOut(bool isOut) {
    Student::isOut = isOut;
}

void Student::printStudent() {
    std::cout << "Name - " << this->name << std::endl;
    std::cout << "Last Name - " << this->last_name<<std::endl;
    std::cout << "Age - " << this->age<<std::endl;
    std::cout << "Average grad - " << this->avg_grade<<std::endl;
    if(!this->isOut) std::cout<<"On " << this->course << " course" << std::endl;
    else std::cout << "Fired"<<std::endl ;
}
