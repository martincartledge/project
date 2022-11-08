#include <iostream>
#include "roster.h"

int main()
{
    // 1. Print out to the screen, via your application, the course title, the programming language used, your WGU student ID, and your name.
    std::cout << "Course title: Scripting and Programming" << std::endl;
    std::cout << "Programming language: C++" << std::endl;
    std::cout << "WGU ID: " << std::endl;
    std::cout << "Name: Martin Cartledge" << std::endl;

    const std::string studentData[] = {"A1,John,Smith,John1989@gmail.com,20,30,35,40,SECURITY", "A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK", "A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE", "A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY", "A5,Martin,Cartledge,martin@hey.com,32,10,15,20,25,SOFTWARE"};

    // Arrays should be declared as a constant
    const int numOfStudents = 5;

    // 2. Create an instance of the Roster class called classRoster.
    Roster* classRoster = new Roster(numOfStudents);

    // 3. Add each student to classRoster.
    for (int i = 0; i < numOfStudents; i++)
    {
        classRoster->add(studentData[i]);
    }
    //  4. Convert the following pseudo code to complete the rest of the  main() function:
    //      X classRoster.printAll();
    //      X classRoster.printInvalidEmails();
    //
    //      loop through classRosterArray and for each element:
    //      X classRoster.printAverageDaysInCourse(current_object's student id);
    //
    //      X classRoster.printByDegreeProgram(SOFTWARE);
    //      X classRoster.remove("A3");
    //      X classRoster.printAll();
    //      X classRoster.remove("A3");
    //      X Print students by their degreeType
    classRoster.printAll();
    classRoster.printInvalidEmails();

    cout << "Average days in a course: " << endl;
    for (int i = 0; i < classRoster.numOfStudents; i++)
        classRoster.printAverageDaysInCourse(classRoster.classRosterArray[i]->getStudentID());

    classRoster.printByDegreeProgram(DegreeProgram::SOFTWARE);

    classRoster.remove("A3");
    classRoster.printAll();
    classRoster.remove("A3");

    for (int i = 0; i < 3; i++)
    {
        cout << "Students by Degree Type: " << degreeProgramTypes[i] << endl;
        // Casting i (integer) to DegreeProgram
        // If it was not cast, DegreeProgram returns /displays an int value, NOT the string value
        classRoster.printByDegreeProgram((DegreeProgram)i);
    }

    /*
     *  5.Implement the destructor to release the memory that was allocated dynamically in Roster.
     */
    return 0;
}
