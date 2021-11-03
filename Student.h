//
// Created by Gabep on 11/1/2021.
//

#ifndef GOOB_HW3_Q1_STUDENT_H
#define GOOB_HW3_Q1_STUDENT_H
#include "Person.h"
using std::string;

//Creating child of call Person
class Student:public Person {
public:
    Student(); //Default constructor
    Student(string first, string last, int year, int day, int month, string sMajor); //Constructor defining student obj with user input

    //bool uGS_or_GS();
    void setCreditHours(int cHours); //cHours mutator function
    int getCreditHours(); //cHours accessor function

    void setMajor(string sMajor); //sMajor mutator function
    string getMajor(); //sMajor accessor function
    string getData(); //


private:
    string major;
    int creditHours;
};


#endif //GOOB_HW3_Q1_STUDENT_H
