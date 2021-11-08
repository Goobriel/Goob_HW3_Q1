//
// Created by Gabep on 11/7/2021.
//


#include "UnderGradStudent.h"
#include <sstream>
#include <iostream>

using std::string;
using std::cout;
using std::endl;
using std::ostringstream;

UnderGradStudent::UnderGradStudent(): Student() {
    studYear = -1;
    defaultStudYear = " Unknown. User does not have 'Years attended' on file";
}
UnderGradStudent::UnderGradStudent(string first, string last, int year, int day, int month, string sInstitute,int cHours, int sYear): Student(first, last, year, day, month, sInstitute, cHours) {
    studYear = sYear;
}

int UnderGradStudent::getStudYear() {
    return studYear;
}
void UnderGradStudent::setStudYear(int sYear) {
    studYear = sYear;
}
string UnderGradStudent::dispStudYear() {
    if(studYear == -1){
        ostringstream stringStudYear;
        stringStudYear << defaultStudYear << "\n";
        return stringStudYear.str();
    }
    else{
        ostringstream stringStudYear;
        stringStudYear << studYear << "\n";
        return stringStudYear.str();
    }
}

string UnderGradStudent::getData() {
    return Student::getData() + "Years attended: " + dispStudYear();
}