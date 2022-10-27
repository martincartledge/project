//
// Created by Martin Cartledge on 10/9/22.
//

#ifndef PROJECT_STUDENT_H
#define PROJECT_STUDENT_H

#include "degree.h"

using std::cout;
using std::endl;
using std::left;
using std::string;
// using std::setw;

class Student
{

private:
    int studentID;
    string firstName;
    string lastName;
    string emailAddress;
    int age;
    enum DegreeProgram degreeProgram;
    int *numberOfDays;

public:
    Student();

    Student(int studentID, string firstName, string lastName, string emailAddress, int age, enum DegreeProgram degreeProgram, int *numberOfDays);

    ~Student();

    // Getters
    int getStudentID();
    string getFirstName();
    string getLastName();
    string getEmailAddres();
    int getAge();
    DegreeProgram getDegreeProgram();
    int *getNumberOfDays();

    // Setters
    void setStudentID(int newStudentID);
    void setFirstName(string newFirstName);
    void setLastName(string newLastName);
    void setEmailAddress(string newEmailAddress);
    void setAge(int newAge);
    void setDegreeProgram(DegreeProgram newDegreeProgram);
    void setNumberOfDays(int *newNumberOfDays);

    // TODO:  move these out of header file and into cpp file

    // int getStudentId()
    // {
    //     return studentID;
    // };
    // void setStudentId(int newStudentID)
    // {
    //     studentID = newStudentID;
    // };

    // string getFirstName()
    // {
    //     return firstName;
    // };
    // void setFirstName(string newFirstName)
    // {
    //     firstName = newFirstName;
    // };

    // string getLastName()
    // {
    //     return lastName;
    // };
    // void setLastName(string newLastName)
    // {
    //     lastName = newLastName;
    // };

    // string getEmailAddress()
    // {
    //     return emailAddress;
    // };
    // void setEmailAddress(string newEmailAddress)
    // {
    //     emailAddress = newEmailAddress;
    // };

    // int getAge()
    // {
    //     return age;
    // };
    // void setAge(int newAge)
    // {
    //     age = newAge;
    // };

    // enum DegreeProgram getDegreeProgram()
    // {
    //     return degreeProgram;
    // };
    // void setDegreeProgram(enum DegreeProgram newDegreeProgram)
    // {
    //     degreeProgram = newDegreeProgram;
    // };

    // int getNumberOfDays()
    // {
    //     return *numberOfDays;
    // };

    // void setNumberOfDays(int *newNumberOfDays)
    // {
    //     numberOfDays = newNumberOfDays;
    // };
};

#endif // PROJECT_STUDENT_H
