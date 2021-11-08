//
// Created by Gabep on 11/7/2021.
//

#ifndef GOOB_HW3_Q1_V1_0_2_UNDERGRADSTUDENT_H
#define GOOB_HW3_Q1_V1_0_2_UNDERGRADSTUDENT_H
#include <iostream>
#include "Student.h"
using std::string;

class UnderGradStudent: public Student {
public:
    UnderGradStudent(); // default constructor
    UnderGradStudent(string first, string last, int year, int day, int month, string sInstitute, int cHours, int studYear); // constructor with user input

    void setStudYear(int sYear); //major mutator function
    int getStudYear(); //major accessor function
    string dispStudYear();
    string getData();
private:
    int studYear;
    string defaultStudYear;
};


#endif //GOOB_HW3_Q1_V1_0_2_UNDERGRADSTUDENT_H
