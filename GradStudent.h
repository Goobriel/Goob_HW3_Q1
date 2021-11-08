//
// Created by Gabep on 11/2/2021.
//

#ifndef GOOB_HW3_Q1_UNDERGRADSTUDENT_H
#define GOOB_HW3_Q1_UNDERGRADSTUDENT_H
#include "Student.h"
#include "Person.h"

class GradStudent:Student {
public:
    GradStudent(); // default constructor
    GradStudent(string first, string last, int year, int day, int month, string sInstitute, int cHours, string sMajor); // constructor with user input

    void setMajor(string sMajor); //major mutator function
    string getMajor(); //major accessor function
    string getData();

//    void setPrimLang(string Language); // primaryLanguage mutator function
//    string getPrimLang(); // primaryLanguage accessor function
private:
    string major;

//    string primaryLanaguage; // primary coding language
};


#endif //GOOB_HW3_Q1_UNDERGRADSTUDENT_H
