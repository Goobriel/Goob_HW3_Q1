//
// Created by Gabep on 11/1/2021.
//

#ifndef GOOB_HW3_Q1_PERSON_H
#define GOOB_HW3_Q1_PERSON_H
#include <string>
using std::string;
class Person
{
public:

    Person(); //default constructor
    Person(string first, string last, int year, int day, int month); //Constructor defining Person obj with user input



    string getName(); //name accessor function
    void setName();
    string getBirthdate(); //birthday accessor function
    void setBirthday();
protected:
    //I understand this is something that most likely shouldn't be done. I'm only doing this because it makes the code look neater.
    string defaultBday;
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