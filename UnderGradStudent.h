//
// Created by Gabep on 11/2/2021.
//

#ifndef GOOB_HW3_Q1_UNDERGRADSTUDENT_H
#define GOOB_HW3_Q1_UNDERGRADSTUDENT_H
#include "Student.h"
#include "Person.h"

class UnderGradStudent:Student {
public:
    UnderGradStudent(); // default constructor
    UnderGradStudent(string first, string last, int year, int day, int month, string major, string primLang); // constructor with user input

    void setPrimLang(string Language); // primaryLanguage mutator function
    string getPrimLang(); // primaryLanguage accessor function
private:
    string primaryLanaguage; // primary coding language
};


#endif //GOOB_HW3_Q1_UNDERGRADSTUDENT_H
