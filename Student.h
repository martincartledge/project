//
// Created by Martin Cartledge on 10/9/22.
//

#ifndef PROJECT_STUDENT_H
#define PROJECT_STUDENT_H


#include "degree.h"

class Student {

private:
    char studentID;
    char firstName;
    char lastName;
    char emailAddress;
    int age;
    enum DegreeProgram degreeProgram;
    int* numberOfDays;

public:
    Student(char studentID, char firstName, char lastName, char emailAddress, int age, enum DegreeProgram degreeProgram, int* numberOfDays);

    char getStudentId() {
        return studentID;
    };
    void setStudentId(char new_studentID) {
        studentID = new_studentID;
    };

    char getFirstName() {
        return firstName;
    };
    void setFirstName(char new_firstName) {
        firstName = new_firstName;
    };

    char getLastName() {
        return lastName;
    };
    void setLastName(char new_lastName) {
        lastName = new_lastName;
    };

    char getEmailAddress() {
        return emailAddress;
    };
    void setEmailAddress(char new_emailAddress) {
        emailAddress = new_emailAddress;
    };

    int getAge() {
        return age;
    };
    void setAge(int new_age) {
        age = new_age;
    };

    enum DegreeProgram getDegreeProgram() {
        return degreeProgram;
    };
    void setDegreeProgram(enum DegreeProgram newDegreeProgram) {
        degreeProgram = newDegreeProgram;
    };

    int getNumberOfDays() {
        return *numberOfDays;
    };

    void setNumberOfDays(int* newNumberOfDays) {
        numberOfDays = newNumberOfDays;
    };
};


#endif //PROJECT_STUDENT_H
