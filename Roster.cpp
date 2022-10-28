#include "Roster.h"
#include <iostream>
#include <string>

void Roster::parse(string studentData)
{
    DegreeProgram dp = DegreeProgram::NETWORK;

    string parsed[8];
    int right = 0;
    int left = 0;

    for (int i = 0; i < 8; i++)
    {
        right = studentData.find(",", left);
        parsed[i] = studentData.substr(left, right - left);
        left = right + 1;
    }

    add(stoi(parsed[0]), parsed[1], parsed[2], parsed[3], stoi(parsed[4]), stoi(parsed[5]), stoi(parsed[6]), stoi(parsed[7]), dp);
}
