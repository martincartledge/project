#ifndef PROJECT_STUDENT_H
#define PROJECT_STUDENT_H

#include <iostream>
#include <iomanip>
#include "degree.h"

using std::cout;
using std::endl;
using std::left;
using std::setw;
using std::string;

class Student
{

private:
    string studentID;
    string firstName;
    string lastName;
    string emailAddress;
    int age;
    enum DegreeProgram degreeProgram;
    int *numberOfDays;

public:
    int numberOfDaysCapacity = 3;
    // Parameterless - sets to default values
    Student();
    // Full constructor
    Student(string studentID, string firstName, string lastName, string emailAddress, int age, enum DegreeProgram degreeProgram, int numOfDays[], int numberOfDaysCapacity);
    // Deconstructor
    ~Student();
    // Getters
    string getStudentID();
    string getFirstName();
    string getLastName();
    string getEmailAddress();
    int getAge();
    DegreeProgram getDegreeProgram();
    int *getNumberOfDays();
    // Setters
    void setStudentID(string newStudentID);
    void setFirstName(string newFirstName);
    void setLastName(string newLastName);
    void setEmailAddress(string newEmailAddress);
    void setAge(int newAge);
    void setDegreeProgram(DegreeProgram newDegreeProgram);
    void setNumberOfDays(int *newNumberOfDays);
    // Methods
    void print();
};

#endif // PROJECT_STUDENT_H
