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
    Student(string first, string last, int year, int day, int month, string sInstitute, int cHours); //Constructor defining student obj with user input
    string getData();
    bool uGS_or_GS();
    void setInstitute(string sInstitute);
    string getInstitute();

    void setCreditHours(int cHours); //creditHours mutator function
    int getCreditHours(); //creditHours accessor function
    string dispCreditHours();

protected:
    string defaultHours;
private:
    string institute;
    int creditHours;
};


#endif //GOOB_HW3_Q1_STUDENT_H
