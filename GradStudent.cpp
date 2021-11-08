//
// Created by Gabep on 11/2/2021.
//
#include "GradStudent.h"
#include <iostream>

using std::cin;
using std::cout;
using std::string;

GradStudent::GradStudent():Student() {
    major = " Unknown. User does not have a mjor on file.\n" ;
}

GradStudent::GradStudent(string first, string last, int year, int day, int month, string sInstitute, int cHours, string sMajor): Student(first, last, year, day, month, sInstitute, cHours) {
    major = sMajor;
}

void GradStudent::setMajor(string sMajor) {
    major = sMajor;
}

string GradStudent::getMajor() {
    return "Major: " + major + "\n";
}

string GradStudent::getData() {
    return Student::getData() + getMajor();
}
//UnderGradStudent::UnderGradStudent():Student() {
//    primaryLanaguage = "No primaray programming language indicated \n";
//}
//
//UnderGradStudent::UnderGradStudent(string first, string last, int year, int day, int month, string major, string primLang): Student(first, last, year, day, month, primLang){
//    primaryLanaguage = primLang;
//}
