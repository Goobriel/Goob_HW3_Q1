#include <iostream>
#include "Person.h"
#include "Student.h"
#include "UnderGradStudent.h"
#include "GradStudent.h"

using namespace std;

int main()
{
    Person p0,p1("Tony", "Stark", 1, 21, 1950);
    cout << "Using Person obj: " << endl;
    cout << p1.getName() << p1.getBirthdate() << endl;
    cout << "Displaying contents for a new Person obj calling default constructor" << endl;
    cout << p0.getName() << p0.getBirthdate() << endl;

    Student s0,s1("Sir", "Goobriel", 10, 24, 2002, "University of Michigan - Flint", 20);
    cout << "Using Student obj: " << endl;
    cout << s1.getData() << endl;
    cout << "Displaying contents for a new Student obj calling default constructor" << endl;
    cout << s0.getData() << endl;

    UnderGradStudent uGS0, uGS1("Madam", "Ozzeth of Pullman", 11, 8, 2003, "Lake Michigan College - Benton Harbor", 9, 1);
    cout << "Using UnderGradStudent obj: " << endl;
    cout << uGS1.getData() << endl;
    cout << "Displaying contents for a new Student obj calling default constructor" << endl;
    cout << uGS0.getData() << endl;

    GradStudent uS0, uS1("Sireth", "Misqueleth of Pullmaneth", 02,27,2009,"University of Michigan - Ann Arbor",2, "Music/Animation");
    cout << "Using GradStudent obj: " << endl;
    cout << uS1.getData() << endl;
    cout << "Displaying contents for a new UnderGradStudent obj calling default constructor" << endl;
    cout << uS0.getData() << endl;
    return 0;
}