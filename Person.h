//
// Created by Gabep on 11/1/2021.
//

#ifndef GOOB_HW3_Q1_PERSON_H
#define GOOB_HW3_Q1_PERSON_H
#include <string>

class Person
{
public:
    Person(); //default constructor
    Person(std::string first, std::string last, int year, int day, int month); //Constructor defining Person obj with user input
    std::string getName(); //name accessor function
    std::string getBirthdate(); //name accessor function

protected:
    //I understand this is something that most likely shouldn't be done. I'm only doing this because it makes the code look neater.
    std::string x = "Birthday:  Unknown. User does not have a birthday on file. \nPlease register your birth-month, your birth-day, and birth-year.";
    std::string y = "\nOnce all three components of 'Birthday' have been registered try again for different results.";
    std::string defaultBday;
    /*You may move private members to protected if needed*/

private:
    //Data members
    std::string Fname; //string for first name
    std::string Lname; //string for last name
    int birthDay; //int for day of birth
    int birthMonth; //int for month of birth
    int birthYear; //int for year of birth

};


#endif //GOOB_HW3_Q1_PERSON_H
