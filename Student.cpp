#include "student.h"

Student::Student() // Parameterless constructor sets all fields to default values
{
    this->studentID = "";
    this->firstName = "";
    this->lastName = "";
    this->emailAddress = "";
    this->age = 0;
    this->degreeProgram = DegreeProgram::NETWORK;
    this->numberOfDays = nullptr;
}

Student::Student(string studentID, string firstName, string lastName, string emailAddress, int age, DegreeProgram degreeProgram, int *numberOfDays, int numberOfDaysCapacity) // Full constructor
{
    this->studentID = studentID;
    this->firstName = firstName;
    this->lastName = lastName;
    this->emailAddress = emailAddress;
    this->age = age;
    this->degreeProgram = degreeProgram;
    this->numberOfDays = new int[numberOfDaysCapacity];
    for (int i = 0; i < numberOfDaysCapacity; i++)
    {
        this->numberOfDays[i] = numberOfDays[i];
    }
}

Student::~Student() {} // Deconstructor

// Getters
string Student::getStudentID() { return this->studentID; }
string Student::getFirstName() { return this->firstName; }
string Student::getLastName() { return this->lastName; }
string Student::getEmailAddress() { return this->emailAddress; }
int Student::getAge() { return this->age; }
DegreeProgram Student::getDegreeProgram() { return this->degreeProgram; }
int *Student::getNumberOfDays() { return this->numberOfDays; }

// Setters
void Student::setStudentID(string ID) { this->studentID = ID; }
void Student::setFirstName(string firstName) { this->firstName = firstName; }
void Student::setLastName(string lastName) { this->lastName = lastName; }
void Student::setEmailAddress(string emailAddress) { this->emailAddress = emailAddress; }
void Student::setAge(int age) { this->age = age; }
void Student::setDegreeProgram(DegreeProgram degreeProgram) { this->degreeProgram = degreeProgram; }
void Student::setNumberOfDays(int *numberOfDays) { this->numberOfDays = numberOfDays; }

void Student::print()
{
    int *daysList = getNumberOfDays();

    cout << this->studentID << '\t';
    cout << this->firstName << '\t';
    cout << this->lastName << '\t';
    cout << this->emailAddress << '\t';
    cout << this->age << '\t';
    cout << degreeProgramTypes[(int)this->degreeProgram] << '\t';
    cout << *daysList << " " << *(daysList + 1) << " " << *(daysList + 2) << endl;
    cout << endl;
}
