#include <iostream>
#include <vector>

// Created by Martin Cartledge on 10/9/22.

#ifndef PROJECT_ROSTER_H
#define PROJECT_ROSTER_H

#include "degree.h"
#include "Student.h"

class Roster {
public:
    // 1.  Create an array of pointers, classRosterArray, to hold the data provided in the “studentData Table.”
    std::vector<const Student*> classRosterArray;
    // 2.  Create a student object for each student in the data table and populate classRosterArray.
    // a.  Parse each set of data identified in the “studentData Table.”
    // b.  Add each student object to classRosterArray.

    // Sets the instance variables from part D1 and updates the roster
    void add(char studentID, char firstName, char lastName, char emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, DegreeProgram degreeProgram) {}

    // Removes students from the roster by student ID. If the student ID does not exist, the function prints an error message indicating that the student was not found.
    void remove(char studentID) {}

    // Prints a complete tab-separated list of student data in the provided format:
    // A1 [tab] First Name: John [tab] Last Name: Smith [tab] Age: 20 [tab]daysInCourse: {35, 40, 55} Degree Program: Security.
    // printAll() should loop through all the students in classRosterArray and call the print() function for each student.
    void printAll() {}

    // Prints a student’s average number of days in the three courses. The student is identified by the studentID parameter.
    void printAverageDaysInCourse(char studentID) {}

    // Verifies student email addresses and displays all invalid email addresses to the user.
    // A valid email should include an at sign ('@') and period ('.') and should not include a space (' ').
    void printInvalidEmails() {}

    // Prints out student information for a degree program specified by an enumerated type.
    void printByDegreeProgram(DegreeProgram degreeProgram) {}
};


#endif //PROJECT_ROSTER_H
