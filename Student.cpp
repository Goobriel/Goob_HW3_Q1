//
// Created by Gabep on 11/1/2021.
//

#include "Student.h"
#include <iostream>
#include <sstream>

using std::string;
using std::cout;
using std::ostringstream;
using std::endl;

Student::Student():Person() { //Default constructor definition
    institute = " Unknown. User does not have an institute on file"; //Default constructor will report no major
    creditHours = -1;
    defaultHours = "Unkown. User does not have any credit hours on file";
}

Student::Student(string first, string last, int year, int day, int month, string sInstitute, int cHours):Person(first, last, year, day, month){
    institute = sInstitute;
    creditHours = cHours;
}
string Student::getData() {
    return getName() + getBirthdate() + "Educational Institution: " + getInstitute() + "Credit Hours: " + dispCreditHours();
}
/*
bool uGS_or_GS(){
    if
}
*/
void Student::setInstitute(string sInstitute) {
    institute = sInstitute;
}
string Student::getInstitute() {
    return institute + "\n";
}
void Student::setCreditHours(int cHours){
    creditHours = cHours;
}
int Student::getCreditHours(){
    return creditHours;
}
string Student::dispCreditHours() {
    if(creditHours == -1){
        std::ostringstream hoursCredited;
        hoursCredited << defaultHours << "\n";
        return hoursCredited.str();
    }
    else{
        std::ostringstream hoursCredited;
        hoursCredited << creditHours << "\n";
        return hoursCredited.str();
    }
}

