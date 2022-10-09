//
// Created by Martin Cartledge on 10/9/22.
//

#ifndef PROJECT_STUDENT_H
#define PROJECT_STUDENT_H


#include "degree.h"

class Student {
public:
    Student(char student_id, char first_name, char last_name, char email_address, int age, enum DegreeProgram degree_program, int number_of_days);
private:
    char  student_id;
    char first_name;
    char last_name;
    char email_address;
    int age;
    enum DegreeProgram degree_program;
    int number_of_days[16] = {};

    char get_student_id() {
        return student_id;
    };
    void set_student_id(char new_student_id) {
        student_id = new_student_id;
    };

    char get_first_name() {
        return first_name;
    };
    void set_first_name(char new_first_name) {
        first_name = new_first_name;
    };

    char get_last_name() {
        return last_name;
    };
    void set_last_name(char new_last_name) {
        last_name = new_last_name;
    };

    char get_email_address() {
        return email_address;
    };
    void set_email_address(char new_email_address) {
        email_address = new_email_address;
    };

    int get_age() {
        return age;
    };
    void set_age(int new_age) {
        age = new_age;
    };

    enum DegreeProgram get_degree_program() {
        return degree_program;
    };
    void set_degree_program(enum DegreeProgram new_degree_program) {
        degree_program = new_degree_program;
    };
    //    Cannot initialize return object of type 'int' with an lvalue of type 'int[16]'
    int get_number_of_days() {
        return number_of_days;
    };
    //    Array type 'int[16]' is not assignable
    void set_number_of_days(int new_number_of_days) {
        number_of_days = {new_number_of_days};
    };
};


#endif //PROJECT_STUDENT_H
