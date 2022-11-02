#include "Roster.h"
#include <iostream>
#include <string>

void Roster::parse(string studentData)
{
    // Assign degree program
    DegreeProgram dp = DegreeProgram::NETWORK;
    // Create an array, contains 8 items
    string parsed[8];

    int right = 0;
    int left = 0;

    for (int i = 0; i < 8; i++)
    {
        // Find returns int with position of comma
        right = studentData.find(",", left);
        parsed[i] = studentData.substr(left, right - left);
        left = right + 1;
    }

    add(stoi(parsed[0]), parsed[1], parsed[2], parsed[3], stoi(parsed[4]), stoi(parsed[5]), stoi(parsed[6]), stoi(parsed[7]), dp);
}

void Roster::add(int studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, DegreeProgram degreeProgram)
{
    int rosterArray[3] = {daysInCourse1, daysInCourse2, daysInCourse3};

    classRosterArray[++lastIndex] = new Student(studentID, firstName, lastName, emailAddress, age, degreeProgram, rosterArray);
    // lastIndex references the last student to be added to the roster
    cout << "Student added to class roster at: " << lastIndex + 1 << endl;
}

void Roster::printAll()
{
    for (int i = 0; i <= Roster::lastIndex; i++)
        Roster::classRosterArray[i]->print();
}

void Roster::printByDegreeProgram(DegreeProgram dp)
{
    for (int i = 0; i <= Roster::lastIndex; i++)
        if (Roster::classRosterArray[i]->getDegreeProgram() == dp)
            classRosterArray[i]->print();
}

void Roster::printInvalidEmails()
{
    for (int i = 0; i <= Roster::lastIndex; i++)
    {
        string email = Roster::getStudents()[i]->getEmailAddress();
        if (email.find(' ') != string::npos && email.find('.') == string::npos && email.find('@') == string::npos)
            cout << email << " is invalid!" << endl;
    }
}

void Roster::printAverageDaysInCourse(int studentID)
{
    for (int i = 0; i <= Roster::lastIndex; i++)
    {
        if (classRosterArray[i]->getStudentID() == studentID)
        {
            cout << studentID << ':';
            cout << (classRosterArray[i]->getNumberOfDays()[0] + classRosterArray[i]->getNumberOfDays()[1] + classRosterArray[i]->getNumberOfDays()[2]) / 3.0 << endl;
        }
    }
}

void Roster::remove(int studentID)
{
    bool success = false;
    for (int i = 0; i <= Roster::lastIndex; i++)
    {
        if (classRosterArray[i]->getStudentID() == studentID)
        {
            success = true;
            // Swap student with the last one
            Student *temp = classRosterArray[i];

            classRosterArray[i] = classRosterArray[numStudents - 1];

            classRosterArray[numStudents - 1] = temp;

            Roster::lastIndex--;
        }
    }
}