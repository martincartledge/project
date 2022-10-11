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
    void setStudentId(char newStudentID) {
        studentID = newStudentID;
    };

    char getFirstName() {
        return firstName;
    };
    void setFirstName(char newFirstName) {
        firstName = newFirstName;
    };

    char getLastName() {
        return lastName;
    };
    void setLastName(char newLastName) {
        lastName = newLastName;
    };

    char getEmailAddress() {
        return emailAddress;
    };
    void setEmailAddress(char newEmailAddress) {
        emailAddress = newEmailAddress;
    };

    int getAge() {
        return age;
    };
    void setAge(int newAge) {
        age = newAge;
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
