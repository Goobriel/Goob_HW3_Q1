#include <iostream>
#include "Person.h"
#include "Student.h"

using namespace std;

int main()
{
    cout << "Using Person obj: " << endl;
    Person p0,p1("Tony", "Stark", 1, 21, 1950);
    cout << p1.getName() << "\n" << p1.getBirthdate() << "\n" << endl;
    cout << "Displaying contents for a new Person obj calling default constructor" << endl;
    cout << p0.getName() << "\n" << p0.getBirthdate() << "\n" << endl;
    cout << "Using Student obj: " << endl;
    Student s0,s1("Sir", "Goob", 10, 24, 2002, "Computer Science");
    cout << s1.getData();
    s1.setMajor("Cool Computer Science");
    cout << "\nMajor change. New '" << s1.getMajor() << "' //changed using setMajor(); \n" << endl;
    cout << "Displaying contents for a new Student obj calling default constructor" << endl;
    cout << s0.getData();
    return 0;
}

