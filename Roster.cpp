#include "roster.h"
#include <iostream>
#include <string>
// Parse input data
void Roster::parse(string studentData)
{
    // Assign degree program
    DegreeProgram dp = DegreeProgram::NETWORK;
    // Create an array, contains 9 items
    string parsed[9];

    int right = 0;
    int left = 0;

    for (int i = 0; i < 9; i++)
    {
        // Find returns int with position of comma
        right = studentData.find(",", left);
        parsed[i] = studentData.substr(left, right - left);
        left = right + 1;
    }

    add((parsed[0]), parsed[1], parsed[2], parsed[3], stoi(parsed[4]), stoi(parsed[5]), stoi(parsed[6]), stoi(parsed[7]), stoi(parsed[8]), dp);
}
// Add student to the roster
void Roster::add(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, int daysInCourse4, DegreeProgram degreeProgram)
{
    int rosterArray[4] = {daysInCourse1, daysInCourse2, daysInCourse3, daysInCourse4};

    classRosterArray[++lastIndex] = new Student(studentID, firstName, lastName, emailAddress, age, degreeProgram, rosterArray);
    // lastIndex references the last student to be added to the roster
    cout << "Student added to class roster at: " << lastIndex + 1 << endl;
}
// Print all students in roster
void Roster::printAll()
{
    for (int i = 0; i <= Roster::lastIndex; i++)
        Roster::classRosterArray[i]->print();
} // Print by degree program
void Roster::printByDegreeProgram(DegreeProgram dp)
{
    for (int i = 0; i <= Roster::lastIndex; i++)
        if (Roster::classRosterArray[i]->getDegreeProgram() == dp)
            classRosterArray[i]->print();
}
// Print invalid emails
void Roster::printInvalidEmails()
{
    for (int i = 0; i <= Roster::lastIndex; i++)
    {
        string email = Roster::getStudents()[i]->getEmailAddress();
        if (email.find(' ') != string::npos && email.find('.') == string::npos && email.find('@') == string::npos)
            cout << email << " is invalid!" << endl;
    }
}
// Print average days in course
void Roster::printAverageDaysInCourse(string studentID)
{
    for (int i = 0; i <= Roster::lastIndex; i++)
    {
        if (classRosterArray[i]->getStudentID() == studentID)
        {
            cout << studentID << ':';
            cout << (classRosterArray[i]->getNumberOfDays()[0] + classRosterArray[i]->getNumberOfDays()[1] + classRosterArray[i]->getNumberOfDays()[2] + classRosterArray[i]->getNumberOfDays()[3]) / 3.0 << endl;
        }
    }
}
// Remove student
void Roster::remove(string studentID)
{
    // Assume did not find student
    bool success = false;
    for (int i = 0; i <= Roster::lastIndex; i++)
    {
        // Find student to remove
        if (classRosterArray[i]->getStudentID() == studentID)
        {
            // Found a matching ID, removal is possible
            success = true;
            // Swap student with the last one
            Student *temp = classRosterArray[i];
            //
            classRosterArray[i] = classRosterArray[numStudents - 1];
            classRosterArray[numStudents - 1] = temp;
            // Decrement lastIndex so that the removed student does not show again
            Roster::lastIndex--;
        }
    }
    if (success)
    {
        cout << "Student " << studentID << " removed" << endl;
        printAll();
    }
    else
        cout << "Student " << studentID << " not found" << endl;
}
// Deconstructor
Roster::~Roster()
{
    for (int i = 0; i < numStudents; i++)
    {
        cout << "Destructor called for " << classRosterArray[i]->getStudentID() << endl;
        delete classRosterArray[i];
        // Set to null after deletion
        classRosterArray[i] = nullptr;
    }
}