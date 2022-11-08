#ifndef PROJECT_ROSTER_H
#define PROJECT_ROSTER_H

#include <iostream>
#include "degree.h"
#include "student.h"

class Roster
{
public:
    int lastStudentPosition;
    int numOfStudents;
    // 1.  Create an array of pointers, classRosterArray, to hold the data provided in the “studentData Table.”
    Student **classRosterArray;

    Roster(); // Parameterless constructor

    Roster(int numOfStudents); // Constructor which passes numOfStudents

    // 2.  Create a student object for each student in the data table and populate classRosterArray.
    // a.  Parse each set of data identified in the “studentData Table.”
    // b.  Add each student object to classRosterArray.
    void parse(string row); // Responsible for parsing the input data

    // Sets the instance variables from part D1 and updates the roster
    void
    add(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, int daysInCourse4, DegreeProgram degreeProgram){};

    // Removes students from the roster by student ID. If the student ID does not exist, the function prints an error message indicating that the student was not found.
    void remove(string studentID);

    // Prints a complete tab-separated list of student data in the provided format:
    // A1 [tab] First Name: John [tab] Last Name: Smith [tab] Age: 20 [tab]daysInCourse: {35, 40, 55} Degree Program: Security.
    // printAll() should loop through all the students in classRosterArray and call the print() function for each student.
    void printAll();

    // Prints a student’s average number of days in the three courses. The student is identified by the studentID parameter.
    void printAverageDaysInCourse(string studentID);

    // Verifies student email addresses and displays all invalid email addresses to the user.
    // A valid email should include an at sign ('@') and period ('.') and should not include a space (' ').
    void printInvalidEmails();

    // Prints out student information for a degree program specified by an enumerated type.
    void printByDegreeProgram(DegreeProgram degreeProgram);

    // Returns all dynamically allocated students
    ~Roster();
};

#endif // PROJECT_ROSTER_H
