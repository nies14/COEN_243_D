#include "header.h"

Student :: Student()
{
    name = "";
    id = "";
    gender = 0;
}

Student :: Student(string studentId, string studentName, int studentGender)
{
    name = studentName;
    id = studentId;
    gender = studentGender;
}

void Student :: setName(string studentName)
{
    name = studentName;
}

string Student :: getName()
{
    return name;
}

void Student :: setId(string studentid)
{
    id = studentid;
}

string Student :: getId()
{
    return id;
}
