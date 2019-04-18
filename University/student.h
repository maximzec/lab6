//
// Created by User on 14.04.2019.
//

#ifndef LAB6_STUDENT_H
#define LAB6_STUDENT_H

#include <iostream>


class Student{
protected:
    std::string last_name;
    int age;
    int course;
    double avg_grade;
    bool isOut;
    std::string name;
public:

    Student();
    Student(std::string name , std::string last_name , int age , int course , double avg_grade , bool isOut);
    ~Student();

    const std::string &getLast_name() const;
    void setLast_name(const std::string &last_name);
    int getCourse() const;
    void setCourse(int course);
    double getAvg_grade() const;
    void setAvg_grade(double avg_grade);
    bool isIsOut() const;
    void setIsOut(bool isOut);

    void printStudent();
    void getOut();


};

#endif //LAB6_STUDENT_H
