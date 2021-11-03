//
// Created by Gabep on 11/1/2021.
//

#include "Student.h"
#include <iostream>

using std::string;
using std::cout;
using std::cin;

Student::Student():Person() { //Default constructor definition
    major = " Unknown. User does not have a major on file"; //Default constructor will report no major
}

Student::Student(string first, string last, int year, int day, int month, string sMajor):Person(first, last, year, day, month){
    major = sMajor;
}
/*
bool uGS_or_GS(){
    if
}
*/
void Student::setCreditHours(int cHours){
    creditHours = cHours;
}
int Student::getCreditHours(){
    return creditHours;
}

void Student::setMajor(string sMajor) {
    major = sMajor;
}

string Student::getMajor() {
    return "Major: " + major;
}

string Student::getData() {
    return getName() + "\n" + getBirthdate() + " \n" + getMajor() + "\n";
}