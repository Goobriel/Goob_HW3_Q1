//
// Created by Gabep on 11/2/2021.
//

#include "UnderGradStudent.h"
#include "Student.h"
#include "Person.h"
#include <iostream>

using std::cin;
using std::cout;
using std::string;

UnderGradStudent::UnderGradStudent():Student() {
    primaryLanaguage = "No primaray programming language indicated \n";
}

UnderGradStudent::UnderGradStudent(string first, string last, int year, int day, int month, string major, string primLang): Student(first, last, year, day, month, primLang){
    primaryLanaguage = primLang;
}