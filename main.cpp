#include <iostream>
#include <sstream>
#include "Roster.h"

int main() {
    std::cout << "Hello, World!" << std::endl;

    std::cout << "Course title: Scripting and Programming" << std::endl;

    std::cout << "Programming language: C++" << std::endl;

    std::cout << "WGU ID: " << std::endl;

    std::cout << "Name: Martin Cartledge" << std::endl;

    Roster classRoster = Roster();

    const std::string studentData[] = {"A1,John,Smith,John1989@gmail.com,20,30,35,40,SECURITY", "A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK", "A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE", "A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY", "A5,[firstname],[lastname],[emailaddress],[age], [numberofdaystocomplete3courses],SOFTWARE"};

    int studentDataLength = (sizeof(studentData) / sizeof(studentData[0]));

    for (int i = 0; i < studentDataLength; i++) {
        std::stringstream currentString(studentData[i]);

        while(currentString.good()) {
            std::string item;
            getline(currentString, item, ',');
            classRoster.classRosterArray.push_back(item);
            // classRoster.add();
        }

    };

    std::cout << "classRosterArray: " << classRoster.classRosterArray << std::endl;

    /*
     *
     *  X 1. Print out to the screen, via your application, the course title, the programming language used, your WGU student ID, and your name.
     *
     *  X 2. Create an instance of the Roster class called classRoster.
     *
     *  3. Add each student to classRoster.
     *
     *  4. Convert the following pseudo code to complete the rest of the  main() function:
     *      classRoster.printAll();
     *      classRoster.printInvalidEmails();
     *      loop through classRosterArray and for each element:
     *      classRoster.printAverageDaysInCourse(current_object's student id);
     *
     *      Note: For the current_object's student id, use an accessor (i.e., getter) for the classRosterArray to access the student id.
     *
     *      classRoster.printByDegreeProgram(SOFTWARE);
     *      classRoster.remove("A3");
     *      classRoster.printAll();
     *      classRoster.remove("A3");
     *      Expected: the above line should print a message saying such a student with this ID was not found.
     *
     *  5.Implement the destructor to release the memory that was allocated dynamically in Roster.
     */

    return 0;
}
