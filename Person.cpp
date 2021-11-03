//
// Created by Gabep on 11/1/2021.
//
#include "Person.h"
#include <sstream> //including so we can use the .str() function
#include <iostream>
using namespace std;

Person::Person() //Default Constructor definition
{
    Fname = " Unknown. No name on file. Please register your name and try again."; //Default obj will report no name
    Lname = ""; //Default name of obj will report no name
    defaultBday = x + " " + y;
    birthDay = 0;//Default birthday of Person obj will be 0/0/0
    birthMonth = 0;
    birthYear = 0;
}

Person::Person(string first, string last, int day, int month, int year){ //Defining constructor with user input as data
    Fname = first; //All data in Person obj calling this constructor will be user defined
    Lname = last;
    birthDay = day;
    birthMonth = month;
    birthYear = year;
}

string Person::getName(){ //Function definition for getName
    return "Name: " + Fname + " " + Lname + " "; //Returns Fame and Lame displaying the Person obj's first and last name
}

string Person::getBirthdate(){ //Function definition for getBirthday
    if((birthMonth == 0) && (birthDay == 0) && (birthYear == 0)){
        ostringstream dBday;
        dBday << defaultBday;
        return dBday.str();
    }
    else{
        ostringstream bday; //creates ostringstream
        bday << "Date of birth: " << birthDay << "/" << birthMonth << "/" << birthYear << " "; //ostringstream obj "bday" holds
        //Person obj data birthDay/birthMonth/birthYear using << operator
        return bday.str(); //Returns and displays the content in ostringstream obj "bday"
    }
}

